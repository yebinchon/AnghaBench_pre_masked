
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_data {int regmap; } ;


 int FUNC_0 (size_t,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (void*,int *,size_t) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct tc_data *VAR_1, void *VAR_2, size_t VAR_3)
{
 u32 VAR_4[VAR_0 / sizeof(u32)];
 int VAR_5, VAR_6 = FUNC_0(VAR_3, sizeof(u32));

 VAR_5 = FUNC_3(VAR_1->regmap, FUNC_1(0), VAR_4, VAR_6);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_2, VAR_4, VAR_3);

 return VAR_3;
}
