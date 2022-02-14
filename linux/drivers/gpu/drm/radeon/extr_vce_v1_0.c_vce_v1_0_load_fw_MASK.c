
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vce_v1_0_fw_signature {TYPE_3__* val; int len; int num; } ;
struct TYPE_5__ {int keyselect; } ;
struct radeon_device {int family; TYPE_2__ vce; TYPE_1__* vce_fw; } ;
struct TYPE_6__ {int* nonce; int* sigval; int keyselect; int chip_id; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ data; } ;







 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,struct vce_v1_0_fw_signature*,scalar_t__) ;
 int FUNC_3 (int*,int ,int) ;

int FUNC_4(struct radeon_device *VAR_1, uint32_t *VAR_2)
{
 struct vce_v1_0_fw_signature *VAR_3 = (void*)VAR_1->vce_fw->data;
 uint32_t VAR_4;
 int VAR_5;

 switch (VAR_1->family) {
 case 129:
  VAR_4 = 0x01000014;
  break;
 case 128:
  VAR_4 = 0x01000015;
  break;
 case 130:
 case 131:
  VAR_4 = 0x01000016;
  break;
 case 132:
  VAR_4 = 0x01000017;
  break;
 default:
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_3->num); ++VAR_5) {
  if (FUNC_1(VAR_3->val[VAR_5].chip_id) == VAR_4)
   break;
 }

 if (VAR_5 == FUNC_1(VAR_3->num))
  return -VAR_0;

 VAR_2 += (256 - 64) / 4;
 VAR_2[0] = VAR_3->val[VAR_5].nonce[0];
 VAR_2[1] = VAR_3->val[VAR_5].nonce[1];
 VAR_2[2] = VAR_3->val[VAR_5].nonce[2];
 VAR_2[3] = VAR_3->val[VAR_5].nonce[3];
 VAR_2[4] = FUNC_0(FUNC_1(VAR_3->len) + 64);

 FUNC_3(&VAR_2[5], 0, 44);
 FUNC_2(&VAR_2[16], &VAR_3[1], VAR_1->vce_fw->size - sizeof(*VAR_3));

 VAR_2 += (FUNC_1(VAR_3->len) + 64) / 4;
 VAR_2[0] = VAR_3->val[VAR_5].sigval[0];
 VAR_2[1] = VAR_3->val[VAR_5].sigval[1];
 VAR_2[2] = VAR_3->val[VAR_5].sigval[2];
 VAR_2[3] = VAR_3->val[VAR_5].sigval[3];

 VAR_1->vce.keyselect = FUNC_1(VAR_3->val[VAR_5].keyselect);

 return 0;
}
