
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tc_data {int regmap; } ;


 int FUNC_0 (int ,unsigned int,unsigned int,int,unsigned long,int ) ;

__attribute__((used)) static inline int FUNC_1(struct tc_data *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3,
      unsigned long VAR_4, u64 VAR_5)
{
 unsigned int VAR_6;

 return FUNC_0(VAR_0->regmap, VAR_1, VAR_6,
     (VAR_6 & VAR_2) == VAR_3,
     VAR_4, VAR_5);
}
