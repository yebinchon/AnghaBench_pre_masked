
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_gpu_perfcntr {int select_val; int select_reg; } ;
struct msm_gpu {int name; int num_perfcntrs; struct msm_gpu_perfcntr* perfcntrs; } ;
struct adreno_gpu {TYPE_1__** fw; } ;
struct a3xx_gpu {int ocmem_base; scalar_t__ ocmem_hdl; } ;
struct TYPE_2__ {int size; scalar_t__ data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ FUNC_6 (struct msm_gpu*) ;
 int FUNC_7 (struct msm_gpu*) ;
 scalar_t__ FUNC_8 (struct adreno_gpu*) ;
 scalar_t__ FUNC_9 (struct adreno_gpu*) ;
 scalar_t__ FUNC_10 (struct adreno_gpu*) ;
 scalar_t__ FUNC_11 (struct adreno_gpu*) ;
 scalar_t__ FUNC_12 (struct adreno_gpu*) ;
 int FUNC_13 (struct msm_gpu*,int ,int) ;
 struct a3xx_gpu* FUNC_14 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_15 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_16(struct msm_gpu *VAR_42)
{
 struct adreno_gpu *VAR_43 = FUNC_15(VAR_42);
 struct a3xx_gpu *VAR_44 = FUNC_14(VAR_43);
 uint32_t *VAR_45, VAR_46;
 int VAR_47, VAR_48;

 FUNC_4("%s", VAR_42->name);

 if (FUNC_8(VAR_43)) {

  FUNC_13(VAR_42, VAR_28, 0x10101010);
  FUNC_13(VAR_42, VAR_29, 0x10101010);
  FUNC_13(VAR_42, VAR_34, 0x10101010);
  FUNC_13(VAR_42, VAR_35, 0x10101010);
  FUNC_13(VAR_42, VAR_26, 0x0000303);
  FUNC_13(VAR_42, VAR_30, 0x10101010);
  FUNC_13(VAR_42, VAR_31, 0x10101010);

  FUNC_13(VAR_42, VAR_27, 0x0000ff);

  FUNC_13(VAR_42, VAR_24, 0x00000030);

  FUNC_13(VAR_42, VAR_33, 0x0000003c);
  FUNC_13(VAR_42, VAR_32, 0x003c003c);
 } else if (FUNC_9(VAR_43)) {
  FUNC_13(VAR_42, VAR_36, 0x0003);
  FUNC_13(VAR_42, VAR_34, 0x0000000a);
  FUNC_13(VAR_42, VAR_35, 0x0000000a);
 } else if (FUNC_10(VAR_43)) {

  FUNC_13(VAR_42, VAR_28, 0x10101010);
  FUNC_13(VAR_42, VAR_29, 0x10101010);
  FUNC_13(VAR_42, VAR_34, 0x10101010);
  FUNC_13(VAR_42, VAR_35, 0x10101010);
  FUNC_13(VAR_42, VAR_26, 0x0000303);
  FUNC_13(VAR_42, VAR_30, 0x10101010);
  FUNC_13(VAR_42, VAR_31, 0x10101010);

  FUNC_13(VAR_42, VAR_27, 0x0000ff);

  FUNC_13(VAR_42, VAR_24, 0x00000030);

  FUNC_13(VAR_42, VAR_33, 0x0000003c);
  FUNC_13(VAR_42, VAR_32, 0x003c003c);

  FUNC_13(VAR_42, VAR_22, 0x000000ff);
  FUNC_13(VAR_42, VAR_23, 0x000000a4);

 } else if (FUNC_12(VAR_43)) {






  FUNC_13(VAR_42, VAR_22, 0x0001003f);
  FUNC_13(VAR_42, VAR_23, 0x000000a4);

  FUNC_13(VAR_42, VAR_27, 0x00003f);
  FUNC_13(VAR_42, VAR_26, 0x0000303);

  FUNC_13(VAR_42, VAR_36, 0x0003);

 } else if (FUNC_11(VAR_43)) {

  FUNC_13(VAR_42, VAR_28, 0x18181818);
  FUNC_13(VAR_42, VAR_29, 0x18181818);
  FUNC_13(VAR_42, VAR_34, 0x18181818);
  FUNC_13(VAR_42, VAR_35, 0x18181818);
  FUNC_13(VAR_42, VAR_26, 0x0000303);
  FUNC_13(VAR_42, VAR_30, 0x18181818);
  FUNC_13(VAR_42, VAR_31, 0x18181818);

  FUNC_13(VAR_42, VAR_27, 0x00003f);

  FUNC_13(VAR_42, VAR_24, 0x00000030);

  FUNC_13(VAR_42, VAR_36, 0x0001);

  FUNC_13(VAR_42, VAR_33, 0x0000003f);
  FUNC_13(VAR_42, VAR_32, 0x003f003f);

  FUNC_13(VAR_42, VAR_22, 0x0001003f);
  FUNC_13(VAR_42, VAR_23, 0x000000a4);



  FUNC_13(VAR_42, VAR_25, 0x00000001);

 } else {
  FUNC_3();
 }


