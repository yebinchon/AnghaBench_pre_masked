
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tpm_key {void* blob; int blob_len; int key_len; int pub_key_len; void const* pub_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (void const*) ;

__attribute__((used)) static int FUNC_2(struct tpm_key *VAR_2)
{
 const void *VAR_3 = VAR_2->blob;
 uint32_t VAR_4 = VAR_2->blob_len;
 const void *VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 if (VAR_4 < 11)
  return -VAR_0;


 if (FUNC_0(VAR_3 + 4) != 0x0015)
  return -VAR_0;


 VAR_3 += 11;
 VAR_4 -= 11;

 if (VAR_4 < 12)
  return -VAR_0;


 if (FUNC_1(VAR_3) != 0x00000001)
  return -VAR_0;


 if (FUNC_0(VAR_3 + 4) != 0x0002)
  return -VAR_0;


 if (FUNC_0(VAR_3 + 6) != 0x0003)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3 + 8);
 if (VAR_4 < VAR_6 + 12)
  return -VAR_0;


 VAR_4 -= 12;
 VAR_3 += 12;


 VAR_7 = FUNC_1(VAR_3);

 switch (VAR_7) {
 case 512:
 case 1024:
 case 1536:
 case 2048:
  break;
 default:
  return -VAR_1;
 }


 VAR_3 += VAR_6;
 VAR_4 -= VAR_6;

 if (VAR_4 < 4)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_4 < 4 + VAR_6)
  return -VAR_0;


 VAR_3 += 4 + VAR_6;
 VAR_4 -= 4 + VAR_6;


 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 > 256)
  return -VAR_1;

 VAR_5 = VAR_3 + 4;

 VAR_2->key_len = VAR_7;
 VAR_2->pub_key = VAR_5;
 VAR_2->pub_key_len = VAR_6;

 return 0;
}
