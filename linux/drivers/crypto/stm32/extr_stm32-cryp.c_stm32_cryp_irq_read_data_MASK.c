
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stm32_cryp {size_t authsize; int hw_blocksize; size_t total_out; int total_in; int out_sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct stm32_cryp*) ;
 scalar_t__ FUNC_1 (struct stm32_cryp*) ;
 scalar_t__ FUNC_2 (struct stm32_cryp*) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (struct stm32_cryp*,int *,int) ;
 int FUNC_6 (struct stm32_cryp*,int ) ;

__attribute__((used)) static bool FUNC_7(struct stm32_cryp *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 u32 VAR_5, *VAR_6;
 u8 *VAR_7;
 size_t VAR_8;


 if (FUNC_1(VAR_2) && (FUNC_2(VAR_2) || FUNC_0(VAR_2)))
  VAR_8 = VAR_2->authsize;
 else
  VAR_8 = 0;

 VAR_6 = FUNC_4(VAR_2->out_sg) + VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2->hw_blocksize / sizeof(u32); VAR_3++) {
  if (FUNC_3(VAR_2->total_out - VAR_8 >= sizeof(u32))) {

   *VAR_6 = FUNC_6(VAR_2, VAR_0);

   VAR_6 = FUNC_5(VAR_2, VAR_6, sizeof(u32));
   VAR_2->total_out -= sizeof(u32);
  } else if (VAR_2->total_out == VAR_8) {

   VAR_5 = FUNC_6(VAR_2, VAR_0);
  } else {

   VAR_5 = FUNC_6(VAR_2, VAR_0);
   VAR_7 = (u8 *)&VAR_5;

   for (VAR_4 = 0; VAR_4 < VAR_2->total_out - VAR_8; VAR_4++) {
    *((u8 *)VAR_6) = *(VAR_7++);
    VAR_6 = FUNC_5(VAR_2, VAR_6, 1);
   }
   VAR_2->total_out = VAR_8;
  }
 }

 return !(VAR_2->total_out - VAR_8) || !VAR_2->total_in;
}
