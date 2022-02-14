
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct hisi_qm {scalar_t__ io_base; int ver; } ;
typedef enum vft_type { ____Placeholder_vft_type } vft_type ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hisi_qm *VAR_12, enum vft_type VAR_13, u32 VAR_14,
       u32 VAR_15)
{
 u64 VAR_16 = 0;

 if (VAR_15 > 0) {
  switch (VAR_13) {
  case 128:
   switch (VAR_12->ver) {
   case 130:
    VAR_16 = VAR_4 |
          VAR_6 |
          VAR_5 |
          VAR_9 |
          (u64)VAR_14 << VAR_8;
    break;
   case 129:
    VAR_16 = (u64)VAR_14 << VAR_8 |
          VAR_9 |
          (u64)(VAR_15 - 1) << VAR_7;
    break;
   case 131:
    break;
   }
   break;
  case 132:
   switch (VAR_12->ver) {
   case 130:
    VAR_16 = VAR_0 |
          VAR_2 |
          VAR_1 |
          VAR_3;
    break;
   case 129:
    VAR_16 = VAR_3;
    break;
   case 131:
    break;
   }
   break;
  }
 }

 FUNC_2(FUNC_0(VAR_16), VAR_12->io_base + VAR_11);
 FUNC_2(FUNC_1(VAR_16), VAR_12->io_base + VAR_10);
}
