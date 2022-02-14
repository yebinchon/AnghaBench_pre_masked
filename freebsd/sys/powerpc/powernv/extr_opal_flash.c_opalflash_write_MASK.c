
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct opalflash_softc {int sc_opal_id; scalar_t__ sc_erase; TYPE_1__* sc_disk; } ;
struct opal_msg {int* params; } ;
typedef int off_t ;
typedef int msg ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int d_sectorsize; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int,int ,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct opal_msg*,int,int) ;
 int FUNC_5 (struct opalflash_softc*,int,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct opalflash_softc *VAR_6, off_t VAR_7,
    caddr_t VAR_8, off_t VAR_9)
{
 struct opal_msg VAR_10;
 int VAR_11, VAR_12, VAR_13;


 if (VAR_7 % VAR_6->sc_disk->d_sectorsize != 0 ||
     VAR_9 % VAR_6->sc_disk->d_sectorsize != 0)
  return (VAR_0);

 if (VAR_6->sc_erase) {

     VAR_11 = FUNC_5(VAR_6, VAR_7, VAR_9);
     if (VAR_11 != 0)
      return (VAR_11);
 }

 VAR_13 = FUNC_1();





 while (VAR_9 > 0) {
  VAR_12 = FUNC_0(VAR_9, VAR_5);
  VAR_12 = FUNC_0(VAR_12, VAR_5 - ((u_long)VAR_8 & VAR_4));
  VAR_11 = FUNC_2(VAR_2, VAR_6->sc_opal_id, VAR_7,
      FUNC_6(VAR_8), VAR_12, VAR_13);
  if (VAR_11 == VAR_1) {
   VAR_11 = FUNC_4(&VAR_10, sizeof(VAR_10), VAR_13);
   if (VAR_11 == VAR_3)
    VAR_11 = VAR_10.params[1];
  }
  if (VAR_11 != VAR_3)
   break;
  VAR_9 -= VAR_12;
  VAR_7 += VAR_12;
  VAR_8 += VAR_12;
 }
 FUNC_3(VAR_13);

 if (VAR_11 == VAR_3)
  VAR_11 = 0;
 else
  VAR_11 = VAR_0;

 return (VAR_11);
}
