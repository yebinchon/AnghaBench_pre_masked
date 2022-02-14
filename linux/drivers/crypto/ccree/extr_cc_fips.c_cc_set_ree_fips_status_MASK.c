
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_drvdata {scalar_t__ hw_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct cc_drvdata*,int ,int) ;

void FUNC_2(struct cc_drvdata *VAR_5, bool VAR_6)
{
 int VAR_7 = VAR_2;

 if (VAR_5->hw_rev < VAR_3)
  return;

 VAR_7 |= (VAR_6 ? VAR_1 : VAR_0);

 FUNC_1(VAR_5, FUNC_0(VAR_4), VAR_7);
}
