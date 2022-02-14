
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chachapoly_req_ctx {int flags; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aead_request*,int) ;
 struct chachapoly_req_ctx* FUNC_1 (struct aead_request*) ;

__attribute__((used)) static inline void FUNC_2(struct aead_request *VAR_3, int VAR_4,
           int (*VAR_5)(struct aead_request *))
{
 if (!VAR_4) {
  struct chachapoly_req_ctx *VAR_6 = FUNC_1(VAR_3);

  VAR_6->flags &= ~VAR_0;
  VAR_4 = VAR_5(VAR_3);
 }

 if (VAR_4 != -VAR_2 && VAR_4 != -VAR_1)
  FUNC_0(VAR_3, VAR_4);
}