 FUNC_13(VAR_42, VAR_13, 0xffffffff);


 FUNC_13(VAR_42, VAR_18, 0x10);
 FUNC_13(VAR_42, VAR_19, 0x10);




 FUNC_13(VAR_42, VAR_9, 0x00000001);


 FUNC_13(VAR_42, VAR_10, 0xa6ffffff);


 FUNC_13(VAR_42, VAR_17, 0x00030000);




 FUNC_13(VAR_42, VAR_14, 0x00010fff);


 FUNC_13(VAR_42, VAR_21, 0x00000001);


 if (FUNC_9(VAR_43))
  FUNC_13(VAR_42, VAR_11, 0xaaaaaaaa);
 else if (FUNC_10(VAR_43))
  FUNC_13(VAR_42, VAR_11, 0xbfffffff);
 else if (FUNC_12(VAR_43))
  FUNC_13(VAR_42, VAR_11, 0xaaaaaaaa);
 else if (FUNC_11(VAR_43))
  FUNC_13(VAR_42, VAR_11, 0xbffcffff);

 if (FUNC_12(VAR_43))
  FUNC_13(VAR_42, VAR_12, 0x05515455);
 else if (FUNC_11(VAR_43))
  FUNC_13(VAR_42, VAR_12, 0x00000000);


 if (VAR_44->ocmem_hdl) {
  FUNC_13(VAR_42, VAR_20,
   (unsigned int)(VAR_44->ocmem_base >> 14));
 }


 FUNC_13(VAR_42, VAR_16, 0x01);


 for (VAR_47 = 0; VAR_47 < VAR_42->num_perfcntrs; VAR_47++) {
  const struct msm_gpu_perfcntr *VAR_49 = &VAR_42->perfcntrs[VAR_47];
  FUNC_13(VAR_42, VAR_49->select_reg, VAR_49->select_val);
 }

 FUNC_13(VAR_42, VAR_15, VAR_0);

 VAR_48 = FUNC_7(VAR_42);
 if (VAR_48)
  return VAR_48;


 FUNC_13(VAR_42, VAR_8, 0x00000007);


 FUNC_13(VAR_42, FUNC_5(0), 0x63000040);
 FUNC_13(VAR_42, FUNC_5(1), 0x62000080);
 FUNC_13(VAR_42, FUNC_5(2), 0x600000cc);
 FUNC_13(VAR_42, FUNC_5(3), 0x60000108);
 FUNC_13(VAR_42, FUNC_5(4), 0x64000140);
 FUNC_13(VAR_42, FUNC_5(5), 0x66000400);


 FUNC_13(VAR_42, FUNC_5(6), 0x65000700);
 FUNC_13(VAR_42, FUNC_5(7), 0x610007d8);
 FUNC_13(VAR_42, FUNC_5(8), 0x620007e0);
 FUNC_13(VAR_42, FUNC_5(9), 0x61001178);
 FUNC_13(VAR_42, FUNC_5(10), 0x64001180);


 FUNC_13(VAR_42, FUNC_5(11), 0x60003300);


 FUNC_13(VAR_42, FUNC_5(12), 0x6b00c000);
 VAR_45 = (uint32_t *)(VAR_43->fw[VAR_2]->data);
 VAR_46 = VAR_43->fw[VAR_2]->size / 4;
 FUNC_4("loading PM4 ucode version: %x", VAR_45[1]);

 FUNC_13(VAR_42, VAR_37,
   VAR_3 |
   VAR_4);
 FUNC_13(VAR_42, VAR_40, 0);
 for (VAR_47 = 1; VAR_47 < VAR_46; VAR_47++)
  FUNC_13(VAR_42, VAR_39, VAR_45[VAR_47]);


 VAR_45 = (uint32_t *)(VAR_43->fw[VAR_1]->data);
 VAR_46 = VAR_43->fw[VAR_1]->size / 4;
 FUNC_4("loading PFP ucode version: %x", VAR_45[5]);

 FUNC_13(VAR_42, VAR_6, 0);
 for (VAR_47 = 1; VAR_47 < VAR_46; VAR_47++)
  FUNC_13(VAR_42, VAR_7, VAR_45[VAR_47]);


 if (FUNC_8(VAR_43) || FUNC_9(VAR_43) ||
   FUNC_10(VAR_43)) {
  FUNC_13(VAR_42, VAR_41,
    FUNC_0(2) |
    FUNC_1(6) |
    FUNC_2(14));
 } else if (FUNC_11(VAR_43)) {





  FUNC_13(VAR_42, VAR_41, 0x003e2008);
 }


 FUNC_13(VAR_42, VAR_38, 0);

 return FUNC_6(VAR_42) ? 0 : -VAR_5;
}
