
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bpf_prog_aux {int verifier_zext; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline void FUNC_6(const u8 VAR_6[], s32 VAR_7,
           bool VAR_8, u8 **VAR_9,
           const struct bpf_prog_aux *VAR_10)
{
 u8 *VAR_11 = *VAR_9;
 int VAR_12 = 0;
 u8 VAR_13 = VAR_8 ? VAR_0 : VAR_5;
 u8 VAR_14 = VAR_8 ? VAR_3 : VAR_4;

 if (VAR_8) {
  FUNC_2(0x8B, FUNC_5(0x40, VAR_1, VAR_0),
        FUNC_3(VAR_5));
  FUNC_2(0x8B, FUNC_5(0x40, VAR_1, VAR_3),
        FUNC_3(VAR_4));
 }
 switch (VAR_7) {
 case 16:

  FUNC_0(0x66);
  FUNC_2(0xC1, FUNC_4(0xC8, VAR_13), 8);

  FUNC_1(0x0F, 0xB7);
  FUNC_0(FUNC_5(0xC0, VAR_13, VAR_13));

  if (!VAR_10->verifier_zext)

   FUNC_1(0x33, FUNC_5(0xC0, VAR_14, VAR_14));
  break;
 case 32:

  FUNC_0(0x0F);
  FUNC_0(FUNC_4(0xC8, VAR_13));

  if (!VAR_10->verifier_zext)

   FUNC_1(0x33, FUNC_5(0xC0, VAR_14, VAR_14));
  break;
 case 64:

  FUNC_0(0x0F);
  FUNC_0(FUNC_4(0xC8, VAR_13));


  FUNC_0(0x0F);
  FUNC_0(FUNC_4(0xC8, VAR_14));


  FUNC_1(0x89, FUNC_5(0xC0, VAR_2, VAR_14));

  FUNC_1(0x89, FUNC_5(0xC0, VAR_14, VAR_13));

  FUNC_1(0x89, FUNC_5(0xC0, VAR_13, VAR_2));

  break;
 }
 if (VAR_8) {

  FUNC_2(0x89, FUNC_5(0x40, VAR_1, VAR_13),
        FUNC_3(VAR_5));

  FUNC_2(0x89, FUNC_5(0x40, VAR_1, VAR_14),
        FUNC_3(VAR_4));
 }
 *VAR_9 = VAR_11;
}
