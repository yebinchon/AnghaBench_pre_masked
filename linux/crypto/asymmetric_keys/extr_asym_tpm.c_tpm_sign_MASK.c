
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_buf {scalar_t__ data; } ;


 int FUNC_0 (struct tpm_buf*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned char*,unsigned char*,int,unsigned char*,unsigned char*,unsigned char,int,int*,int,int*,int,unsigned char const*,int ,int ) ;
 int FUNC_3 (scalar_t__,int,unsigned char*,unsigned char*,int,int,scalar_t__,int,scalar_t__,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*,scalar_t__,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct tpm_buf*,int*,unsigned char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct tpm_buf*,int ) ;
 int FUNC_10 (struct tpm_buf*,int) ;
 int FUNC_11 (struct tpm_buf*,unsigned char) ;
 int FUNC_12 (struct tpm_buf*,unsigned char const*,int) ;
 int FUNC_13 (int *,unsigned char*,int) ;
 int FUNC_14 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_15(struct tpm_buf *VAR_7,
      uint32_t VAR_8, unsigned char *VAR_9,
      const unsigned char *VAR_10, uint32_t VAR_11,
      void *VAR_12, uint32_t VAR_13)
{
 unsigned char VAR_14[VAR_3];
 unsigned char VAR_15[VAR_3];
 unsigned char VAR_16[VAR_1];
 uint32_t VAR_17 = 0;
 unsigned char VAR_18 = 0;
 uint32_t VAR_19;
 uint32_t VAR_20;
 int VAR_21;

 VAR_19 = FUNC_4(VAR_4);
 VAR_20 = FUNC_4(VAR_11);


 VAR_21 = FUNC_7(VAR_7, &VAR_17, VAR_15);
 if (VAR_21 < 0) {
  FUNC_8("oiap failed (%d)\n", VAR_21);
  return VAR_21;
 }


 VAR_21 = FUNC_13(((void*)0), VAR_14, VAR_3);
 if (VAR_21 < 0) {
  FUNC_8("tpm_get_random failed (%d)\n", VAR_21);
  return VAR_21;
 }


 VAR_21 = FUNC_2(VAR_16, VAR_9, VAR_1, VAR_15,
      VAR_14, VAR_18, sizeof(uint32_t), &VAR_19,
      sizeof(uint32_t), &VAR_20,
      VAR_11, VAR_10, 0, 0);
 if (VAR_21 < 0)
  return VAR_21;


 FUNC_0(VAR_7);
 FUNC_9(VAR_7, VAR_6);
 FUNC_10(VAR_7, VAR_5 + VAR_11);
 FUNC_10(VAR_7, VAR_4);
 FUNC_10(VAR_7, VAR_8);
 FUNC_10(VAR_7, VAR_11);
 FUNC_12(VAR_7, VAR_10, VAR_11);
 FUNC_10(VAR_7, VAR_17);
 FUNC_12(VAR_7, VAR_14, VAR_3);
 FUNC_11(VAR_7, VAR_18);
 FUNC_12(VAR_7, VAR_16, VAR_1);

 VAR_21 = FUNC_14(VAR_7->data, VAR_0);
 if (VAR_21 < 0) {
  FUNC_8("authhmac failed (%d)\n", VAR_21);
  return VAR_21;
 }

 VAR_20 = FUNC_1(VAR_7->data, VAR_2);

 VAR_21 = FUNC_3(VAR_7->data, VAR_19, VAR_14,
        VAR_9, VAR_1,
        sizeof(uint32_t), VAR_2,
        VAR_20, VAR_2 + sizeof(uint32_t),
        0, 0);
 if (VAR_21 < 0) {
  FUNC_8("TSS_checkhmac1 failed (%d)\n", VAR_21);
  return VAR_21;
 }

 FUNC_5(VAR_12, VAR_7->data + VAR_2 + sizeof(uint32_t),
        FUNC_6(VAR_20, VAR_13));

 return VAR_20;
}
