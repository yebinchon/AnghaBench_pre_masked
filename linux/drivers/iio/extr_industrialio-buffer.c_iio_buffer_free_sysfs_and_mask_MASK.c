
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iio_dev {TYPE_3__* buffer; } ;
struct TYPE_5__ {int attrs; } ;
struct TYPE_4__ {int attrs; } ;
struct TYPE_6__ {int scan_el_dev_attr_list; TYPE_2__ scan_el_group; TYPE_1__ buffer_group; int scan_mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct iio_dev *VAR_0)
{
 if (!VAR_0->buffer)
  return;

 FUNC_0(VAR_0->buffer->scan_mask);
 FUNC_2(VAR_0->buffer->buffer_group.attrs);
 FUNC_2(VAR_0->buffer->scan_el_group.attrs);
 FUNC_1(&VAR_0->buffer->scan_el_dev_attr_list);
}
