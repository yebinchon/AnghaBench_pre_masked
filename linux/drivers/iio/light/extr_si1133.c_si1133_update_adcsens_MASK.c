
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct si1133_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct si1133_data*,int ,int) ;
 int FUNC_2 (struct si1133_data*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct si1133_data *VAR_0, u8 VAR_1,
     u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_2(VAR_0, FUNC_0(0),
     &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_5 &= ~VAR_1;
 VAR_5 |= (VAR_3 << VAR_2);

 return FUNC_1(VAR_0, 0, VAR_5);
}
