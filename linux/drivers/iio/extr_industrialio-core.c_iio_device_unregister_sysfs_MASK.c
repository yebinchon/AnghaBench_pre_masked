
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * attrs; } ;
struct iio_dev {TYPE_1__ chan_attr_group; int channel_attr_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iio_dev *VAR_0)
{

 FUNC_0(&VAR_0->channel_attr_list);
 FUNC_1(VAR_0->chan_attr_group.attrs);
 VAR_0->chan_attr_group.attrs = ((void*)0);
}
