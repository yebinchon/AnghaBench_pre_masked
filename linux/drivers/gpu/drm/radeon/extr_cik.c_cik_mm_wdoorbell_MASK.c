
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ num_doorbells; scalar_t__ ptr; } ;
struct radeon_device {TYPE_1__ doorbell; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

void FUNC_2(struct radeon_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (VAR_1 < VAR_0->doorbell.num_doorbells) {
  FUNC_1(VAR_2, VAR_0->doorbell.ptr + VAR_1);
 } else {
  FUNC_0("writing beyond doorbell aperture: 0x%08x!\n", VAR_1);
 }
}
