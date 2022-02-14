
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
typedef enum cc_sg_cpy_direct { ____Placeholder_cc_sg_cpy_direct } cc_sg_cpy_direct ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*,scalar_t__,void*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct scatterlist*,scalar_t__) ;

void FUNC_2(struct device *VAR_1, u8 *VAR_2, struct scatterlist *VAR_3,
   u32 VAR_4, u32 VAR_5, enum cc_sg_cpy_direct VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_5);
 FUNC_0(VAR_3, VAR_7, (void *)VAR_2, (VAR_5 - VAR_4 + 1), VAR_4,
         (VAR_6 == VAR_0));
}
