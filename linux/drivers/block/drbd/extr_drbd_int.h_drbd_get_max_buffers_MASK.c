
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_conf {int max_buffers; } ;
struct drbd_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* connection; } ;
struct TYPE_3__ {int net_conf; } ;


 TYPE_2__* FUNC_0 (struct drbd_device*) ;
 struct net_conf* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline int FUNC_4(struct drbd_device *VAR_0)
{
 struct net_conf *VAR_1;
 int VAR_2;

 FUNC_2();
 VAR_1 = FUNC_1(FUNC_0(VAR_0)->connection->net_conf);
 VAR_2 = VAR_1 ? VAR_1->max_buffers : 1000000;
 FUNC_3();

 return VAR_2;
}
