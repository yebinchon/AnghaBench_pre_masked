
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm90_data {scalar_t__ kind; int config; } ;


 int FUNC_0 (struct lm90_data*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct lm90_data *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->kind == VAR_0) {
  u8 VAR_4 = VAR_1->config & ~0x08;

  if (VAR_2)
   VAR_4 |= 0x08;
  VAR_3 = FUNC_0(VAR_1, VAR_4);
 }
 return VAR_3;
}
