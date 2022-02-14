
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_device {int dummy; } ;
struct firedtv {TYPE_1__* device; } ;
struct TYPE_2__ {int parent; } ;


 struct fw_device* FUNC_0 (int ) ;

__attribute__((used)) static inline struct fw_device *FUNC_1(struct firedtv *VAR_0)
{
 return FUNC_0(VAR_0->device->parent);
}
