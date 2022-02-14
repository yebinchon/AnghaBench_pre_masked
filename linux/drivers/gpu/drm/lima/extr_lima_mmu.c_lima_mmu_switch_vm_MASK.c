
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dma; } ;
struct lima_vm {TYPE_1__ pd; } ;
struct lima_ip {struct lima_device* dev; } ;
struct lima_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct lima_ip *VAR_7, struct lima_vm *VAR_8)
{
 struct lima_device *VAR_9 = VAR_7->dev;
 u32 VAR_10;

 FUNC_0(VAR_2,
         VAR_5, VAR_10,
         VAR_10 & VAR_6);

 if (VAR_8)
  FUNC_1(VAR_4, VAR_8->pd.dma);


 FUNC_1(VAR_0, VAR_3);

 FUNC_0(VAR_1,
         VAR_5, VAR_10,
         !(VAR_10 & VAR_6));
}
