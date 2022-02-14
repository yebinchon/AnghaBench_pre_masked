
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct listen_ctx {scalar_t__ state; TYPE_1__* lsk; } ;
struct cpl_pass_open_rpl {scalar_t__ status; } ;
struct chtls_dev {int tids; } ;
struct TYPE_2__ {int sk_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct cpl_pass_open_rpl*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct cpl_pass_open_rpl* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,unsigned int,int ) ;
 int FUNC_3 (struct listen_ctx*) ;
 scalar_t__ FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,scalar_t__,unsigned int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct chtls_dev *VAR_6, struct sk_buff *VAR_7)
{
 struct cpl_pass_open_rpl *VAR_8 = FUNC_1(VAR_7) + VAR_2;
 unsigned int VAR_9 = FUNC_0(VAR_8);
 struct listen_ctx *VAR_10;

 VAR_10 = (struct listen_ctx *)FUNC_4(VAR_6->tids, VAR_9);
 if (!VAR_10)
  return VAR_1;

 if (VAR_10->state == VAR_4) {
  VAR_10->state = VAR_3;
  return VAR_1;
 }

 if (VAR_8->status != VAR_0) {
  FUNC_6("Unexpected PASS_OPEN_RPL status %u for STID %u\n",
   VAR_8->status, VAR_9);
  return VAR_1;
 }
 FUNC_2(VAR_6->tids, VAR_9, VAR_10->lsk->sk_family);
 FUNC_7(VAR_10->lsk);
 FUNC_3(VAR_10);
 FUNC_5(VAR_5);

 return 0;
}
