
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct eventtimer {int et_priv; } ;
struct attimer_softc {int intr_en; scalar_t__ period; int mode; } ;
typedef scalar_t__ sbintime_t ;
typedef int device_t ;
struct TYPE_5__ {TYPE_1__* is_pic; } ;
struct TYPE_4__ {int (* pic_enable_source ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct attimer_softc* FUNC_0 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(struct eventtimer *VAR_3, sbintime_t VAR_4, sbintime_t VAR_5)
{
 device_t VAR_6 = (device_t)VAR_3->et_priv;
 struct attimer_softc *VAR_7 = FUNC_0(VAR_6);

 if (VAR_5 != 0) {
  VAR_7->mode = VAR_1;
  VAR_7->period = VAR_5;
 } else {
  VAR_7->mode = VAR_0;
  VAR_7->period = VAR_4;
 }
 if (!VAR_7->intr_en) {
  VAR_2->is_pic->pic_enable_source(VAR_2);
  VAR_7->intr_en = 1;
 }
 FUNC_1(VAR_7->mode, VAR_7->period);
 return (0);
}
