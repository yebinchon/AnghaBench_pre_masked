
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpsimd_last_state_struct {scalar_t__ sve_vl; TYPE_1__* st; scalar_t__ sve_state; } ;
struct TYPE_2__ {int fpsr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*,int *) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 struct fpsimd_last_state_struct* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void)
{
 struct fpsimd_last_state_struct const *VAR_5 =
  FUNC_9(&VAR_4);


 FUNC_0(!FUNC_3());

 if (!FUNC_8(VAR_2)) {
  if (FUNC_7() && FUNC_8(VAR_3)) {
   if (FUNC_0(FUNC_5() != VAR_5->sve_vl)) {





    FUNC_1(VAR_0, VAR_1, 0);
    return;
   }

   FUNC_6((char *)VAR_5->sve_state +
      FUNC_4(VAR_5->sve_vl),
           &VAR_5->st->fpsr);
  } else
   FUNC_2(VAR_5->st);
 }
}
