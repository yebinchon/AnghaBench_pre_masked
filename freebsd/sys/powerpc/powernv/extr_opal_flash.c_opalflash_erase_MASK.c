
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opalflash_softc {int sc_opal_id; TYPE_1__* sc_disk; } ;
struct opal_msg {int* params; } ;
typedef int off_t ;
typedef int msg ;
struct TYPE_2__ {int d_stripesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct opal_msg*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct opalflash_softc *VAR_4, off_t VAR_5, off_t VAR_6)
{
 struct opal_msg VAR_7;
 int VAR_8, VAR_9;


 if (VAR_5 % VAR_4->sc_disk->d_stripesize != 0 ||
     VAR_6 % VAR_4->sc_disk->d_stripesize != 0)
  return (VAR_0);

 VAR_9 = FUNC_0();

 VAR_8 = FUNC_1(VAR_2, VAR_4->sc_opal_id, VAR_5, VAR_6, VAR_9);
 if (VAR_8 == VAR_1) {
  VAR_8 = FUNC_3(&VAR_7, sizeof(VAR_7), VAR_9);
  if (VAR_8 == VAR_3)
   VAR_8 = VAR_7.params[1];
 }
 FUNC_2(VAR_9);

 if (VAR_8 == VAR_3)
  VAR_8 = 0;
 else
  VAR_8 = VAR_0;

 return (VAR_8);
}
