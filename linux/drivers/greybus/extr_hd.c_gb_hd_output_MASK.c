
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct gb_host_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* output ) (struct gb_host_device*,void*,int ,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct gb_host_device*,void*,int ,int ,int) ;

int FUNC_1(struct gb_host_device *VAR_1, void *VAR_2, u16 VAR_3, u8 VAR_4,
   bool VAR_5)
{
 if (!VAR_1 || !VAR_1->driver || !VAR_1->driver->output)
  return -VAR_0;
 return VAR_1->driver->output(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
