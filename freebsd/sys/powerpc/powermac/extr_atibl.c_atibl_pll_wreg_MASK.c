
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct atibl_softc {int sc_memr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void __inline
FUNC_4(struct atibl_softc *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7, VAR_8;

 FUNC_2(VAR_4->sc_memr, VAR_1,
     ((VAR_5 & 0x3f) | VAR_3));
 (void)FUNC_1(VAR_4->sc_memr, VAR_0);
 (void)FUNC_1(VAR_4->sc_memr, VAR_2);

 FUNC_3(VAR_4->sc_memr, VAR_0, VAR_6);
 FUNC_0(5000);


 VAR_7 = FUNC_1(VAR_4->sc_memr, VAR_1);
 VAR_8 = VAR_7 & (~0x3f | VAR_3);
 FUNC_3(VAR_4->sc_memr, VAR_1, VAR_8);
 VAR_8 = FUNC_1(VAR_4->sc_memr, VAR_0);
 FUNC_3(VAR_4->sc_memr, VAR_1, VAR_7);
}
