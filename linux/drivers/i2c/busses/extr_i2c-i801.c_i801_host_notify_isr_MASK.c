
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i801_priv {int adapter; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct i801_priv*) ;
 int FUNC_1 (struct i801_priv*) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned short) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct i801_priv *VAR_2)
{
 unsigned short VAR_3;

 VAR_3 = FUNC_3(FUNC_0(VAR_2)) >> 1;






 FUNC_2(&VAR_2->adapter, VAR_3);


 FUNC_4(VAR_1, FUNC_1(VAR_2));
 return VAR_0;
}
