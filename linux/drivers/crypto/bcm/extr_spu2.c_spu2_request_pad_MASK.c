
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef enum hash_mode { ____Placeholder_hash_mode } hash_mode ;
typedef enum hash_alg { ____Placeholder_hash_alg } hash_alg ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int*,int ,int ) ;

void FUNC_4(u8 *VAR_1, u32 VAR_2, u32 VAR_3,
        enum hash_alg VAR_4, enum hash_mode VAR_5,
        unsigned int VAR_6, u32 VAR_7)
{
 u8 *VAR_8 = VAR_1;


 if (VAR_2 > 0) {
  FUNC_2("  GCM: padding to 16 byte alignment: %u bytes\n",
    VAR_2);
  FUNC_3(VAR_8, 0, VAR_2);
  VAR_8 += VAR_2;
 }

 if (VAR_3 > 0) {

  FUNC_3(VAR_8, 0, VAR_3);


  *VAR_8 = 0x80;
  VAR_8 += (VAR_3 - sizeof(u64));


  if (VAR_4 == VAR_0)
   *(u64 *)VAR_8 = FUNC_1((u64)VAR_6 * 8);
  else
   *(u64 *)VAR_8 = FUNC_0((u64)VAR_6 * 8);
  VAR_8 += sizeof(u64);
 }


 if (VAR_7 > 0) {
  FUNC_2("  STAT: padding to 4 byte alignment: %u bytes\n",
    VAR_7);

  FUNC_3(VAR_8, 0, VAR_7);
  VAR_8 += VAR_7;
 }
}
