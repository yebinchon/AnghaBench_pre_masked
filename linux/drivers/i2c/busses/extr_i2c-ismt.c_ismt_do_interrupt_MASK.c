
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ismt_priv {scalar_t__ smba; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ismt_priv*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 u32 VAR_6;
 struct ismt_priv *VAR_7 = VAR_5;





 VAR_6 = FUNC_1(VAR_7->smba + VAR_1);

 if (!(VAR_6 & (VAR_3 | VAR_2)))
  return VAR_0;
 else
  FUNC_2(VAR_6 | VAR_3 | VAR_2,
         VAR_7->smba + VAR_1);

 return FUNC_0(VAR_7);
}
