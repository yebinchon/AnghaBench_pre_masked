
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct listen_ctx {TYPE_1__* lsk; } ;
struct cpl_close_listsvr_rpl {scalar_t__ status; } ;
struct chtls_dev {int tids; } ;
struct TYPE_2__ {int sk_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct cpl_close_listsvr_rpl*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct cpl_close_listsvr_rpl* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,unsigned int,int ) ;
 int FUNC_3 (struct listen_ctx*) ;
 void* FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,scalar_t__,unsigned int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct chtls_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct cpl_close_listsvr_rpl *VAR_6 = FUNC_1(VAR_5) + VAR_2;
 struct listen_ctx *VAR_7;
 unsigned int VAR_8;
 void *VAR_9;

 VAR_8 = FUNC_0(VAR_6);
 VAR_9 = FUNC_4(VAR_4->tids, VAR_8);
 VAR_7 = (struct listen_ctx *)VAR_9;

 if (VAR_6->status != VAR_0) {
  FUNC_6("Unexpected CLOSE_LISTSRV_RPL status %u for STID %u\n",
   VAR_6->status, VAR_8);
  return VAR_1;
 }

 FUNC_2(VAR_4->tids, VAR_8, VAR_7->lsk->sk_family);
 FUNC_7(VAR_7->lsk);
 FUNC_3(VAR_7);
 FUNC_5(VAR_3);

 return 0;
}
