
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union drbd_dev_state {scalar_t__ disk; scalar_t__ pdsk; } ;
struct drbd_device {union drbd_dev_state state; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct drbd_device *VAR_1)
{
 const union drbd_dev_state VAR_2 = VAR_1->state;
 return VAR_2.disk == VAR_0 || VAR_2.pdsk == VAR_0;
}
