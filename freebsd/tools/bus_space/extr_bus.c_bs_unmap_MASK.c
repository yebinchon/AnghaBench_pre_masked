
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int rid; scalar_t__ ptr; int fd; int size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct resource* FUNC_2 (int) ;

int
FUNC_3(int VAR_1)
{
 struct resource *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0))
  return (0);
 if (VAR_2->rid == -1) {
  if (VAR_2->ptr != VAR_0)
   FUNC_1(VAR_2->ptr, VAR_2->size);
  FUNC_0(VAR_2->fd);
 }
 VAR_2->fd = -1;
 return (1);
}
