
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gkc_summary {int dummy; } ;
typedef int FILE ;


 unsigned int FUNC_0 (double*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,long) ;
 struct gkc_summary* FUNC_4 (struct gkc_summary*,struct gkc_summary*) ;
 int FUNC_5 (struct gkc_summary*,int) ;
 int FUNC_6 (struct gkc_summary*) ;
 int FUNC_7 (struct gkc_summary*) ;
 struct gkc_summary* FUNC_8 (double) ;
 int FUNC_9 (struct gkc_summary*) ;
 int FUNC_10 (struct gkc_summary*,double) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_0 ;

int FUNC_14(void)
{

 unsigned int VAR_1;
 double VAR_2[] = { 12, 6, 10, 1 };

 FILE *VAR_3;
 struct gkc_summary *VAR_4;
 struct gkc_summary *VAR_5, *VAR_6, *VAR_7;

 VAR_4 = FUNC_8(0.01);
 FUNC_10(VAR_4, 0.1);
 goto test_combine;
 VAR_4 = FUNC_8(0.01);
 (void)VAR_2;



 if (0) {
  VAR_3 = FUNC_2("data", "w+");
 }
 FUNC_12(FUNC_13(((void*)0)));
 for (VAR_1 = 0; VAR_1 < 10 * 1000 * 1000; VAR_1++) {
  long VAR_8 = FUNC_11() % 10000;
  FUNC_5(VAR_4, VAR_8);
  if (0) {
   FUNC_3(VAR_3, "%ld\n", VAR_8);
  }
 }
 if (0) {
  FUNC_1(VAR_3);
 }
 FUNC_6(VAR_4);
 FUNC_10(VAR_4, .02);
 FUNC_10(VAR_4, .1);
 FUNC_10(VAR_4, .25);
 FUNC_10(VAR_4, .5);
 FUNC_10(VAR_4, .75);
 FUNC_10(VAR_4, .82);
 FUNC_10(VAR_4, .88);
 FUNC_10(VAR_4, .86);
 FUNC_10(VAR_4, .99);

 FUNC_7(VAR_4);

 FUNC_9(VAR_4);

test_combine:
 VAR_5 = FUNC_8(0.01);
 VAR_6 = FUNC_8(0.01);

 for (VAR_1 = 0; VAR_1 < 1 * 10 * 1000; VAR_1++) {
  long VAR_9 = FUNC_11() % 10000;
  FUNC_5(VAR_5, VAR_9);
 }





 VAR_7 = FUNC_4(VAR_5, VAR_6);
 FUNC_9(VAR_5);
 FUNC_9(VAR_6);

 FUNC_6(VAR_7);
 FUNC_10(VAR_7, .02);
 FUNC_10(VAR_7, .1);
 FUNC_10(VAR_7, .25);
 FUNC_10(VAR_7, .5);
 FUNC_10(VAR_7, .75);
 FUNC_10(VAR_7, .82);
 FUNC_10(VAR_7, .88);
 FUNC_10(VAR_7, .86);
 FUNC_10(VAR_7, .99);

 FUNC_7(VAR_7);

 FUNC_9(VAR_7);

 return 0;
}
