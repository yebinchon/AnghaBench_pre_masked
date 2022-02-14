
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {int flags; int digest; } ;
struct ahash_request {int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ahash_request *VAR_6)
{
 struct atmel_sha_reqctx *VAR_7 = FUNC_0(VAR_6);

 if (!VAR_6->result)
  return;

 switch (VAR_7->flags & VAR_5) {
 default:
 case 132:
  FUNC_1(VAR_6->result, VAR_7->digest, VAR_0);
  break;

 case 131:
  FUNC_1(VAR_6->result, VAR_7->digest, VAR_1);
  break;

 case 130:
  FUNC_1(VAR_6->result, VAR_7->digest, VAR_2);
  break;

 case 129:
  FUNC_1(VAR_6->result, VAR_7->digest, VAR_3);
  break;

 case 128:
  FUNC_1(VAR_6->result, VAR_7->digest, VAR_4);
  break;
 }
}
