
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tpm_buf {int data; } ;


 int FUNC_0 (struct tpm_buf*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned char*,unsigned char*,int,unsigned char*,unsigned char*,unsigned char,int,scalar_t__*,int,unsigned char const*,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,unsigned char*,unsigned char*,int,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct tpm_buf*,scalar_t__*,unsigned char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct tpm_buf*,int ) ;
 int FUNC_8 (struct tpm_buf*,scalar_t__) ;
 int FUNC_9 (struct tpm_buf*,unsigned char) ;
 int FUNC_10 (struct tpm_buf*,unsigned char const*,int) ;
 int FUNC_11 (int *,unsigned char*,int) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct tpm_buf *VAR_7,
   uint32_t VAR_8, unsigned char *VAR_9,
   const unsigned char *VAR_10, int VAR_11,
   uint32_t *VAR_12)
{
 unsigned char VAR_13[VAR_4];
 unsigned char VAR_14[VAR_4];
 unsigned char VAR_15[VAR_1];
 uint32_t VAR_16 = 0;
 unsigned char VAR_17 = 0;
 uint32_t VAR_18;
 int VAR_19;

 VAR_18 = FUNC_4(VAR_5);


 VAR_19 = FUNC_5(VAR_7, &VAR_16, VAR_14);
 if (VAR_19 < 0) {
  FUNC_6("oiap failed (%d)\n", VAR_19);
  return VAR_19;
 }


 VAR_19 = FUNC_11(((void*)0), VAR_13, VAR_4);
 if (VAR_19 < 0) {
  FUNC_6("tpm_get_random failed (%d)\n", VAR_19);
  return VAR_19;
 }


 VAR_19 = FUNC_2(VAR_15, VAR_9, VAR_1, VAR_14,
      VAR_13, VAR_17, sizeof(uint32_t), &VAR_18,
      VAR_11, VAR_10, 0, 0);
 if (VAR_19 < 0)
  return VAR_19;


 FUNC_0(VAR_7);
 FUNC_7(VAR_7, VAR_6);
 FUNC_8(VAR_7, VAR_3 + VAR_11);
 FUNC_8(VAR_7, VAR_5);
 FUNC_8(VAR_7, VAR_8);
 FUNC_10(VAR_7, VAR_10, VAR_11);
 FUNC_8(VAR_7, VAR_16);
 FUNC_10(VAR_7, VAR_13, VAR_4);
 FUNC_9(VAR_7, VAR_17);
 FUNC_10(VAR_7, VAR_15, VAR_1);

 VAR_19 = FUNC_12(VAR_7->data, VAR_0);
 if (VAR_19 < 0) {
  FUNC_6("authhmac failed (%d)\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_3(VAR_7->data, VAR_18, VAR_13, VAR_9,
        VAR_1, 0, 0);
 if (VAR_19 < 0) {
  FUNC_6("TSS_checkhmac1 failed (%d)\n", VAR_19);
  return VAR_19;
 }

 *VAR_12 = FUNC_1(VAR_7->data, VAR_2);
 return 0;
}
