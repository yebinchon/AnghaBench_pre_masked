
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ad7606_state {int dev; TYPE_2__* bops; scalar_t__ gpio_frstdata; int * data; TYPE_1__* chip_info; } ;
struct TYPE_4__ {int (* read_block ) (int ,int,int *) ;} ;
struct TYPE_3__ {unsigned int num_channels; } ;


 int VAR_0 ;
 int FUNC_0 (struct ad7606_state*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,unsigned int,int *) ;

__attribute__((used)) static int FUNC_4(struct ad7606_state *VAR_1)
{
 unsigned int VAR_2 = VAR_1->chip_info->num_channels;
 u16 *VAR_3 = VAR_1->data;
 int VAR_4;
 if (VAR_1->gpio_frstdata) {
  VAR_4 = VAR_1->bops->read_block(VAR_1->dev, 1, VAR_3);
  if (VAR_4)
   return VAR_4;

  if (!FUNC_1(VAR_1->gpio_frstdata)) {
   FUNC_0(VAR_1);
   return -VAR_0;
  }

  VAR_3++;
  VAR_2--;
 }

 return VAR_1->bops->read_block(VAR_1->dev, VAR_2, VAR_3);
}
