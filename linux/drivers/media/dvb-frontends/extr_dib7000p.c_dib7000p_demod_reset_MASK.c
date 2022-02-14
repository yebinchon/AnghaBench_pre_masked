
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tuner_is_baseband; } ;
struct dib7000p_state {scalar_t__ version; TYPE_1__ cfg; int i2c_master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dib7000p_state*,int) ;
 scalar_t__ FUNC_1 (struct dib7000p_state*) ;
 int FUNC_2 (struct dib7000p_state*) ;
 int FUNC_3 (struct dib7000p_state*) ;
 int FUNC_4 (struct dib7000p_state*,int ) ;
 int FUNC_5 (struct dib7000p_state*,int) ;
 scalar_t__ FUNC_6 (struct dib7000p_state*,int ) ;
 int FUNC_7 (struct dib7000p_state*,int ) ;
 int FUNC_8 (struct dib7000p_state*,int ) ;
 int FUNC_9 (struct dib7000p_state*,int,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct dib7000p_state *VAR_8)
{
 FUNC_7(VAR_8, VAR_0);

 if (VAR_8->version == VAR_6)
  FUNC_10(&VAR_8->i2c_master);

 FUNC_4(VAR_8, VAR_4);


 FUNC_9(VAR_8, 770, 0xffff);
 FUNC_9(VAR_8, 771, 0xffff);
 FUNC_9(VAR_8, 772, 0x001f);
 FUNC_9(VAR_8, 1280, 0x001f - ((1 << 4) | (1 << 3)));

 FUNC_9(VAR_8, 770, 0);
 FUNC_9(VAR_8, 771, 0);
 FUNC_9(VAR_8, 772, 0);
 FUNC_9(VAR_8, 1280, 0);

 if (VAR_8->version != VAR_6) {
  FUNC_9(VAR_8, 898, 0x0003);
  FUNC_9(VAR_8, 898, 0);
 }


 FUNC_2(VAR_8);

 if (FUNC_1(VAR_8) != 0)
  FUNC_11("GPIO reset was not successful.\n");

 if (VAR_8->version == VAR_6) {
  FUNC_9(VAR_8, 899, 0);


  FUNC_9(VAR_8, 42, (1<<5) | 3);
  FUNC_9(VAR_8, 43, 0x2d4);
  FUNC_9(VAR_8, 44, 300);
  FUNC_9(VAR_8, 273, (0<<6) | 30);
 }
 if (FUNC_6(VAR_8, VAR_5) != 0)
  FUNC_11("OUTPUT_MODE could not be reset.\n");

 FUNC_4(VAR_8, VAR_3);
 FUNC_3(VAR_8);
 FUNC_4(VAR_8, VAR_2);


 FUNC_9(VAR_8, 1285, FUNC_0(VAR_8, 1285) & ~(1 << 1));

 FUNC_5(VAR_8, 8000);

 if (VAR_8->version == VAR_6) {
  FUNC_9(VAR_8, 36, 0x0755);
 } else {
  if (VAR_8->cfg.tuner_is_baseband)
   FUNC_9(VAR_8, 36, 0x0755);
  else
   FUNC_9(VAR_8, 36, 0x1f55);
 }

 FUNC_8(VAR_8, VAR_7);
 if (VAR_8->version != VAR_6) {
  FUNC_9(VAR_8, 901, 0x0006);
  FUNC_9(VAR_8, 902, (3 << 10) | (1 << 6));
  FUNC_9(VAR_8, 905, 0x2c8e);
 }

 FUNC_7(VAR_8, VAR_1);

 return 0;
}
