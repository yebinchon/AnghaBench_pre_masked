
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(u64 VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = VAR_2 + VAR_1;

 VAR_3 &= VAR_0;
 while (VAR_3) {
  if (VAR_3 & 0x1) {
          u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
          FUNC_0(0xD, VAR_5, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
   VAR_11 = VAR_4 ? VAR_6 : VAR_8;
   VAR_6 = FUNC_1(VAR_6, VAR_11 + VAR_7);
  }

  VAR_3 >>= 1;
  VAR_5++;
 }

 return VAR_6;
}
