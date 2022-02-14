
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct card_info {int num_funcs; TYPE_1__* f; } ;
struct cam_device {int dummy; } ;
struct TYPE_2__ {int man_id; int prod_id; int max_block_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct card_info*,int ,int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct cam_device*,int,int,TYPE_1__*) ;
 int FUNC_4 (struct cam_device*) ;
 int FUNC_5 (struct cam_device*,int ,int ,int*) ;

__attribute__((used)) static void
FUNC_6(struct cam_device *VAR_1, struct card_info *VAR_2) {
 uint32_t VAR_3;
 uint32_t VAR_4;
 int VAR_5;

 VAR_3 = FUNC_4(VAR_1);

 FUNC_1(VAR_2, 0, sizeof(struct card_info));
 FUNC_3(VAR_1, 0, VAR_3, &VAR_2->f[0]);
 FUNC_2("F0: Vendor 0x%04X product 0x%04X max block size %d bytes\n",
        VAR_2->f[0].man_id, VAR_2->f[0].prod_id, VAR_2->f[0].max_block_size);
 for (int VAR_6 = 1; VAR_6 <= 7; VAR_6++) {
  VAR_4 = VAR_0 * VAR_6 + 0x9;
  VAR_3 = FUNC_5(VAR_1, 0, VAR_4++, &VAR_5);FUNC_0(VAR_5);
  VAR_3 |= FUNC_5(VAR_1, 0, VAR_4++, &VAR_5) << 8;
  VAR_3 |= FUNC_5(VAR_1, 0, VAR_4++, &VAR_5) << 16;
  FUNC_3(VAR_1, VAR_6, VAR_3, &VAR_2->f[VAR_6]);
  FUNC_2("F%d: Vendor 0x%04X product 0x%04X max block size %d bytes\n",
         VAR_6, VAR_2->f[VAR_6].man_id, VAR_2->f[VAR_6].prod_id, VAR_2->f[VAR_6].max_block_size);
  if (VAR_2->f[VAR_6].man_id == 0) {
   FUNC_2("F%d doesn't exist\n", VAR_6);
   break;
  }
  VAR_2->num_funcs++;
 }
}
