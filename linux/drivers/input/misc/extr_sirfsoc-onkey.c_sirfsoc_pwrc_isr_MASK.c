
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sirfsoc_pwrc_drvdata {int work; int input; scalar_t__ pwrc_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct sirfsoc_pwrc_drvdata *VAR_8 = VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_4(VAR_8->pwrc_base +
       VAR_3);
 FUNC_5(VAR_9 & ~VAR_5,
     VAR_8->pwrc_base + VAR_3);

 FUNC_0(VAR_8->input, VAR_0, VAR_2, 1);
 FUNC_1(VAR_8->input);
 FUNC_3(&VAR_8->work,
         FUNC_2(VAR_4));

 return VAR_1;
}
