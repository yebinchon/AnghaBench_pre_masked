
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc85xx_jog_softc {scalar_t__ min_freq; } ;
struct jog_rv_args {int slow; int inprogress; int cpu; int mult; } ;
struct cf_setting {scalar_t__ freq; int * spec; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct mpc85xx_jog_softc* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,struct jog_rv_args*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4, const struct cf_setting *VAR_5)
{
 struct mpc85xx_jog_softc *VAR_6;
 struct jog_rv_args VAR_7;

 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_6 = FUNC_1(VAR_4);

 VAR_7.slow = (VAR_5->freq <= VAR_6->min_freq);
 VAR_7.mult = VAR_5->spec[0];
 VAR_7.cpu = FUNC_0(VAR_1);
 VAR_7.inprogress = 1;
 FUNC_2(VAR_3, VAR_2,
     VAR_3, &VAR_7);

 return (0);
}
