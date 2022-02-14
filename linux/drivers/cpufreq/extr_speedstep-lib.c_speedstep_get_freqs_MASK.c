
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ktime_t ;
typedef enum speedstep_processor { ____Placeholder_speedstep_processor } speedstep_processor ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,unsigned int,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 unsigned int FUNC_9 (int) ;

unsigned int FUNC_10(enum speedstep_processor VAR_5,
      unsigned int *VAR_6,
      unsigned int *VAR_7,
      unsigned int *VAR_8,
      void (*VAR_9) (unsigned int VAR_10))
{
 unsigned int VAR_11;
 unsigned int VAR_12 = 0;
 unsigned long VAR_13;
 ktime_t VAR_14, VAR_15;

 if ((!VAR_5) || (!VAR_6) || (!VAR_7) || (!VAR_9))
  return -VAR_0;

 FUNC_5("trying to determine both speeds\n");


 VAR_11 = FUNC_9(VAR_5);
 if (!VAR_11)
  return -VAR_1;

 FUNC_5("previous speed is %u\n", VAR_11);

 FUNC_7();
 FUNC_4(VAR_13);


 VAR_9(VAR_4);
 *VAR_6 = FUNC_9(VAR_5);
 if (!*VAR_6) {
  VAR_12 = -VAR_1;
  goto out;
 }

 FUNC_5("low speed is %u\n", *VAR_6);


 if (VAR_8)
  VAR_14 = FUNC_0();


 VAR_9(VAR_3);


 if (VAR_8)
  VAR_15 = FUNC_0();

 *VAR_7 = FUNC_9(VAR_5);
 if (!*VAR_7) {
  VAR_12 = -VAR_1;
  goto out;
 }

 FUNC_5("high speed is %u\n", *VAR_7);

 if (*VAR_6 == *VAR_7) {
  VAR_12 = -VAR_2;
  goto out;
 }


 if (*VAR_7 != VAR_11)
  VAR_9(VAR_4);

 if (VAR_8) {
  *VAR_8 = FUNC_2(FUNC_1(VAR_15, VAR_14));
  FUNC_5("transition latency is %u uSec\n", *VAR_8);


  *VAR_8 *= 1200;




  if (*VAR_8 > 10000000 ||
      *VAR_8 < 50000) {
   FUNC_6("frequency transition measured seems out of range (%u nSec), falling back to a safe one of %u nSec\n",
    *VAR_8, 500000);
   *VAR_8 = 500000;
  }
 }

out:
 FUNC_3(VAR_13);
 FUNC_8();

 return VAR_12;
}
