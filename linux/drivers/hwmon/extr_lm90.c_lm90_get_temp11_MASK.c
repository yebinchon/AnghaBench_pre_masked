
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm90_data {scalar_t__ kind; int * temp11; } ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lm90_data*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3(struct lm90_data *VAR_4, int VAR_5)
{
 s16 VAR_6 = VAR_4->temp11[VAR_5];
 int VAR_7;

 if (VAR_4->kind == VAR_0 || VAR_4->kind == VAR_3)
  VAR_7 = FUNC_2(VAR_4, VAR_6);
 else if (VAR_4->kind == VAR_2)
  VAR_7 = FUNC_1(VAR_6);
 else
  VAR_7 = FUNC_0(VAR_6);


 if (VAR_4->kind == VAR_1 && VAR_5 <= 2)
  VAR_7 += 16000;

 return VAR_7;
}
