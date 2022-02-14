
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct fsl_pcib_softc {int sc_bsh; int sc_bst; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;


 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct fsl_pcib_softc *VAR_0, int VAR_1, int VAR_2, uint64_t VAR_3,
    uint64_t VAR_4, uint64_t VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;

 switch (VAR_2) {
 case 128:
  VAR_6 = 0x80044000 | (FUNC_5(VAR_4) - 2);
  break;
 case 129:
  VAR_6 = 0x80088000 | (FUNC_5(VAR_4) - 2);
  break;
 default:
  VAR_6 = 0x0004401f;
  break;
 }
 VAR_7 = VAR_3 >> 12;
 VAR_8 = VAR_5 >> 12;

 FUNC_4(VAR_0->sc_bst, VAR_0->sc_bsh, FUNC_0(VAR_1), VAR_8);
 FUNC_4(VAR_0->sc_bst, VAR_0->sc_bsh, FUNC_1(VAR_1), 0);
 FUNC_4(VAR_0->sc_bst, VAR_0->sc_bsh, FUNC_3(VAR_1), VAR_7);
 FUNC_4(VAR_0->sc_bst, VAR_0->sc_bsh, FUNC_2(VAR_1), VAR_6);
}
