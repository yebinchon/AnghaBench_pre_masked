
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {int search_mode; int demod_mode; TYPE_1__* internal; } ;
struct TYPE_2__ {int dev_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct stv090x_state*,int ) ;




 int FUNC_1 (int,int ,int) ;
 int VAR_7 ;
 int FUNC_2 (struct stv090x_state*,int ,int) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (struct stv090x_state*) ;
 int FUNC_5 (struct stv090x_state*) ;
 int FUNC_6 (struct stv090x_state*) ;
 int FUNC_7 (struct stv090x_state*) ;
 int FUNC_8 (struct stv090x_state*) ;
 int FUNC_9 (struct stv090x_state*) ;
 int FUNC_10 (struct stv090x_state*,int) ;

__attribute__((used)) static int FUNC_11(struct stv090x_state *VAR_8)
{
 u32 VAR_9;

 switch (VAR_8->search_mode) {
 case 129:
 case 130:
  VAR_9 = FUNC_0(VAR_8, VAR_3);
  FUNC_1(VAR_9, VAR_4, 1);
  FUNC_1(VAR_9, VAR_5, 0);
  if (FUNC_2(VAR_8, VAR_3, VAR_9) < 0)
   goto err;




  if (FUNC_10(VAR_8, 0) < 0)
   goto err;

  if (FUNC_6(VAR_8) < 0)
   goto err;

  if (FUNC_2(VAR_8, VAR_2, 0x22) < 0)
   goto err;

  if (FUNC_7(VAR_8) < 0)
   goto err;
  if (FUNC_9(VAR_8) < 0)
   goto err;
  break;

 case 128:
  VAR_9 = FUNC_0(VAR_8, VAR_3);
  FUNC_1(VAR_9, VAR_4, 0);
  FUNC_1(VAR_9, VAR_5, 0);
  if (FUNC_2(VAR_8, VAR_3, VAR_9) < 0)
   goto err;
  FUNC_1(VAR_9, VAR_4, 1);
  FUNC_1(VAR_9, VAR_5, 1);
  if (FUNC_2(VAR_8, VAR_3, VAR_9) < 0)
   goto err;

  if (FUNC_10(VAR_8, 1) < 0)
   goto err;

  if (FUNC_2(VAR_8, VAR_0, 0x1a) < 0)
   goto err;
  if (FUNC_2(VAR_8, VAR_1, 0x09) < 0)
   goto err;

  if (VAR_8->internal->dev_ver <= 0x20) {

   if (FUNC_2(VAR_8, VAR_2, 0x26) < 0)
    goto err;
  } else {

   if (FUNC_2(VAR_8, VAR_2, 0x66) < 0)
    goto err;
  }

  if (VAR_8->demod_mode != VAR_7) {

   if (FUNC_4(VAR_8) < 0)
    goto err;
  } else {




   if (FUNC_5(VAR_8) < 0)
    goto err;
  }

  if (FUNC_8(VAR_8) < 0)
   goto err;
  break;

 case 131:
 default:

  VAR_9 = FUNC_0(VAR_8, VAR_3);
  FUNC_1(VAR_9, VAR_4, 0);
  FUNC_1(VAR_9, VAR_5, 0);
  if (FUNC_2(VAR_8, VAR_3, VAR_9) < 0)
   goto err;
  FUNC_1(VAR_9, VAR_4, 1);
  FUNC_1(VAR_9, VAR_5, 1);
  if (FUNC_2(VAR_8, VAR_3, VAR_9) < 0)
   goto err;

  if (FUNC_10(VAR_8, 0) < 0)
   goto err;

  if (FUNC_6(VAR_8) < 0)
   goto err;

  if (VAR_8->internal->dev_ver <= 0x20) {

   if (FUNC_2(VAR_8, VAR_2, 0x26) < 0)
    goto err;
  } else {

   if (FUNC_2(VAR_8, VAR_2, 0x66) < 0)
    goto err;
  }

  if (VAR_8->demod_mode != VAR_7) {

   if (FUNC_4(VAR_8) < 0)
    goto err;
  } else {




   if (FUNC_5(VAR_8) < 0)
    goto err;
  }

  if (FUNC_7(VAR_8) < 0)
   goto err;

  if (FUNC_9(VAR_8) < 0)
   goto err;
  break;
 }
 return 0;
err:
 FUNC_3(VAR_6, 1, "I/O error");
 return -1;
}
