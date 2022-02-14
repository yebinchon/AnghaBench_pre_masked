
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct listen_ctx {struct sock* lsk; } ;
struct cpl_pass_accept_req {int tos_stid; } ;
struct chtls_dev {TYPE_1__* tids; } ;
struct TYPE_4__ {struct chtls_dev* cdev; } ;
struct TYPE_3__ {unsigned int ntids; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct cpl_pass_accept_req*) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cpl_pass_accept_req* FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (TYPE_1__*,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,unsigned int) ;
 int FUNC_7 (int ,struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct chtls_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct cpl_pass_accept_req *VAR_4 = FUNC_3(VAR_3) + VAR_0;
 struct listen_ctx *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 struct sock *VAR_8;
 void *VAR_9;

 VAR_6 = FUNC_2(FUNC_5(VAR_4->tos_stid));
 VAR_7 = FUNC_1(VAR_4);

 VAR_9 = FUNC_4(VAR_2->tids, VAR_6);
 if (!VAR_9)
  return 1;

 VAR_5 = (struct listen_ctx *)VAR_9;
 VAR_8 = VAR_5->lsk;

 if (FUNC_8(VAR_7 >= VAR_2->tids->ntids)) {
  FUNC_6("passive open TID %u too large\n", VAR_7);
  return 1;
 }

 FUNC_0(VAR_3)->cdev = VAR_2;
 FUNC_7(VAR_1, VAR_8, VAR_3);
 return 0;
}
