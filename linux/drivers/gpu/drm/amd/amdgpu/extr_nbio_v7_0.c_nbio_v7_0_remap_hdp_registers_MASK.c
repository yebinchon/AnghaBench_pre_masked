
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reg_offset; } ;
struct amdgpu_device {TYPE_1__ rmmio_remap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_5)
{
 FUNC_0(VAR_2, 0, VAR_3,
  VAR_5->rmmio_remap.reg_offset + VAR_0);
 FUNC_0(VAR_2, 0, VAR_4,
  VAR_5->rmmio_remap.reg_offset + VAR_1);
}
