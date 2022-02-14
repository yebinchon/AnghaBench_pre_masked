
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgdt3306a_state {TYPE_1__* cfg; } ;
struct dvb_frontend {struct lgdt3306a_state* demodulator_priv; } ;
struct TYPE_2__ {int xtalMHz; int mpeg_mode; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3306a_state*,int ) ;
 int FUNC_3 (struct lgdt3306a_state*,int) ;
 int FUNC_4 (struct lgdt3306a_state*,int,int*) ;
 int FUNC_5 (struct lgdt3306a_state*,int) ;
 int FUNC_6 (struct lgdt3306a_state*,int ) ;
 int FUNC_7 (struct lgdt3306a_state*,int,int,int) ;
 int FUNC_8 (struct lgdt3306a_state*) ;
 int FUNC_9 (struct lgdt3306a_state*) ;
 int FUNC_10 (struct lgdt3306a_state*,int,int) ;
 int FUNC_11 (char*,int) ;

__attribute__((used)) static int FUNC_12(struct dvb_frontend *VAR_0)
{
 struct lgdt3306a_state *VAR_1 = VAR_0->demodulator_priv;
 u8 VAR_2;
 int VAR_3;

 FUNC_0("\n");


 VAR_3 = FUNC_7(VAR_1, 0x0001, 0, 1);
 if (FUNC_1(VAR_3))
  goto fail;


 VAR_3 = FUNC_6(VAR_1, 0);
 if (FUNC_1(VAR_3))
  goto fail;


 VAR_3 = FUNC_5(VAR_1, 1);
 if (FUNC_1(VAR_3))
  goto fail;




 VAR_3 = FUNC_7(VAR_1, 0x0004, 7, 1);
 if (FUNC_1(VAR_3))
  goto fail;




 VAR_3 = FUNC_7(VAR_1, 0x0004, 2, 0);
 if (FUNC_1(VAR_3))
  goto fail;




 VAR_3 = FUNC_7(VAR_1, 0x0004, 3, 0);
 if (FUNC_1(VAR_3))
  goto fail;




 VAR_3 = FUNC_7(VAR_1, 0x0005, 6, 0);
 if (FUNC_1(VAR_3))
  goto fail;

 if (VAR_1->cfg->xtalMHz == 24) {

  VAR_3 = FUNC_4(VAR_1, 0x0005, &VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;
  VAR_2 &= 0xc0;
  VAR_2 |= 0x25;
  VAR_3 = FUNC_10(VAR_1, 0x0005, VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;
  VAR_3 = FUNC_10(VAR_1, 0x0006, 0x64);
  if (FUNC_1(VAR_3))
   goto fail;


  VAR_3 = FUNC_4(VAR_1, 0x000d, &VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;
  VAR_2 &= 0xc0;
  VAR_2 |= 0x18;
  VAR_3 = FUNC_10(VAR_1, 0x000d, VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;

 } else if (VAR_1->cfg->xtalMHz == 25) {

  VAR_3 = FUNC_4(VAR_1, 0x0005, &VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;
  VAR_2 &= 0xc0;
  VAR_2 |= 0x25;
  VAR_3 = FUNC_10(VAR_1, 0x0005, VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;
  VAR_3 = FUNC_10(VAR_1, 0x0006, 0x64);
  if (FUNC_1(VAR_3))
   goto fail;


  VAR_3 = FUNC_4(VAR_1, 0x000d, &VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;
  VAR_2 &= 0xc0;
  VAR_2 |= 0x19;
  VAR_3 = FUNC_10(VAR_1, 0x000d, VAR_2);
  if (FUNC_1(VAR_3))
   goto fail;
 } else {
  FUNC_11("Bad xtalMHz=%d\n", VAR_1->cfg->xtalMHz);
 }






 VAR_3 = FUNC_10(VAR_1, 0x0010, 0x34);
 VAR_3 = FUNC_10(VAR_1, 0x0011, 0x00);


 VAR_3 = FUNC_10(VAR_1, 0x0014, 0);


 VAR_3 = FUNC_4(VAR_1, 0x103c, &VAR_2);
 VAR_2 &= 0x0f;
 VAR_2 |= 0x20;
 VAR_3 = FUNC_10(VAR_1, 0x103c, VAR_2);


 VAR_3 = FUNC_4(VAR_1, 0x103d, &VAR_2);
 VAR_2 &= 0xfc;
 VAR_2 |= 0x03;
 VAR_3 = FUNC_10(VAR_1, 0x103d, VAR_2);


 VAR_3 = FUNC_4(VAR_1, 0x1036, &VAR_2);
 VAR_2 &= 0xf0;
 VAR_2 |= 0x0c;
 VAR_3 = FUNC_10(VAR_1, 0x1036, VAR_2);


 VAR_3 = FUNC_4(VAR_1, 0x211f, &VAR_2);
 VAR_2 &= 0xef;
 VAR_3 = FUNC_10(VAR_1, 0x211f, VAR_2);


 VAR_3 = FUNC_4(VAR_1, 0x2849, &VAR_2);
 VAR_2 &= 0xef;
 VAR_3 = FUNC_10(VAR_1, 0x2849, VAR_2);


 VAR_3 = FUNC_8(VAR_1);


 VAR_3 = FUNC_2(VAR_1, VAR_1->cfg->mpeg_mode);


 VAR_3 = FUNC_3(VAR_1, 1);


 VAR_3 = FUNC_9(VAR_1);
 FUNC_1(VAR_3);

fail:
 return VAR_3;
}
