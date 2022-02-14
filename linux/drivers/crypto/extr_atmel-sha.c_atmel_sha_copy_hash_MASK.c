
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_sha_reqctx {int flags; int dd; scalar_t__ digest; } ;
struct ahash_request {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (unsigned int) ;
 struct atmel_sha_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ahash_request *VAR_5)
{
 struct atmel_sha_reqctx *VAR_6 = FUNC_1(VAR_5);
 u32 *VAR_7 = (u32 *)VAR_6->digest;
 unsigned int VAR_8, VAR_9;

 switch (VAR_6->flags & VAR_3) {
 case 132:
  VAR_9 = VAR_0;
  break;

 case 131:
 case 130:
  VAR_9 = VAR_1;
  break;

 case 129:
 case 128:
  VAR_9 = VAR_2;
  break;

 default:

  return;
 }

 for (VAR_8 = 0; VAR_8 < VAR_9 / sizeof(u32); ++VAR_8)
  VAR_7[VAR_8] = FUNC_2(VAR_6->dd, FUNC_0(VAR_8));
 VAR_6->flags |= VAR_4;
}
