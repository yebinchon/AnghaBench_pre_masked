
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer16_priv {int total_cycles; scalar_t__ mapcommon; int ovf; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct timer16_priv *VAR_4 = (struct timer16_priv *)VAR_3;

 FUNC_0(VAR_4->ovf, VAR_4->mapcommon + VAR_1);
 VAR_4->total_cycles += 0x10000;

 return VAR_0;
}
