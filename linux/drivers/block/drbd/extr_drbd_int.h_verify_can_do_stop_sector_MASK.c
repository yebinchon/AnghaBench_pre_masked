
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drbd_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* connection; } ;
struct TYPE_3__ {int agreed_pro_version; } ;


 TYPE_2__* FUNC_0 (struct drbd_device*) ;

__attribute__((used)) static inline bool FUNC_1(struct drbd_device *VAR_0)
{
 return FUNC_0(VAR_0)->connection->agreed_pro_version >= 97 &&
  FUNC_0(VAR_0)->connection->agreed_pro_version != 100;
}
