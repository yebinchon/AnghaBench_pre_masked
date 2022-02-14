
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stv090x_state {int srate; int algo; int search_range; scalar_t__ search_mode; TYPE_1__* internal; } ;
typedef int s16 ;
struct TYPE_2__ {int dev_ver; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

 int FUNC_2 (struct stv090x_state*,int ) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_3 (int,int ,int) ;

 scalar_t__ FUNC_4 (struct stv090x_state*,int ,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_5 (int ,int,char*) ;

__attribute__((used)) static int FUNC_6(struct stv090x_state *VAR_29)
{
 u32 VAR_30, VAR_31;
 s16 VAR_32;


 VAR_30 = FUNC_2(VAR_29, VAR_12);
 FUNC_3(VAR_30, VAR_16, 0x1f);
 if (FUNC_4(VAR_29, VAR_12, VAR_30) < 0)
  goto err;

 if (VAR_29->internal->dev_ver <= 0x20) {
  if (VAR_29->srate <= 5000000) {
   if (FUNC_4(VAR_29, VAR_0, 0x44) < 0)
    goto err;
   if (FUNC_4(VAR_29, VAR_8, 0x0f) < 0)
    goto err;
   if (FUNC_4(VAR_29, VAR_7, 0xff) < 0)
    goto err;
   if (FUNC_4(VAR_29, VAR_6, 0xf0) < 0)
    goto err;
   if (FUNC_4(VAR_29, VAR_5, 0x00) < 0)
    goto err;


   if (FUNC_4(VAR_29, VAR_18, 0x68) < 0)
    goto err;
  } else {


   if (FUNC_4(VAR_29, VAR_0, 0xc4) < 0)
    goto err;

   if (FUNC_4(VAR_29, VAR_18, 0x44) < 0)
    goto err;
  }
 } else {

  if (VAR_29->srate <= 5000000) {

   FUNC_4(VAR_29, VAR_18, 0x68);
  } else {

   FUNC_4(VAR_29, VAR_18, 0x44);
  }


  FUNC_4(VAR_29, VAR_0, 0x46);

  if (VAR_29->algo == 128) {




   VAR_31 = 1000 << 16;
   VAR_31 /= (VAR_29->internal->mclk / 1000);
   VAR_32 = (s16) VAR_31;
  } else {





   VAR_31 = (VAR_29->search_range / 2000) + 600;
   VAR_31 = VAR_31 << 16;
   VAR_31 /= (VAR_29->internal->mclk / 1000);
   VAR_32 = (s16) VAR_31;
  }

  if (FUNC_4(VAR_29, VAR_8, FUNC_1(VAR_32)) < 0)
   goto err;
  if (FUNC_4(VAR_29, VAR_7, FUNC_0(VAR_32)) < 0)
   goto err;

  VAR_32 *= -1;

  if (FUNC_4(VAR_29, VAR_6, FUNC_1(VAR_32)) < 0)
   goto err;
  if (FUNC_4(VAR_29, VAR_5, FUNC_0(VAR_32)) < 0)
   goto err;

 }

 if (FUNC_4(VAR_29, VAR_4, 0) < 0)
  goto err;
 if (FUNC_4(VAR_29, VAR_3, 0) < 0)
  goto err;

 if (VAR_29->internal->dev_ver >= 0x20) {
  if (FUNC_4(VAR_29, VAR_13, 0x41) < 0)
   goto err;
  if (FUNC_4(VAR_29, VAR_15, 0x41) < 0)
   goto err;

  if ((VAR_29->search_mode == VAR_24) ||
   (VAR_29->search_mode == VAR_23) ||
   (VAR_29->search_mode == VAR_22)) {

   if (FUNC_4(VAR_29, VAR_28, 0x82) < 0)
    goto err;
   if (FUNC_4(VAR_29, VAR_27, 0x00) < 0)
    goto err;
  }
 }

 if (FUNC_4(VAR_29, VAR_21, 0x00) < 0)
  goto err;
 if (FUNC_4(VAR_29, VAR_26, 0xe0) < 0)
  goto err;
 if (FUNC_4(VAR_29, VAR_25, 0xc0) < 0)
  goto err;

 VAR_30 = FUNC_2(VAR_29, VAR_11);
 FUNC_3(VAR_30, VAR_20, 0);
 FUNC_3(VAR_30, VAR_9, 0);
 if (FUNC_4(VAR_29, VAR_11, VAR_30) < 0)
  goto err;
 VAR_30 = FUNC_2(VAR_29, VAR_10);
 FUNC_3(VAR_30, VAR_19, 0x0);
 if (FUNC_4(VAR_29, VAR_10, VAR_30) < 0)
  goto err;

 if (FUNC_4(VAR_29, VAR_17, 0x88) < 0)
  goto err;

 if (VAR_29->internal->dev_ver >= 0x20) {

  if (VAR_29->srate < 2000000) {
   if (VAR_29->internal->dev_ver <= 0x20) {

    if (FUNC_4(VAR_29, VAR_1, 0x39) < 0)
     goto err;
   } else {

    if (FUNC_4(VAR_29, VAR_1, 0x89) < 0)
     goto err;
   }
   if (FUNC_4(VAR_29, VAR_2, 0x40) < 0)
    goto err;
  } else if (VAR_29->srate < 10000000) {
   if (FUNC_4(VAR_29, VAR_1, 0x4c) < 0)
    goto err;
   if (FUNC_4(VAR_29, VAR_2, 0x20) < 0)
    goto err;
  } else {
   if (FUNC_4(VAR_29, VAR_1, 0x4b) < 0)
    goto err;
   if (FUNC_4(VAR_29, VAR_2, 0x20) < 0)
    goto err;
  }
 } else {
  if (VAR_29->srate < 10000000) {
   if (FUNC_4(VAR_29, VAR_1, 0xef) < 0)
    goto err;
  } else {
   if (FUNC_4(VAR_29, VAR_1, 0xed) < 0)
    goto err;
  }
 }

 switch (VAR_29->algo) {
 case 128:



  if (FUNC_4(VAR_29, VAR_12, 0x1f) < 0)
   goto err;
  if (FUNC_4(VAR_29, VAR_12, 0x18) < 0)
   goto err;
  break;

 case 129:

  if (FUNC_4(VAR_29, VAR_12, 0x1f) < 0)
   goto err;
  if (FUNC_4(VAR_29, VAR_12, 0x15) < 0)
   goto err;
  break;

 default:
  break;
 }
 return 0;
err:
 FUNC_5(VAR_14, 1, "I/O error");
 return -1;
}
