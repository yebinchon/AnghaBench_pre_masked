
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cc_drvdata {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct cc_drvdata*,int,int) ;
 int FUNC_2 (struct cc_drvdata*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_2)
{
 struct cc_drvdata *VAR_3 = (struct cc_drvdata *)VAR_2;
 u32 VAR_4, VAR_5;

 VAR_4 = (VAR_3->irq & (VAR_0));

 if (VAR_4) {
  FUNC_2(VAR_3);
 }




 VAR_5 = (FUNC_0(VAR_1) & ~VAR_4);
 FUNC_1(VAR_3, FUNC_0(VAR_1), VAR_5);
}
