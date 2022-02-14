
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int*,int ,int ) ;

void FUNC_4(u8 *VAR_3,
        u32 VAR_4,
        u32 VAR_5,
        enum hash_alg VAR_6,
        enum hash_mode VAR_7,
        unsigned int VAR_8, u32 VAR_9)
{
 u8 *VAR_10 = VAR_3;


 if (VAR_4 > 0) {
  FUNC_2("  GCM: padding to 16 byte alignment: %u bytes\n",
    VAR_4);
  FUNC_3(VAR_10, 0, VAR_4);
  VAR_10 += VAR_4;
 }

 if (VAR_5 > 0) {

  FUNC_3(VAR_10, 0, VAR_5);

  if ((VAR_6 == VAR_0) &&
      (VAR_7 == VAR_2)) {

   VAR_10 += VAR_5;
  } else {

   *VAR_10 = 0x80;
   VAR_10 += (VAR_5 - sizeof(u64));


   if (VAR_6 == VAR_1)
    *(u64 *)VAR_10 = FUNC_1((u64)VAR_8 * 8);
   else
    *(u64 *)VAR_10 = FUNC_0((u64)VAR_8 * 8);
   VAR_10 += sizeof(u64);
  }
 }


 if (VAR_9 > 0) {
  FUNC_2("  STAT: padding to 4 byte alignment: %u bytes\n",
    VAR_9);

  FUNC_3(VAR_10, 0, VAR_9);
  VAR_10 += VAR_9;
 }
}
