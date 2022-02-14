
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipuv3_channel {int num; } ;
struct ipu_soc {int dummy; } ;
typedef enum ipu_channel_irq { ____Placeholder_ipu_channel_irq } ipu_channel_irq ;


 int FUNC_0 (struct ipu_soc*,int) ;

int FUNC_1(struct ipu_soc *VAR_0, struct ipuv3_channel *VAR_1,
  enum ipu_channel_irq VAR_2)
{
 return FUNC_0(VAR_0, VAR_2 + VAR_1->num);
}
