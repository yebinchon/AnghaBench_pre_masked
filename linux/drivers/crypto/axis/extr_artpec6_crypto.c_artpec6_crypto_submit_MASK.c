
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct artpec6_crypto_req_common {int list; TYPE_1__* req; } ;
struct artpec6_crypto {int queue_lock; int queue; int pending; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct artpec6_crypto_req_common*) ;
 int VAR_3 ;
 int FUNC_2 (struct artpec6_crypto_req_common*) ;
 struct artpec6_crypto* FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct artpec6_crypto_req_common *VAR_4)
{
 struct artpec6_crypto *VAR_5 = FUNC_3(VAR_3);
 int VAR_6 = -VAR_1;

 FUNC_5(&VAR_5->queue_lock);

 if (!FUNC_0()) {
  FUNC_4(&VAR_4->list, &VAR_5->pending);
  FUNC_2(VAR_4);
  VAR_6 = -VAR_2;
 } else if (VAR_4->req->flags & VAR_0) {
  FUNC_4(&VAR_4->list, &VAR_5->queue);
 } else {
  FUNC_1(VAR_4);
 }

 FUNC_6(&VAR_5->queue_lock);

 return VAR_6;
}
