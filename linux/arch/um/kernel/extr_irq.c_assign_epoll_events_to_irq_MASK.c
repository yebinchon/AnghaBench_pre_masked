
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fd {int events; } ;
struct irq_entry {int fd; struct irq_fd** irq_array; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct irq_entry*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct irq_entry *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 struct irq_fd *VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_0 ; VAR_2++) {
  VAR_4 = VAR_1->irq_array[VAR_2];
  if (VAR_4 != ((void*)0))
   VAR_3 = VAR_4->events | VAR_3;
 }
 if (VAR_3 > 0) {

  return FUNC_0(VAR_3, VAR_1->fd, VAR_1);
 }

 return FUNC_1(VAR_1->fd);
}
