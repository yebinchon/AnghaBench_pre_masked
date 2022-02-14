
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (unsigned long,unsigned long) ;
 unsigned long FUNC_7 (unsigned long,unsigned long,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (scalar_t__*,int) ;

__attribute__((used)) static unsigned long FUNC_12(void)
{
 u64 VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13 = VAR_7, VAR_14 = VAR_7;
 unsigned long VAR_15, VAR_16, VAR_17;
 int VAR_18 = FUNC_3(), VAR_19, VAR_20;
 VAR_16 = VAR_3;
 VAR_17 = VAR_4;
 VAR_20 = VAR_5;

 for (VAR_19 = 0; VAR_19 < 3; VAR_19++) {
  unsigned long VAR_21;







  FUNC_5(VAR_15);
  VAR_8 = FUNC_11(&VAR_11, VAR_18);
  VAR_21 = FUNC_7(VAR_16, VAR_17, VAR_20);
  VAR_9 = FUNC_11(&VAR_12, VAR_18);
  FUNC_4(VAR_15);


  VAR_13 = FUNC_6(VAR_13, VAR_21);


  if (VAR_11 == VAR_12)
   continue;


  if (VAR_8 == VAR_6 || VAR_9 == VAR_6)
   continue;

  VAR_9 = (VAR_9 - VAR_8) * 1000000LL;
  if (VAR_18)
   VAR_9 = FUNC_0(VAR_9, VAR_11, VAR_12);
  else
   VAR_9 = FUNC_1(VAR_9, VAR_11, VAR_12);

  VAR_14 = FUNC_6(VAR_14, (unsigned long) VAR_9);


  VAR_10 = ((u64) VAR_13) * 100;
  FUNC_2(VAR_10, VAR_14);







  if (VAR_10 >= 90 && VAR_10 <= 110) {
   FUNC_8("PIT calibration matches %s. %d loops\n",
    VAR_18 ? "HPET" : "PMTIMER", VAR_19 + 1);
   return VAR_14;
  }







  if (VAR_19 == 1 && VAR_13 == VAR_7) {
   VAR_16 = VAR_0;
   VAR_17 = VAR_1;
   VAR_20 = VAR_2;
  }
 }




 if (VAR_13 == VAR_7) {

  FUNC_10("Unable to calibrate against PIT\n");


  if (!VAR_18 && !VAR_11 && !VAR_12) {
   FUNC_9("No reference (HPET/PMTIMER) available\n");
   return 0;
  }


  if (VAR_14 == VAR_7) {
   FUNC_10("HPET/PMTIMER calibration failed\n");
   return 0;
  }


  FUNC_8("using %s reference calibration\n",
   VAR_18 ? "HPET" : "PMTIMER");

  return VAR_14;
 }


 if (!VAR_18 && !VAR_11 && !VAR_12) {
  FUNC_8("Using PIT calibration value\n");
  return VAR_13;
 }


 if (VAR_14 == VAR_7) {
  FUNC_10("HPET/PMTIMER calibration failed. Using PIT calibration.\n");
  return VAR_13;
 }






 FUNC_10("PIT calibration deviates from %s: %lu %lu\n",
  VAR_18 ? "HPET" : "PMTIMER", VAR_13, VAR_14);
 FUNC_8("Using PIT calibration value\n");
 return VAR_13;
}
