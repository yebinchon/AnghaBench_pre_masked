
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_cryp {struct ablkcipher_request* req; } ;
struct ablkcipher_request {int * info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct stm32_cryp*) ;
 int FUNC_2 (struct stm32_cryp*,int ) ;

__attribute__((used)) static void FUNC_3(struct stm32_cryp *VAR_4)
{
 struct ablkcipher_request *VAR_5 = VAR_4->req;
 u32 *VAR_6 = VAR_5->info;

 if (!VAR_6)
  return;

 *VAR_6++ = FUNC_0(FUNC_2(VAR_4, VAR_0));
 *VAR_6++ = FUNC_0(FUNC_2(VAR_4, VAR_1));

 if (FUNC_1(VAR_4)) {
  *VAR_6++ = FUNC_0(FUNC_2(VAR_4, VAR_2));
  *VAR_6++ = FUNC_0(FUNC_2(VAR_4, VAR_3));
 }
}
