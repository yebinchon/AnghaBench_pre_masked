
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mx25_tcq_priv {int regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mx25_tcq_priv*) ;
 int FUNC_1 (struct mx25_tcq_priv*) ;
 int FUNC_2 (struct mx25_tcq_priv*) ;
 int FUNC_3 (struct mx25_tcq_priv*) ;
 int FUNC_4 (struct mx25_tcq_priv*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct mx25_tcq_priv *VAR_10 = VAR_9;
 u32 VAR_11;
 int VAR_12 = VAR_0;

 FUNC_5(VAR_10->regs, VAR_2, &VAR_11);

 if (VAR_11 & (VAR_5 | VAR_6 | VAR_4))
  FUNC_4(VAR_10);

 if (VAR_11 & VAR_7) {
  FUNC_1(VAR_10);
  FUNC_3(VAR_10);
  FUNC_2(VAR_10);
 }

 if (VAR_11 & VAR_3) {
  FUNC_0(VAR_10);
  VAR_12 = VAR_1;
 }

 FUNC_6(VAR_10->regs, VAR_2, VAR_5 |
      VAR_6 | VAR_4 |
      VAR_7,
      VAR_5 | VAR_6 |
      VAR_4 | VAR_7);

 return VAR_12;
}
