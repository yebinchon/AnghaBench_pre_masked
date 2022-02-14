
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct adv7511 {scalar_t__ type; int regmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static inline int FUNC_1(struct device *VAR_4, struct adv7511 *VAR_5)
{
 unsigned int VAR_6 = VAR_5->type == VAR_2 ?
      VAR_3 : 0;

 FUNC_0(VAR_5->regmap, VAR_1 + VAR_6,
       VAR_0);
 return 0;
}
