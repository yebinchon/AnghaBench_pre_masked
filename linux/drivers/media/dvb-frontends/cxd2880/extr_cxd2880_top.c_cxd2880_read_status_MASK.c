
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dtv_frontend_properties {scalar_t__ delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct cxd2880_priv* demodulator_priv; } ;
struct TYPE_3__ {scalar_t__ state; int sys; } ;
struct cxd2880_priv {int s; int spi_mutex; TYPE_1__ tnrdmd; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*) ;
 int FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (TYPE_1__*,int*,int*,int*) ;
 int FUNC_5 (TYPE_1__*,int*,int*,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_9,
          enum fe_status *VAR_10)
{
 int VAR_11;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 u8 VAR_14 = 0;
 struct cxd2880_priv *VAR_15 = ((void*)0);
 struct dtv_frontend_properties *VAR_16 = ((void*)0);

 if (!VAR_9 || !VAR_10) {
  FUNC_9("invalid arg\n");
  return -VAR_1;
 }

 VAR_15 = VAR_9->demodulator_priv;
 VAR_16 = &VAR_9->dtv_property_cache;
 *VAR_10 = 0;

 if (VAR_15->tnrdmd.state == VAR_0) {
  FUNC_6(VAR_15->spi_mutex);
  if (VAR_16->delivery_system == VAR_7) {
   VAR_11 = FUNC_5(&VAR_15->tnrdmd,
        &VAR_12,
        &VAR_13,
        &VAR_14);
  } else if (VAR_16->delivery_system == VAR_8) {
   VAR_11 = FUNC_4(&VAR_15->tnrdmd,
         &VAR_12,
         &VAR_13,
         &VAR_14);
  } else {
   FUNC_9("invalid system");
   FUNC_7(VAR_15->spi_mutex);
   return -VAR_1;
  }

  FUNC_7(VAR_15->spi_mutex);
  if (VAR_11) {
   FUNC_9("failed. sys = %d\n", VAR_15->tnrdmd.sys);
   return VAR_11;
  }

  if (VAR_12 == 6) {
   *VAR_10 = VAR_4 |
      VAR_2;
  }
  if (VAR_13)
   *VAR_10 |= VAR_6 |
       VAR_5 |
       VAR_3;
 }

 FUNC_8("status %d\n", *VAR_10);

 if (VAR_15->s == 0 && (*VAR_10 & VAR_3) &&
     (*VAR_10 & VAR_2)) {
  FUNC_6(VAR_15->spi_mutex);
  if (VAR_16->delivery_system == VAR_7) {
   VAR_11 = FUNC_2(VAR_9);
   VAR_15->s = *VAR_10;
  } else if (VAR_16->delivery_system == VAR_8) {
   VAR_11 = FUNC_0(VAR_9);
   if (!VAR_11) {
    VAR_11 = FUNC_3(VAR_9);
    VAR_15->s = *VAR_10;
   }
  } else {
   FUNC_9("invalid system\n");
   FUNC_7(VAR_15->spi_mutex);
   return -VAR_1;
  }
  FUNC_7(VAR_15->spi_mutex);
 }

 FUNC_1(VAR_9, *VAR_10);
 return 0;
}
