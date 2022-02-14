
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int * resource; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_2, void *VAR_3)
{
 if (FUNC_1(VAR_2->resource[VAR_1]) != 0x11)
  return -VAR_0;
 return FUNC_0(VAR_2);
}
