
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_hash_request_ctx {int * hw_context; } ;
struct stm32_hash_dev {int dev; } ;
struct stm32_hash_ctx {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct stm32_hash_request_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 () ;
 struct stm32_hash_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct ahash_request*) ;
 int * FUNC_5 (int,int,int ) ;
 int FUNC_6 (void*,struct stm32_hash_request_ctx*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct stm32_hash_dev* FUNC_10 (struct stm32_hash_ctx*) ;
 int FUNC_11 (struct stm32_hash_dev*,int ) ;

__attribute__((used)) static int FUNC_12(struct ahash_request *VAR_7, void *VAR_8)
{
 struct stm32_hash_request_ctx *VAR_9 = FUNC_1(VAR_7);
 struct stm32_hash_ctx *VAR_10 = FUNC_3(FUNC_4(VAR_7));
 struct stm32_hash_dev *VAR_11 = FUNC_10(VAR_10);
 u32 *VAR_12;
 unsigned int VAR_13;

 FUNC_7(VAR_11->dev);

 while ((FUNC_11(VAR_11, VAR_4) & VAR_5))
  FUNC_2();

 VAR_9->hw_context = FUNC_5(3 + VAR_2,
      sizeof(u32),
      VAR_0);

 VAR_12 = VAR_9->hw_context;

 *VAR_12++ = FUNC_11(VAR_11, VAR_3);
 *VAR_12++ = FUNC_11(VAR_11, VAR_6);
 *VAR_12++ = FUNC_11(VAR_11, VAR_1);
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
  *VAR_12++ = FUNC_11(VAR_11, FUNC_0(VAR_13));

 FUNC_8(VAR_11->dev);
 FUNC_9(VAR_11->dev);

 FUNC_6(VAR_8, VAR_9, sizeof(*VAR_9));

 return 0;
}
