
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {int cleanup_done; int list; } ;


 scalar_t__ VAR_0 ;
 struct hwrng* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;

void FUNC_8(struct hwrng *VAR_5)
{
 int VAR_6;

 FUNC_5(&VAR_4);

 FUNC_3(&VAR_5->list);
 if (VAR_1 == VAR_5) {
  VAR_6 = FUNC_1();
  if (VAR_6) {
   FUNC_0();
   VAR_0 = 0;
  }
 }

 if (FUNC_4(&VAR_3)) {
  FUNC_6(&VAR_4);
  if (VAR_2)
   FUNC_2(VAR_2);
 } else
  FUNC_6(&VAR_4);

 FUNC_7(&VAR_5->cleanup_done);
}
