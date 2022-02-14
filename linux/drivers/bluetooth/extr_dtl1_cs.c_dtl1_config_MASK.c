
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; struct dtl1_info* priv; } ;
struct dtl1_info {int dummy; } ;
struct TYPE_2__ {int end; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct dtl1_info*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct pcmcia_device*,int ,int *) ;
 int FUNC_4 (struct pcmcia_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_2)
{
 struct dtl1_info *VAR_3 = VAR_2->priv;
 int VAR_4;


 VAR_2->resource[0]->end = 8;
 VAR_4 = FUNC_3(VAR_2, VAR_0, ((void*)0));
 if (VAR_4)
  goto failed;

 VAR_4 = FUNC_4(VAR_2, VAR_1);
 if (VAR_4)
  goto failed;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  goto failed;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto failed;

 return 0;

failed:
 FUNC_0(VAR_2);
 return VAR_4;
}
