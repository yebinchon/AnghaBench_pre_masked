
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ina3221_data {int * fields; int reg_config; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int,int) ;

__attribute__((used)) static inline int FUNC_2(struct ina3221_data *VAR_1)
{
 u32 VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_1->reg_config);


 return FUNC_1(VAR_1->fields[VAR_0],
           VAR_3, VAR_3, VAR_2, VAR_2 * 2);
}
