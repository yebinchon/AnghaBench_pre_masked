
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mx25_tcq_priv {unsigned int sample_count; int regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mx25_tcq_priv*,int *,unsigned int) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct mx25_tcq_priv *VAR_6 = VAR_5;
 u32 VAR_7[VAR_3];
 unsigned int VAR_8;
 u32 VAR_9;
 unsigned int VAR_10;






 FUNC_2(VAR_6->regs, VAR_2, &VAR_9);
 VAR_8 = FUNC_0(VAR_9);
 VAR_8 -= VAR_8 % VAR_6->sample_count;

 if (!VAR_8)
  return VAR_0;

 for (VAR_10 = 0; VAR_10 != VAR_8; ++VAR_10)
  FUNC_2(VAR_6->regs, VAR_1, &VAR_7[VAR_10]);

 FUNC_1(VAR_6, VAR_7, VAR_8);

 return VAR_0;
}
