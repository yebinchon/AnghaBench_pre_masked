
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long svalue; int value; unsigned long time; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,double,...) ;
 double* VAR_8 ;
 int VAR_9 ;
 double VAR_10 ;

void
FUNC_4(void)
{
    register int VAR_11;
    double VAR_12;
    double VAR_13;
    unsigned long VAR_14, VAR_15;
    register int VAR_16;
    unsigned long VAR_17;
    unsigned long VAR_18, VAR_19;


    VAR_9 = VAR_3 - VAR_4;
    VAR_9 /= VAR_7;
    FUNC_0();
    for (VAR_16 = 0, VAR_11 = 1; VAR_16 < VAR_7; VAR_16++) {
 VAR_12 = VAR_8[VAR_16];
 if (VAR_12 == 0)
  continue;
 VAR_14 = VAR_4 + (unsigned long)(VAR_9 * VAR_16);
 VAR_15 = VAR_4 + (unsigned long)(VAR_9 * (VAR_16 + 1));
 VAR_13 = VAR_12;






 VAR_10 += VAR_13;
 for (VAR_11 = VAR_11 - 1; VAR_11 < VAR_6; VAR_11++) {
     VAR_18 = VAR_5[VAR_11].svalue;
     VAR_19 = VAR_5[VAR_11+1].svalue;




     if (VAR_15 < VAR_18)
      break;




     if (VAR_14 >= VAR_19)
      continue;
     VAR_17 = FUNC_2(VAR_15, VAR_19) - FUNC_1(VAR_14, VAR_18);
     if (VAR_17 > 0) {
  VAR_5[VAR_11].time += VAR_17 * VAR_13 / VAR_9;
     }
 }
    }





}
