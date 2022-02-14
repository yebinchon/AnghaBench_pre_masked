
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipuv3_channel {unsigned int num; struct ipu_soc* ipu; } ;
struct ipu_soc {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct ipu_soc*,int ) ;

int FUNC_3(struct ipuv3_channel *VAR_0)
{
 struct ipu_soc *VAR_1 = VAR_0->ipu;
 unsigned int VAR_2 = VAR_0->num;

 return (FUNC_2(VAR_1, FUNC_0(VAR_2)) & FUNC_1(VAR_2)) ? 1 : 0;
}
