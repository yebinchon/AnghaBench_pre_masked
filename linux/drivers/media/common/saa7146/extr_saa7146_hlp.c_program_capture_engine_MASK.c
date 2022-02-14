
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_vv {scalar_t__ current_hps_sync; scalar_t__ last_field; } ;
struct saa7146_dev {struct saa7146_vv* vv_data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct saa7146_dev *VAR_27, int VAR_28)
{
 struct saa7146_vv *VAR_29 = VAR_27->vv_data;
 int VAR_30 = 0;

 unsigned long VAR_31 = VAR_29->current_hps_sync == VAR_23 ? VAR_0 : VAR_1;
 unsigned long VAR_32 = VAR_29->current_hps_sync == VAR_23 ? VAR_4 : VAR_5;


 FUNC_0(VAR_6 | VAR_3 | VAR_7 | VAR_32);
 FUNC_0(VAR_6 | VAR_3 | VAR_7 | VAR_31);


 FUNC_0(VAR_9 | (1 << 8) | (VAR_22/4));
 FUNC_0(VAR_20 | VAR_16);


 FUNC_0(VAR_10 | (VAR_21/4));
 FUNC_0(VAR_13 | VAR_19);
 FUNC_0(VAR_13 | VAR_19);
 if( 0 != VAR_28 ) {

  FUNC_0(VAR_10 | (VAR_21/4));
  FUNC_0(VAR_12 | VAR_18);
  FUNC_0(VAR_12 | VAR_18);


  FUNC_0(VAR_10 | (VAR_21/4));
  FUNC_0(VAR_11 | VAR_17);
  FUNC_0(VAR_11 | VAR_17);
 }


 if ( VAR_29->last_field == VAR_25 ) {
  FUNC_0(VAR_6 | VAR_32);
  FUNC_0(VAR_6 | VAR_31);
 } else if ( VAR_29->last_field == VAR_26 ) {
  FUNC_0(VAR_6 | (VAR_29->current_hps_sync == VAR_23 ? VAR_15 : VAR_14));
  FUNC_0(VAR_6 | VAR_32);
 } else if ( VAR_29->last_field == VAR_24 ) {
  FUNC_0(VAR_6 | (VAR_29->current_hps_sync == VAR_23 ? VAR_15 : VAR_14));
  FUNC_0(VAR_6 | VAR_31);
 }


 FUNC_0(VAR_10 | (VAR_21/4));
 FUNC_0(VAR_19 | VAR_13);
 FUNC_0(VAR_19);
 if( 0 != VAR_28 ) {

  FUNC_0(VAR_10 | (VAR_21/4));
  FUNC_0(VAR_12 | VAR_18);
  FUNC_0(VAR_18);


  FUNC_0(VAR_10 | (VAR_21/4));
  FUNC_0(VAR_11 | VAR_17);
  FUNC_0(VAR_17);
 }


 FUNC_0(VAR_2);


 FUNC_0(VAR_8);
}
