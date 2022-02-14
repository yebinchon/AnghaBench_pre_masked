
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_engine {int * channel; int bd0_phys; TYPE_1__* channel_control; int bd0; int dev; } ;
struct TYPE_2__ {int current_bd_ptr; int base_bd_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct sdma_engine *VAR_5)
{
 int VAR_6 = -VAR_0;

 VAR_5->bd0 = FUNC_0(VAR_5->dev, VAR_4, &VAR_5->bd0_phys,
     VAR_2);
 if (!VAR_5->bd0) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_5->channel_control[0].base_bd_ptr = VAR_5->bd0_phys;
 VAR_5->channel_control[0].current_bd_ptr = VAR_5->bd0_phys;

 FUNC_1(&VAR_5->channel[0], VAR_3);
 return 0;
out:

 return VAR_6;
}
