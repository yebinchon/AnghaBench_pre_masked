
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct safexcel_crypto_priv {scalar_t__ base; } ;
struct firmware {int size; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct safexcel_crypto_priv *VAR_2,
      const struct firmware *VAR_3)
{
 const u32 *VAR_4 = (const u32 *)VAR_3->data;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3->size / sizeof(u32); VAR_5++)
  FUNC_1(FUNC_0(VAR_4[VAR_5]),
         VAR_2->base + VAR_0 + VAR_5 * sizeof(u32));


 return VAR_5 - VAR_1;
}
