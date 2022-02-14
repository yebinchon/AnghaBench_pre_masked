
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_device {scalar_t__ ov_last_oos_size; scalar_t__ ov_last_oos_start; } ;


 int FUNC_0 (struct drbd_device*,char*,unsigned long long,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct drbd_device *VAR_0)
{
 if (VAR_0->ov_last_oos_size) {
  FUNC_0(VAR_0, "Out of sync: start=%llu, size=%lu (sectors)\n",
       (unsigned long long)VAR_0->ov_last_oos_start,
       (unsigned long)VAR_0->ov_last_oos_size);
 }
 VAR_0->ov_last_oos_size = 0;
}
