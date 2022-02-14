
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int* reg_list; int reg_list_size; int save_restore_gpu_addr; int* sr_ptr; int clear_state_size; int clear_state_gpu_addr; int* cs_ptr; int cp_table_size; int cp_table_gpu_addr; int * cp_table_obj; int cp_table_ptr; int * clear_state_obj; int * save_restore_obj; struct cs_section_def* cs_data; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ rlc; int dev; } ;
struct cs_section_def {TYPE_1__* section; } ;
struct TYPE_3__ {int* extent; int reg_count; int reg_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct radeon_device*,int volatile*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct radeon_device*,int,int ,int,int ,int ,int *,int *,int **) ;
 int FUNC_7 (int *,void**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct radeon_device*,int volatile*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int) ;

int FUNC_17(struct radeon_device *VAR_6)
{
 const u32 *VAR_7;
 volatile u32 *VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17 = 0;
 u64 VAR_18;
 const struct cs_section_def *VAR_19;
 int VAR_20;

 VAR_7 = VAR_6->rlc.reg_list;
 VAR_9 = VAR_6->rlc.reg_list_size;
 if (VAR_6->family >= VAR_0) {
  VAR_9 += (5 * 16) + 48 + 48 + 64;
 }
 VAR_19 = VAR_6->rlc.cs_data;

 if (VAR_7) {

  if (VAR_6->rlc.save_restore_obj == ((void*)0)) {
   VAR_20 = FUNC_6(VAR_6, VAR_9 * 4, VAR_2, 1,
          VAR_3, 0, ((void*)0),
          ((void*)0), &VAR_6->rlc.save_restore_obj);
   if (VAR_20) {
    FUNC_4(VAR_6->dev, "(%d) create RLC sr bo failed\n", VAR_20);
    return VAR_20;
   }
  }

  VAR_20 = FUNC_10(VAR_6->rlc.save_restore_obj, 0);
  if (FUNC_15(VAR_20 != 0)) {
   FUNC_14(VAR_6);
   return VAR_20;
  }
  VAR_20 = FUNC_9(VAR_6->rlc.save_restore_obj, VAR_3,
      &VAR_6->rlc.save_restore_gpu_addr);
  if (VAR_20) {
   FUNC_11(VAR_6->rlc.save_restore_obj);
   FUNC_4(VAR_6->dev, "(%d) pin RLC sr bo failed\n", VAR_20);
   FUNC_14(VAR_6);
   return VAR_20;
  }

  VAR_20 = FUNC_7(VAR_6->rlc.save_restore_obj, (void **)&VAR_6->rlc.sr_ptr);
  if (VAR_20) {
   FUNC_4(VAR_6->dev, "(%d) map RLC sr bo failed\n", VAR_20);
   FUNC_14(VAR_6);
   return VAR_20;
  }

  VAR_8 = VAR_6->rlc.sr_ptr;
  if (VAR_6->family >= VAR_1) {

   for (VAR_11 = 0; VAR_11 < VAR_6->rlc.reg_list_size; VAR_11++)
    VAR_8[VAR_11] = FUNC_3(VAR_7[VAR_11]);
  } else {






   for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
    VAR_10 = VAR_7[VAR_11] >> 2;
    VAR_11++;
    if (VAR_11 < VAR_9)
     VAR_10 |= (VAR_7[VAR_11] >> 2) << 16;
    VAR_12 = (((VAR_11 - 1) * 3) / 2);
    VAR_8[VAR_12] = FUNC_3(VAR_10);
   }
   VAR_12 = ((VAR_11 * 3) / 2);
   VAR_8[VAR_12] = FUNC_3(VAR_5);
  }
  FUNC_8(VAR_6->rlc.save_restore_obj);
  FUNC_11(VAR_6->rlc.save_restore_obj);
 }

 if (VAR_19) {

  if (VAR_6->family >= VAR_0) {
   VAR_6->rlc.clear_state_size = VAR_9 = FUNC_1(VAR_6);
  } else if (VAR_6->family >= VAR_1) {
   VAR_6->rlc.clear_state_size = FUNC_13(VAR_6);
   VAR_9 = VAR_6->rlc.clear_state_size + (256 / 4);
  } else {
   VAR_15 = 0;
   VAR_9 = 0;
   for (VAR_11 = 0; VAR_19[VAR_11].section != ((void*)0); VAR_11++) {
    for (VAR_12 = 0; VAR_19[VAR_11].section[VAR_12].extent != ((void*)0); VAR_12++) {
     VAR_15++;
     VAR_9 += VAR_19[VAR_11].section[VAR_12].reg_count;
    }
   }
   VAR_17 = (3 * VAR_15 + 2);
   VAR_9 += VAR_17;
   VAR_6->rlc.clear_state_size = VAR_9;
  }

  if (VAR_6->rlc.clear_state_obj == ((void*)0)) {
   VAR_20 = FUNC_6(VAR_6, VAR_9 * 4, VAR_2, 1,
          VAR_3, 0, ((void*)0),
          ((void*)0), &VAR_6->rlc.clear_state_obj);
   if (VAR_20) {
    FUNC_4(VAR_6->dev, "(%d) create RLC c bo failed\n", VAR_20);
    FUNC_14(VAR_6);
    return VAR_20;
   }
  }
  VAR_20 = FUNC_10(VAR_6->rlc.clear_state_obj, 0);
  if (FUNC_15(VAR_20 != 0)) {
   FUNC_14(VAR_6);
   return VAR_20;
  }
  VAR_20 = FUNC_9(VAR_6->rlc.clear_state_obj, VAR_3,
      &VAR_6->rlc.clear_state_gpu_addr);
  if (VAR_20) {
   FUNC_11(VAR_6->rlc.clear_state_obj);
   FUNC_4(VAR_6->dev, "(%d) pin RLC c bo failed\n", VAR_20);
   FUNC_14(VAR_6);
   return VAR_20;
  }

  VAR_20 = FUNC_7(VAR_6->rlc.clear_state_obj, (void **)&VAR_6->rlc.cs_ptr);
  if (VAR_20) {
   FUNC_4(VAR_6->dev, "(%d) map RLC c bo failed\n", VAR_20);
   FUNC_14(VAR_6);
   return VAR_20;
  }

  VAR_8 = VAR_6->rlc.cs_ptr;
  if (VAR_6->family >= VAR_0) {
   FUNC_0(VAR_6, VAR_8);
  } else if (VAR_6->family >= VAR_1) {
   VAR_18 = VAR_6->rlc.clear_state_gpu_addr + 256;
   VAR_8[0] = FUNC_3(FUNC_16(VAR_18));
   VAR_8[1] = FUNC_3(FUNC_5(VAR_18));
   VAR_8[2] = FUNC_3(VAR_6->rlc.clear_state_size);
   FUNC_12(VAR_6, &VAR_8[(256/4)]);
  } else {
   VAR_16 = 0;
   VAR_18 = VAR_6->rlc.clear_state_gpu_addr + (VAR_17 * 4);
   VAR_10 = FUNC_16(VAR_18);
   VAR_8[VAR_16] = FUNC_3(VAR_10);
   VAR_16++;
   for (VAR_11 = 0; VAR_19[VAR_11].section != ((void*)0); VAR_11++) {
    for (VAR_12 = 0; VAR_19[VAR_11].section[VAR_12].extent != ((void*)0); VAR_12++) {
     VAR_14 = VAR_19[VAR_11].section[VAR_12].reg_count;
     VAR_10 = VAR_18 & 0xffffffff;
     VAR_8[VAR_16] = FUNC_3(VAR_10);
     VAR_16++;

     VAR_10 = (VAR_19[VAR_11].section[VAR_12].reg_index * 4) & 0xffffffff;
     VAR_8[VAR_16] = FUNC_3(VAR_10);
     VAR_16++;

     VAR_10 = 0x08000000 | (VAR_14 * 4);
     VAR_8[VAR_16] = FUNC_3(VAR_10);
     VAR_16++;

     for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
      VAR_10 = VAR_19[VAR_11].section[VAR_12].extent[VAR_13];
      VAR_8[VAR_17 + VAR_13] = FUNC_3(VAR_10);
     }
     VAR_18 += VAR_14 * 4;
     VAR_17 += VAR_14;
    }
   }
   VAR_8[VAR_16] = FUNC_3(VAR_4);
  }
  FUNC_8(VAR_6->rlc.clear_state_obj);
  FUNC_11(VAR_6->rlc.clear_state_obj);
 }

 if (VAR_6->rlc.cp_table_size) {
  if (VAR_6->rlc.cp_table_obj == ((void*)0)) {
   VAR_20 = FUNC_6(VAR_6, VAR_6->rlc.cp_table_size,
          VAR_2, 1,
          VAR_3, 0, ((void*)0),
          ((void*)0), &VAR_6->rlc.cp_table_obj);
   if (VAR_20) {
    FUNC_4(VAR_6->dev, "(%d) create RLC cp table bo failed\n", VAR_20);
    FUNC_14(VAR_6);
    return VAR_20;
   }
  }

  VAR_20 = FUNC_10(VAR_6->rlc.cp_table_obj, 0);
  if (FUNC_15(VAR_20 != 0)) {
   FUNC_4(VAR_6->dev, "(%d) reserve RLC cp table bo failed\n", VAR_20);
   FUNC_14(VAR_6);
   return VAR_20;
  }
  VAR_20 = FUNC_9(VAR_6->rlc.cp_table_obj, VAR_3,
      &VAR_6->rlc.cp_table_gpu_addr);
  if (VAR_20) {
   FUNC_11(VAR_6->rlc.cp_table_obj);
   FUNC_4(VAR_6->dev, "(%d) pin RLC cp_table bo failed\n", VAR_20);
   FUNC_14(VAR_6);
   return VAR_20;
  }
  VAR_20 = FUNC_7(VAR_6->rlc.cp_table_obj, (void **)&VAR_6->rlc.cp_table_ptr);
  if (VAR_20) {
   FUNC_4(VAR_6->dev, "(%d) map RLC cp table bo failed\n", VAR_20);
   FUNC_14(VAR_6);
   return VAR_20;
  }

  FUNC_2(VAR_6);

  FUNC_8(VAR_6->rlc.cp_table_obj);
  FUNC_11(VAR_6->rlc.cp_table_obj);

 }

 return 0;
}
