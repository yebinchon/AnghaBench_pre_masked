
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcma_device {TYPE_1__* bus; } ;
struct TYPE_2__ {int hosttype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcma_device*,int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;

u32 FUNC_2(struct bcma_device *VAR_5)
{
 switch (VAR_5->bus->hosttype) {
 case 128:
  return 0;
 case 129:
  if (FUNC_0(VAR_5, VAR_3) & VAR_4)
   return VAR_1;
  else
   return VAR_0;
 default:
  FUNC_1(VAR_5->bus, "DMA translation unknown for host %d\n",
    VAR_5->bus->hosttype);
 }
 return VAR_2;
}
