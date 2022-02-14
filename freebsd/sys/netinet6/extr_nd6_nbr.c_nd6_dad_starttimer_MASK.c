
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dadq {int dad_timer_ch; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int,void (*) (void*),void*) ;
 int FUNC_2 (struct dadq*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct dadq *VAR_1, int VAR_2, int VAR_3)
{

 FUNC_0();

 if (VAR_3 != 0)
  FUNC_2(VAR_1);
 FUNC_1(&VAR_1->dad_timer_ch, VAR_2,
     (void (*)(void *))VAR_0, (void *)VAR_1);
}
