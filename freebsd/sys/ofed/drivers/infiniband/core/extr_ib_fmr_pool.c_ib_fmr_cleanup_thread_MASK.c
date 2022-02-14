
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_fmr_pool {int req_ser; int flush_ser; int flush_arg; int (* flush_function ) (struct ib_fmr_pool*,int ) ;int force_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ib_fmr_pool*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ib_fmr_pool*,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void *VAR_2)
{
 struct ib_fmr_pool *VAR_3 = VAR_2;

 do {
  if (FUNC_2(&VAR_3->flush_ser) - FUNC_2(&VAR_3->req_ser) < 0) {
   FUNC_3(VAR_3);

   FUNC_1(&VAR_3->flush_ser);
   FUNC_8(&VAR_3->force_wait);

   if (VAR_3->flush_function)
    VAR_3->flush_function(VAR_3, VAR_3->flush_arg);
  }

  FUNC_6(VAR_0);
  if (FUNC_2(&VAR_3->flush_ser) - FUNC_2(&VAR_3->req_ser) >= 0 &&
      !FUNC_4())
   FUNC_5();
  FUNC_0(VAR_1);
 } while (!FUNC_4());

 return 0;
}
