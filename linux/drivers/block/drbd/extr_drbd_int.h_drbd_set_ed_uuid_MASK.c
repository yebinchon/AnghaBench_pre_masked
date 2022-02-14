
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drbd_device {scalar_t__ ed_uuid; } ;



__attribute__((used)) static inline int FUNC_0(struct drbd_device *VAR_0, u64 VAR_1)
{
 int VAR_2 = VAR_0->ed_uuid != VAR_1;
 VAR_0->ed_uuid = VAR_1;
 return VAR_2;
}
