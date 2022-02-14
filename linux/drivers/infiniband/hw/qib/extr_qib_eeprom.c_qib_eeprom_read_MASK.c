
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qib_devdata {int eep_lock; int twsi_eeprom_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qib_devdata*,char*) ;
 int FUNC_3 (struct qib_devdata*,int ,int ,void*,int) ;
 int FUNC_4 (struct qib_devdata*) ;

int FUNC_5(struct qib_devdata *VAR_0, u8 VAR_1,
      void *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_0->eep_lock);
 if (!VAR_4) {
  VAR_4 = FUNC_4(VAR_0);
  if (VAR_4)
   FUNC_2(VAR_0, "EEPROM Reset for read failed\n");
  else
   VAR_4 = FUNC_3(VAR_0, VAR_0->twsi_eeprom_dev,
           VAR_1, VAR_2, VAR_3);
  FUNC_1(&VAR_0->eep_lock);
 }

 return VAR_4;
}
