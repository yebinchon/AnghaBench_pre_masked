
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct dtl1_info* priv; } ;
struct dtl1_info {int dummy; } ;


 int FUNC_0 (struct dtl1_info*) ;
 int FUNC_1 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_device *VAR_0)
{
 struct dtl1_info *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1);
 FUNC_1(VAR_0);
}
