
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lbc_softc {int sc_bsh; int sc_bst; TYPE_1__* sc_banks; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ addr; int width; int decc; int wp; int msel; int atom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;





 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct lbc_softc*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct lbc_softc *VAR_3)
{
 uint32_t VAR_4;
 uint32_t VAR_5;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_4 = VAR_3->sc_banks[VAR_7].size;
  if (VAR_4 == 0)
   continue;




  VAR_5 = VAR_3->sc_banks[VAR_7].addr;
  switch (VAR_3->sc_banks[VAR_7].width) {
  case 8:
   VAR_5 |= (1 << 11);
   break;
  case 16:
   VAR_5 |= (2 << 11);
   break;
  case 32:
   VAR_5 |= (3 << 11);
   break;
  default:
   VAR_6 = VAR_0;
   goto fail;
  }
  VAR_5 |= (VAR_3->sc_banks[VAR_7].decc << 9);
  VAR_5 |= (VAR_3->sc_banks[VAR_7].wp << 8);
  VAR_5 |= (VAR_3->sc_banks[VAR_7].msel << 5);
  VAR_5 |= (VAR_3->sc_banks[VAR_7].atom << 2);
  VAR_5 |= 1;
  FUNC_2(VAR_3->sc_bst, VAR_3->sc_bsh,
      FUNC_0(VAR_7), VAR_5);




  VAR_5 = FUNC_3(VAR_4);
  switch (VAR_3->sc_banks[VAR_7].msel) {
  case 131:

   VAR_5 |= 0x0ff7;
   break;
  case 132:

   VAR_5 |= 0x0796;
   break;
  case 130:
  case 129:
  case 128:
   FUNC_5("UPM mode not supported yet!");
   VAR_6 = VAR_1;
   goto fail;
  }
  FUNC_2(VAR_3->sc_bst, VAR_3->sc_bsh,
      FUNC_1(VAR_7), VAR_5);
 }

 return (0);

fail:
 FUNC_4(VAR_3);
 return (VAR_6);
}
