
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct msm_gpu {int dummy; } ;
struct adreno_gpu {TYPE_1__** fw; } ;
struct a4xx_gpu {int ocmem_base; } ;
struct TYPE_2__ {int size; scalar_t__ data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
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
 int FUNC_3 (struct msm_gpu*) ;
 scalar_t__ FUNC_4 (struct msm_gpu*) ;
 int FUNC_5 (struct msm_gpu*) ;
 scalar_t__ FUNC_6 (struct adreno_gpu*) ;
 scalar_t__ FUNC_7 (struct adreno_gpu*) ;
 unsigned int FUNC_8 (struct msm_gpu*,int ) ;
 int FUNC_9 (struct msm_gpu*,int ,int) ;
 struct a4xx_gpu* FUNC_10 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_11 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_12(struct msm_gpu *VAR_40)
{
 struct adreno_gpu *VAR_41 = FUNC_11(VAR_40);
 struct a4xx_gpu *VAR_42 = FUNC_10(VAR_41);
 uint32_t *VAR_43, VAR_44;
 int VAR_45, VAR_46;

 if (FUNC_6(VAR_41)) {
  FUNC_9(VAR_40, VAR_32, 0x0001001F);
  FUNC_9(VAR_40, VAR_33, 0x000000A4);
  FUNC_9(VAR_40, VAR_34, 0x00000001);
  FUNC_9(VAR_40, VAR_35, 0x18181818);
  FUNC_9(VAR_40, VAR_36, 0x00000018);
  FUNC_9(VAR_40, VAR_37, 0x18181818);
  FUNC_9(VAR_40, VAR_38, 0x00000018);
  FUNC_9(VAR_40, VAR_39, 0x00000003);
 } else if (FUNC_7(VAR_41)) {
  FUNC_9(VAR_40, VAR_34, 0x00000001);
  FUNC_9(VAR_40, VAR_35, 0x18181818);
  FUNC_9(VAR_40, VAR_36, 0x00000018);
  FUNC_9(VAR_40, VAR_37, 0x18181818);
  FUNC_9(VAR_40, VAR_38, 0x00000018);
  FUNC_9(VAR_40, VAR_39, 0x00000003);
 } else {
  FUNC_0();
 }


 FUNC_9(VAR_40, VAR_18, 0xffffffff);


 FUNC_9(VAR_40, VAR_23, 0x10);
 FUNC_9(VAR_40, VAR_26, 0x10);

 if (FUNC_7(VAR_41)) {
  FUNC_9(VAR_40, VAR_27, 0x30);
 }


 FUNC_9(VAR_40, VAR_15, 0x00000001);


 FUNC_9(VAR_40, VAR_16, 0xa6ffffff);


 FUNC_9(VAR_40, VAR_22, 0x00000030);





 FUNC_9(VAR_40, VAR_19,
   (1 << 30) | 0xFFFF);

 FUNC_9(VAR_40, VAR_28,
   (unsigned int)(VAR_42->ocmem_base >> 14));


 FUNC_9(VAR_40, VAR_21, 0x01);




 FUNC_9(VAR_40, VAR_11, VAR_5);

 if (FUNC_7(VAR_41))
  FUNC_9(VAR_40, VAR_29, 0x07);


 FUNC_9(VAR_40, VAR_31, 0xffff0000);
 FUNC_9(VAR_40, VAR_30, 0xffff0000);

 FUNC_9(VAR_40, VAR_7, (1 << 25) |
   (FUNC_6(VAR_41) ? (1 << 29) : 0));



 if (!FUNC_6(VAR_41)) {
  FUNC_9(VAR_40, VAR_24,
   0x00000441);
  FUNC_9(VAR_40, VAR_25,
   0x00000441);
 }

 FUNC_3(VAR_40);





 if (FUNC_6(VAR_41)) {
  unsigned int VAR_47;
  VAR_47 = FUNC_8(VAR_40, VAR_17);
  VAR_47 &= ~VAR_0;
  VAR_47 |= 2 << VAR_1;
  FUNC_9(VAR_40, VAR_17, VAR_47);
 }


 FUNC_9(VAR_40, VAR_14, 0x00000007);


 FUNC_9(VAR_40, FUNC_2(0), 0x62000010);
 FUNC_9(VAR_40, FUNC_2(1), 0x63000020);
 FUNC_9(VAR_40, FUNC_2(2), 0x64000040);
 FUNC_9(VAR_40, FUNC_2(3), 0x65000080);
 FUNC_9(VAR_40, FUNC_2(4), 0x66000100);
 FUNC_9(VAR_40, FUNC_2(5), 0x64000200);


 FUNC_9(VAR_40, FUNC_2(6), 0x67000800);
 FUNC_9(VAR_40, FUNC_2(7), 0x64001600);



 FUNC_9(VAR_40, FUNC_2(8), 0x60003300);


 FUNC_9(VAR_40, FUNC_2(9), 0x60003800);


 FUNC_9(VAR_40, FUNC_2(10), 0x61003980);


 FUNC_9(VAR_40, FUNC_2(11), 0x6e010000);

 FUNC_9(VAR_40, VAR_20, VAR_2);

 VAR_46 = FUNC_5(VAR_40);
 if (VAR_46)
  return VAR_46;


 VAR_43 = (uint32_t *)(VAR_41->fw[VAR_4]->data);
 VAR_44 = VAR_41->fw[VAR_4]->size / 4;
 FUNC_1("loading PM4 ucode version: %u", VAR_43[0]);
 FUNC_9(VAR_40, VAR_10, 0);
 for (VAR_45 = 1; VAR_45 < VAR_44; VAR_45++)
  FUNC_9(VAR_40, VAR_9, VAR_43[VAR_45]);


 VAR_43 = (uint32_t *)(VAR_41->fw[VAR_3]->data);
 VAR_44 = VAR_41->fw[VAR_3]->size / 4;
 FUNC_1("loading PFP ucode version: %u", VAR_43[0]);

 FUNC_9(VAR_40, VAR_12, 0);
 for (VAR_45 = 1; VAR_45 < VAR_44; VAR_45++)
  FUNC_9(VAR_40, VAR_13, VAR_43[VAR_45]);


 FUNC_9(VAR_40, VAR_8, 0);

 return FUNC_4(VAR_40) ? 0 : -VAR_6;
}
