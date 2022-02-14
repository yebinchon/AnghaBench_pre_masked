
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct smu8_smumgr {scalar_t__ driver_buffer_length; TYPE_1__* driver_buffer; } ;
struct pp_hwmgr {int device; struct smu8_smumgr* smu_backend; } ;
struct cgs_firmware_info {int image_size; int mc_addr; int member_0; } ;
typedef enum cgs_ucode_id { ____Placeholder_cgs_ucode_id } cgs_ucode_id ;
struct TYPE_2__ {int firmware_ID; int data_size; int mc_addr; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ,int,struct cgs_firmware_info*) ;
 int * VAR_0 ;
 int FUNC_2 (size_t) ;
 size_t FUNC_3 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_1)
{
 struct smu8_smumgr *VAR_2 = VAR_1->smu_backend;
 uint32_t VAR_3;
 uint32_t VAR_4;
 int VAR_5;
 enum cgs_ucode_id VAR_6;
 struct cgs_firmware_info VAR_7 = {0};

 VAR_2->driver_buffer_length = 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {

  VAR_3 = FUNC_3(VAR_1,
     VAR_0[VAR_4]);

  VAR_6 = FUNC_2(VAR_3);

  VAR_5 = FUNC_1(VAR_1->device,
       VAR_6, &VAR_7);

  if (VAR_5 == 0) {
   VAR_2->driver_buffer[VAR_4].mc_addr = VAR_7.mc_addr;

   VAR_2->driver_buffer[VAR_4].data_size = VAR_7.image_size;

   VAR_2->driver_buffer[VAR_4].firmware_ID = VAR_0[VAR_4];
   VAR_2->driver_buffer_length++;
  }
 }

 return 0;
}
