
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct tpm_space {int dummy; } ;
struct tpm_header {void* length; void* return_code; } ;
struct tpm_chip {struct tpm_space work_space; } ;
struct tpm2_cap_handles {void* count; void** handles; void* capability; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct tpm_space*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct tpm_chip *VAR_5, u32 VAR_6, u8 *VAR_7,
      size_t VAR_8)
{
 struct tpm_space *VAR_9 = &VAR_5->work_space;
 struct tpm_header *VAR_10 = (struct tpm_header *)VAR_7;
 struct tpm2_cap_handles *VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_6 != VAR_2 ||
     FUNC_0(VAR_10->return_code) != VAR_3) {
  return 0;
 }

 if (VAR_8 < VAR_4 + 9)
  return -VAR_0;

 VAR_11 = (void *)&VAR_7[VAR_4];
 if (FUNC_0(VAR_11->capability) != VAR_1)
  return 0;

 if (VAR_8 != VAR_4 + 9 + 4 * FUNC_0(VAR_11->count))
  return -VAR_0;

 for (VAR_15 = 0, VAR_16 = 0; VAR_15 < FUNC_0(VAR_11->count); VAR_15++) {
  VAR_12 = FUNC_1((__be32 *)&VAR_11->handles[VAR_15]);
  VAR_13 = VAR_12 & 0xFF000000;

  switch (VAR_13) {
  case 128:
   VAR_14 = FUNC_3(VAR_9, VAR_12, 0);
   if (!VAR_14)
    break;

   VAR_11->handles[VAR_16] = FUNC_2(VAR_14);
   VAR_16++;
   break;

  default:
   VAR_11->handles[VAR_16] = FUNC_2(VAR_12);
   VAR_16++;
   break;
  }

 }

 VAR_10->length = FUNC_2(VAR_4 + 9 + 4 * VAR_16);
 VAR_11->count = FUNC_2(VAR_16);
 return 0;
}
