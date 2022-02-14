
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qcom_rng {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,int*,unsigned int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct qcom_rng *VAR_4, u8 *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = 0;
 u32 VAR_8;


 do {
  VAR_8 = FUNC_1(VAR_4->base + VAR_1);
  if (!(VAR_8 & VAR_2))
   break;

  VAR_8 = FUNC_1(VAR_4->base + VAR_0);
  if (!VAR_8)
   break;

  if ((VAR_6 - VAR_7) >= VAR_3) {
   FUNC_0(VAR_5, &VAR_8, VAR_3);
   VAR_5 += VAR_3;
   VAR_7 += VAR_3;
  } else {

   FUNC_0(VAR_5, &VAR_8, VAR_6 - VAR_7);
   break;
  }
 } while (VAR_7 < VAR_6);

 return VAR_7;
}
