
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_async_request {int flags; int tfm; } ;
struct ccp_crypto_cmd {int tfm; struct crypto_async_request* req; struct ccp_cmd* cmd; } ;
struct ccp_cmd {int flags; struct ccp_crypto_cmd* data; int callback; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ccp_crypto_cmd*) ;
 struct ccp_crypto_cmd* FUNC_1 (int,int ) ;

int FUNC_2(struct crypto_async_request *VAR_7,
          struct ccp_cmd *VAR_8)
{
 struct ccp_crypto_cmd *VAR_9;
 gfp_t VAR_10;

 VAR_10 = VAR_7->flags & VAR_2 ? VAR_5 : VAR_4;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_10);
 if (!VAR_9)
  return -VAR_3;






 VAR_9->cmd = VAR_8;
 VAR_9->req = VAR_7;
 VAR_9->tfm = VAR_7->tfm;

 VAR_8->callback = VAR_6;
 VAR_8->data = VAR_9;

 if (VAR_7->flags & VAR_1)
  VAR_8->flags |= VAR_0;
 else
  VAR_8->flags &= ~VAR_0;

 return FUNC_0(VAR_9);
}
