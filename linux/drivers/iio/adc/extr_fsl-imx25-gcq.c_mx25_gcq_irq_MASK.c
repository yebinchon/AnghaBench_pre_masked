
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mx25_gcq_priv {int regs; int completed; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_11, void *VAR_12)
{
 struct mx25_gcq_priv *VAR_13 = VAR_12;
 u32 VAR_14;

 FUNC_1(VAR_13->regs, VAR_5, &VAR_14);

 if (VAR_14 & VAR_6) {
  FUNC_2(VAR_13->regs, VAR_3,
       VAR_4, VAR_4);
  FUNC_0(&VAR_13->completed);
 }


 FUNC_2(VAR_13->regs, VAR_1, VAR_2, 0);


 FUNC_3(VAR_13->regs, VAR_5, VAR_8 |
       VAR_9 | VAR_7 |
       VAR_6 | VAR_10);

 return VAR_0;
}
