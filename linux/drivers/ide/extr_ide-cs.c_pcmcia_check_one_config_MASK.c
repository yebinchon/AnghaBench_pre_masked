
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; } ;
struct TYPE_2__ {int flags; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_4, void *VAR_5)
{
 int *VAR_6 = VAR_5;

 if ((VAR_4->resource[0]->flags & VAR_1)
     != VAR_2) {
  VAR_4->resource[0]->flags &= ~VAR_1;
  VAR_4->resource[0]->flags |= VAR_3;
 }
 VAR_4->resource[1]->flags &= ~VAR_1;
 VAR_4->resource[1]->flags |= VAR_2;

 if (VAR_4->resource[1]->end) {
  VAR_4->resource[0]->end = 8;
  VAR_4->resource[1]->end = (*VAR_6) ? 2 : 1;
 } else {
  if (VAR_4->resource[0]->end < 16)
   return -VAR_0;
 }

 return FUNC_0(VAR_4);
}
