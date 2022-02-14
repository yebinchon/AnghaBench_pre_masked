
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct crypto4xx_device {scalar_t__ scatter_buffer_pa; TYPE_2__* sdr; scalar_t__ sdr_pa; TYPE_1__* core_dev; void* scatter_buffer_va; } ;
struct ce_sd {int dummy; } ;
struct TYPE_4__ {scalar_t__ ptr; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int,scalar_t__*,int ) ;
 int FUNC_1 (int ,int,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct crypto4xx_device *VAR_4)
{
 int VAR_5;


 VAR_4->sdr = FUNC_0(VAR_4->core_dev->device,
          sizeof(struct ce_sd) * VAR_2,
          &VAR_4->sdr_pa, VAR_1);
 if (!VAR_4->sdr)
  return -VAR_0;

 VAR_4->scatter_buffer_va =
  FUNC_0(VAR_4->core_dev->device,
   VAR_3 * VAR_2,
   &VAR_4->scatter_buffer_pa, VAR_1);
 if (!VAR_4->scatter_buffer_va) {
  FUNC_1(VAR_4->core_dev->device,
      sizeof(struct ce_sd) * VAR_2,
      VAR_4->sdr, VAR_4->sdr_pa);
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->sdr[VAR_5].ptr = VAR_4->scatter_buffer_pa +
      VAR_3 * VAR_5;
 }

 return 0;
}
