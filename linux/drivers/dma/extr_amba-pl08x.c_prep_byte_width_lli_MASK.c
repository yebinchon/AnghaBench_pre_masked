
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pl08x_lli_build_data {int dummy; } ;
struct pl08x_driver_data {int dummy; } ;


 int FUNC_0 (struct pl08x_driver_data*,struct pl08x_lli_build_data*,int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pl08x_driver_data*,scalar_t__,int,int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct pl08x_driver_data *VAR_0,
   struct pl08x_lli_build_data *VAR_1, u32 *VAR_2, u32 VAR_3,
   int VAR_4, size_t *VAR_5)
{
 *VAR_2 = FUNC_1(VAR_0, *VAR_2, 1, 1, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3, *VAR_2, VAR_3);
 (*VAR_5) += VAR_3;
}
