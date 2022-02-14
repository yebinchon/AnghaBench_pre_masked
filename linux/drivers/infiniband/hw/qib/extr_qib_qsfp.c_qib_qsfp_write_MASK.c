
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qib_pportdata {int port; scalar_t__ hw_pidx; struct qib_devdata* dd; } ;
struct qib_devdata {scalar_t__ twsi_eeprom_dev; int eep_lock; int (* f_gpio_mod ) (struct qib_devdata*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qib_devdata*,int ,char*) ;
 int FUNC_4 (struct qib_devdata*,int ,int,int *,int) ;
 int FUNC_5 (struct qib_devdata*) ;
 int FUNC_6 (struct qib_devdata*,int,int,int) ;
 int FUNC_7 (struct qib_devdata*,int,int,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct qib_pportdata *VAR_9, int VAR_10, void *VAR_11,
     int VAR_12)
{
 struct qib_devdata *VAR_13 = VAR_9->dd;
 u32 VAR_14, VAR_15;
 int VAR_16, VAR_17;
 u8 *VAR_18 = VAR_11;

 VAR_16 = FUNC_1(&VAR_13->eep_lock);
 if (VAR_16)
  goto no_unlock;

 if (VAR_13->twsi_eeprom_dev == VAR_2) {
  VAR_16 = -VAR_1;
  goto bail;
 }
 VAR_15 = VAR_6 | VAR_5 | VAR_4;
 VAR_14 = VAR_5 | VAR_4;
 if (VAR_9->hw_pidx) {
  VAR_15 <<= VAR_7;
  VAR_14 <<= VAR_7;
 }
 VAR_13->f_gpio_mod(VAR_13, VAR_14, VAR_15, VAR_15);





 FUNC_0(20);


 VAR_16 = FUNC_5(VAR_13);
 if (VAR_16) {
  FUNC_3(VAR_13, VAR_9->port,
    "QSFP interface Reset for write failed\n");
  VAR_16 = -VAR_0;
  goto deselect;
 }



 VAR_17 = 0;
 while (VAR_17 < VAR_12) {
  unsigned VAR_19;
  int VAR_20 = VAR_12 - VAR_17;

  VAR_19 = VAR_10 % VAR_8;
  if ((VAR_19 + VAR_20) > VAR_8)
   VAR_20 = VAR_8 - VAR_19;
  VAR_16 = FUNC_4(VAR_13, VAR_3, VAR_10, VAR_18 + VAR_17, VAR_20);
  if (VAR_16) {

   VAR_16 = -VAR_0;
   goto deselect;
  }
  VAR_10 += VAR_20;
  VAR_17 += VAR_20;
 }
 VAR_16 = VAR_17;

deselect:





 FUNC_8(10);

 VAR_13->f_gpio_mod(VAR_13, VAR_15, VAR_15, VAR_15);





 FUNC_0(20);

bail:
 FUNC_2(&VAR_13->eep_lock);

no_unlock:
 return VAR_16;
}
