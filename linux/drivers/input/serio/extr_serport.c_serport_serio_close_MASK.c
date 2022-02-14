
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serport {int lock; int flags; } ;
struct serio {struct serport* port_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct serio *VAR_1)
{
 struct serport *VAR_2 = VAR_1->port_data;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_2(&VAR_2->lock, VAR_3);
}
