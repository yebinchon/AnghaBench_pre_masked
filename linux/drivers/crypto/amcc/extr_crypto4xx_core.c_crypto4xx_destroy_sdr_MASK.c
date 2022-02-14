
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto4xx_device {int scatter_buffer_pa; scalar_t__ scatter_buffer_va; TYPE_1__* core_dev; int sdr_pa; scalar_t__ sdr; } ;
struct ce_sd {int dummy; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct crypto4xx_device *VAR_2)
{
 if (VAR_2->sdr)
  FUNC_0(VAR_2->core_dev->device,
      sizeof(struct ce_sd) * VAR_0,
      VAR_2->sdr, VAR_2->sdr_pa);

 if (VAR_2->scatter_buffer_va)
  FUNC_0(VAR_2->core_dev->device,
      VAR_1 * VAR_0,
      VAR_2->scatter_buffer_va,
      VAR_2->scatter_buffer_pa);
}
