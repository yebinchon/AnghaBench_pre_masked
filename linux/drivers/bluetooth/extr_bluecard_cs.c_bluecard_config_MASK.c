
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_index; int io_lines; TYPE_1__** resource; struct bluecard_info* priv; } ;
struct bluecard_info {int dummy; } ;
struct TYPE_2__ {int end; int start; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bluecard_info*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (struct pcmcia_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_3)
{
 struct bluecard_info *VAR_4 = VAR_3->priv;
 int VAR_5, VAR_6;

 VAR_3->config_index = 0x20;

 VAR_3->resource[0]->flags |= VAR_1;
 VAR_3->resource[0]->end = 64;
 VAR_3->io_lines = 6;

 for (VAR_6 = 0; VAR_6 < 0x400; VAR_6 += 0x40) {
  VAR_3->resource[0]->start = VAR_6 ^ 0x300;
  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5 == 0)
   break;
 }

 if (VAR_5 != 0)
  goto failed;

 VAR_5 = FUNC_4(VAR_3, VAR_2);
 if (VAR_5 != 0)
  goto failed;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 != 0)
  goto failed;

 if (FUNC_0(VAR_4) != 0)
  goto failed;

 return 0;

failed:
 FUNC_1(VAR_3);
 return -VAR_0;
}
