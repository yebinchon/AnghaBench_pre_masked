
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bpf_prog_aux {int verifier_zext; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_5(const u8 VAR_5[], s32 VAR_6,
      bool VAR_7, u8 **VAR_8,
      const struct bpf_prog_aux *VAR_9)
{
 u8 *VAR_10 = *VAR_8;
 int VAR_11 = 0;
 u8 VAR_12 = VAR_7 ? VAR_0 : VAR_4;
 u8 VAR_13 = VAR_7 ? VAR_2 : VAR_3;

 if (VAR_7 && VAR_6 != 64) {
  FUNC_2(0x8B, FUNC_4(0x40, VAR_1, VAR_0),
        FUNC_3(VAR_4));
  FUNC_2(0x8B, FUNC_4(0x40, VAR_1, VAR_2),
        FUNC_3(VAR_3));
 }
 switch (VAR_6) {
 case 16:




  FUNC_1(0x0F, 0xB7);
  FUNC_0(FUNC_4(0xC0, VAR_12, VAR_12));
  if (!VAR_9->verifier_zext)

   FUNC_1(0x33, FUNC_4(0xC0, VAR_13, VAR_13));
  break;
 case 32:
  if (!VAR_9->verifier_zext)

   FUNC_1(0x33, FUNC_4(0xC0, VAR_13, VAR_13));
  break;
 case 64:

  break;
 }

 if (VAR_7 && VAR_6 != 64) {

  FUNC_2(0x89, FUNC_4(0x40, VAR_1, VAR_12),
        FUNC_3(VAR_4));

  FUNC_2(0x89, FUNC_4(0x40, VAR_1, VAR_13),
        FUNC_3(VAR_3));
 }
 *VAR_8 = VAR_10;
}
