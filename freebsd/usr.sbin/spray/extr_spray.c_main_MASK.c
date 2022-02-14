
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_int ;
struct TYPE_6__ {double sec; double usec; } ;
struct TYPE_7__ {int counter; TYPE_1__ clock; } ;
typedef TYPE_2__ spraycumul ;
struct TYPE_8__ {int sprayarr_len; int sprayarr_val; } ;
typedef TYPE_3__ sprayarr ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ,TYPE_3__*,int ,TYPE_2__*,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (char*,int ,int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,char**,char*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_10 (int,int,double) ;
 int FUNC_11 (char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

int
FUNC_14(int VAR_19, char *VAR_20[])
{
 spraycumul VAR_21;
 sprayarr VAR_22;
 CLIENT *VAR_23;
 int VAR_24;
 u_int VAR_25;
 u_int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;
 double VAR_29;

 while ((VAR_24 = FUNC_9(VAR_19, VAR_20, "c:d:l:")) != -1) {
  switch (VAR_24) {
  case 'c':
   VAR_26 = FUNC_0(VAR_12);
   break;
  case 'd':
   VAR_27 = FUNC_0(VAR_12);
   break;
  case 'l':
   VAR_28 = FUNC_0(VAR_12);
   break;
  default:
   FUNC_12();

  }
 }
 VAR_19 -= VAR_13;
 VAR_20 += VAR_13;

 if (VAR_19 != 1) {
  FUNC_12();

 }



 if (VAR_28 > VAR_4) {
  VAR_28 = VAR_4;
 } else if (VAR_28 < VAR_5) {
  VAR_28 = VAR_5;
 } else {

  VAR_28 -= VAR_5 - 3;
  VAR_28 &= ~3;
  VAR_28 += VAR_5;
 }






 if (!VAR_26) {
  VAR_26 = 100000 / VAR_28;
 }


 VAR_22.sprayarr_len = VAR_28 - VAR_5;
 VAR_22.sprayarr_val = VAR_14;



 VAR_23 = FUNC_3(*VAR_20, VAR_9, VAR_10, "udp");
 if (VAR_23 == ((void*)0))
  FUNC_6(1, "%s", FUNC_4(""));
 FUNC_2(VAR_23, VAR_0, &VAR_1);



 if (FUNC_1(VAR_23, VAR_6, (xdrproc_t)VAR_18, ((void*)0),
  (xdrproc_t)VAR_18, ((void*)0), VAR_11) != VAR_3)
  FUNC_6(1, "%s", FUNC_5(VAR_23, ""));



 FUNC_11 ("sending %u packets of length %d to %s ...", VAR_26, VAR_28,
     *VAR_20);
 FUNC_8 (VAR_15);

 for (VAR_25 = 0; VAR_25 < VAR_26; VAR_25++) {
  FUNC_1(VAR_23, VAR_8, (xdrproc_t)VAR_16,
      &VAR_22, (xdrproc_t)VAR_18, ((void*)0), VAR_2);

  if (VAR_27) {
   FUNC_13(VAR_27);
  }
 }



 if (FUNC_1(VAR_23, VAR_7, (xdrproc_t)VAR_18, ((void*)0),
  (xdrproc_t)VAR_17, &VAR_21, VAR_11) != VAR_3)
  FUNC_6(1, "%s", FUNC_5(VAR_23, ""));

 VAR_29 = VAR_21.clock.sec +
   (VAR_21.clock.usec / 1000000.0);

 FUNC_11 ("\n\tin %.2f seconds elapsed time\n", VAR_29);



 if (VAR_21.counter != VAR_26) {
  int VAR_30 = VAR_26 - VAR_21.counter;

  FUNC_11("\t%d packets (%.2f%%) dropped\n",
   VAR_30,
   100.0 * VAR_30 / VAR_26 );
 } else {
  FUNC_11("\tno packets dropped\n");
 }

 FUNC_11("Sent:");
 FUNC_10(VAR_26, VAR_28, VAR_29);

 FUNC_11("Rcvd:");
 FUNC_10(VAR_21.counter, VAR_28, VAR_29);

 FUNC_7 (0);
}
