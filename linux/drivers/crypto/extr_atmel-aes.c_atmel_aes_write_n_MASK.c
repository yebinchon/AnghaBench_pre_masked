
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_aes_dev {int dummy; } ;


 int FUNC_0 (struct atmel_aes_dev*,int,int const) ;

__attribute__((used)) static void FUNC_1(struct atmel_aes_dev *VAR_0, u32 VAR_1,
         const u32 *VAR_2, int VAR_3)
{
 for (; VAR_3--; VAR_2++, VAR_1 += 4)
  FUNC_0(VAR_0, VAR_1, *VAR_2);
}
