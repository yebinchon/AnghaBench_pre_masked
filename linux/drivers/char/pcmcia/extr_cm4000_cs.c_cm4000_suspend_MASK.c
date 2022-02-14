
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct cm4000_dev* priv; } ;
struct cm4000_dev {int dummy; } ;


 int FUNC_0 (struct cm4000_dev*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_0)
{
 struct cm4000_dev *VAR_1;

 VAR_1 = VAR_0->priv;
 FUNC_0(VAR_1);

 return 0;
}
