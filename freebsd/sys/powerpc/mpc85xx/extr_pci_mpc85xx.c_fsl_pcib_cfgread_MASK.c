
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct fsl_pcib_softc {int sc_cfg_mtx; int sc_bsh; int sc_bst; scalar_t__ sc_pcie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static uint32_t
FUNC_8(struct fsl_pcib_softc *VAR_3, u_int VAR_4, u_int VAR_5, u_int VAR_6,
    u_int VAR_7, int VAR_8)
{
 uint32_t VAR_9, VAR_10;

 VAR_9 = VAR_0;
 VAR_9 |= (VAR_4 & 0xff) << 16;
 VAR_9 |= (VAR_5 & 0x1f) << 11;
 VAR_9 |= (VAR_6 & 0x7) << 8;
 VAR_9 |= VAR_7 & 0xfc;
 if (VAR_3->sc_pcie)
  VAR_9 |= (VAR_7 & 0xf00) << 16;

 FUNC_6(&VAR_3->sc_cfg_mtx);
 FUNC_3(VAR_3->sc_bst, VAR_3->sc_bsh, VAR_1, VAR_9);

 switch (VAR_8) {
 case 1:
  VAR_10 = FUNC_0(VAR_3->sc_bst, VAR_3->sc_bsh,
      VAR_2 + (VAR_7 & 3));
  break;
 case 2:
  VAR_10 = FUNC_4(FUNC_1(VAR_3->sc_bst, VAR_3->sc_bsh,
      VAR_2 + (VAR_7 & 2)));
  break;
 case 4:
  VAR_10 = FUNC_5(FUNC_2(VAR_3->sc_bst, VAR_3->sc_bsh,
      VAR_2));
  break;
 default:
  VAR_10 = ~0;
  break;
 }
 FUNC_7(&VAR_3->sc_cfg_mtx);
 return (VAR_10);
}
