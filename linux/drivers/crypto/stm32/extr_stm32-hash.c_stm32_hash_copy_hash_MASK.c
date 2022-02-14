
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_hash_request_ctx {int flags; int hdev; scalar_t__ digest; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct stm32_hash_request_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ahash_request *VAR_5)
{
 struct stm32_hash_request_ctx *VAR_6 = FUNC_1(VAR_5);
 u32 *VAR_7 = (u32 *)VAR_6->digest;
 unsigned int VAR_8, VAR_9;

 switch (VAR_6->flags & VAR_0) {
 case 131:
  VAR_9 = VAR_1;
  break;
 case 130:
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_9 = VAR_4;
  break;
 default:
  return;
 }

 for (VAR_8 = 0; VAR_8 < VAR_9 / sizeof(u32); VAR_8++)
  VAR_7[VAR_8] = FUNC_2(FUNC_3(VAR_6->hdev,
            FUNC_0(VAR_8)));
}
