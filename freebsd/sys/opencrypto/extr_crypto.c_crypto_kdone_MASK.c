
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cryptocap {scalar_t__ cc_koperations; int cc_flags; } ;
struct crypto_ret_worker {int crp_ret_kq; int crp_ret_q; } ;
struct cryptkop {scalar_t__ krp_status; size_t krp_hid; } ;
struct TYPE_2__ {int cs_kerrs; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct crypto_ret_worker* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct crypto_ret_worker*) ;
 int FUNC_4 (struct crypto_ret_worker*) ;
 int FUNC_5 (struct crypto_ret_worker*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int *,struct cryptkop*,int ) ;
 struct cryptocap* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_8 (struct cryptocap*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *) ;

void
FUNC_10(struct cryptkop *VAR_5)
{
 struct crypto_ret_worker *VAR_6;
 struct cryptocap *VAR_7;

 if (VAR_5->krp_status != 0)
  VAR_3.cs_kerrs++;
 FUNC_0();

 if (VAR_5->krp_hid < VAR_2) {
  VAR_7 = &VAR_1[VAR_5->krp_hid];
  FUNC_6(VAR_7->cc_koperations > 0, ("cc_koperations == 0"));
  VAR_7->cc_koperations--;
  if (VAR_7->cc_flags & VAR_0)
   FUNC_8(VAR_7);
 }
 FUNC_1();

 VAR_6 = FUNC_2(0);

 FUNC_4(VAR_6);
 if (FUNC_3(VAR_6))
  FUNC_9(&VAR_6->crp_ret_q);
 FUNC_7(&VAR_6->crp_ret_kq, VAR_5, VAR_4);
 FUNC_5(VAR_6);
}
