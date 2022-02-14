
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u64
FUNC_2(char *VAR_2, u32 VAR_3, u64 VAR_4)
{

 if (!VAR_4) {



  return ((u64)VAR_3);
 }

 if (VAR_3 && (VAR_4 != (u64)VAR_3)) {



  FUNC_0((VAR_0,
       "32/64X %s address mismatch in FADT: "
       "0x%8.8X/0x%8.8X%8.8X, using %u-bit address",
       VAR_2, VAR_3,
       FUNC_1(VAR_4),
       VAR_1 ? 32 :
       64));



  if (VAR_1) {
   return ((u64)VAR_3);
  }
 }



 return (VAR_4);
}
