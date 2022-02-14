
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bintime {int dummy; } ;
struct cryptop {scalar_t__ crp_seq; int (* krp_callback ) (struct cryptop*) ;int (* crp_callback ) (struct cryptop*) ;struct bintime crp_tstamp; } ;
struct crypto_ret_worker {scalar_t__ reorder_cur_seq; int crp_ret_q; int * cryptoretproc; int crypto_ret_mtx; int crp_ret_kq; int crp_ordered_ret_q; } ;
struct cryptkop {scalar_t__ crp_seq; int (* krp_callback ) (struct cryptop*) ;int (* crp_callback ) (struct cryptop*) ;struct bintime crp_tstamp; } ;
struct TYPE_2__ {int cs_rets; int cs_finis; int cs_cb; } ;


 int FUNC_0 (struct crypto_ret_worker*) ;
 int FUNC_1 (struct crypto_ret_worker*) ;
 int VAR_0 ;
 struct cryptop* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct cryptop*,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *,struct bintime*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int *,int ,char*,int ) ;
 int FUNC_7 (struct cryptop*) ;
 int FUNC_8 (struct cryptop*) ;
 int FUNC_9 (struct cryptop*) ;

__attribute__((used)) static void
FUNC_10(struct crypto_ret_worker *VAR_5)
{
 struct cryptop *VAR_6;
 struct cryptkop *VAR_7;

 FUNC_0(VAR_5);
 for (;;) {

  VAR_6 = FUNC_2(&VAR_5->crp_ordered_ret_q);
  if (VAR_6 != ((void*)0)) {
   if (VAR_6->crp_seq == VAR_5->reorder_cur_seq) {
    FUNC_3(&VAR_5->crp_ordered_ret_q, VAR_6, VAR_1);
    VAR_5->reorder_cur_seq++;
   } else {
    VAR_6 = ((void*)0);
   }
  }

  if (VAR_6 == ((void*)0)) {
   VAR_6 = FUNC_2(&VAR_5->crp_ret_q);
   if (VAR_6 != ((void*)0))
    FUNC_3(&VAR_5->crp_ret_q, VAR_6, VAR_1);
  }

  VAR_7 = FUNC_2(&VAR_5->crp_ret_kq);
  if (VAR_7 != ((void*)0))
   FUNC_3(&VAR_5->crp_ret_kq, VAR_7, VAR_4);

  if (VAR_6 != ((void*)0) || VAR_7 != ((void*)0)) {
   FUNC_1(VAR_5);



   if (VAR_6 != ((void*)0)) {
     VAR_6->crp_callback(VAR_6);
   }
   if (VAR_7 != ((void*)0))
    VAR_7->krp_callback(VAR_7);
   FUNC_0(VAR_5);
  } else {




   FUNC_6(&VAR_5->crp_ret_q, &VAR_5->crypto_ret_mtx, VAR_0,
    "crypto_ret_wait", 0);
   if (VAR_5->cryptoretproc == ((void*)0))
    break;
   VAR_3.cs_rets++;
  }
 }
 FUNC_1(VAR_5);

 FUNC_4(&VAR_5->crp_ret_q);
}
