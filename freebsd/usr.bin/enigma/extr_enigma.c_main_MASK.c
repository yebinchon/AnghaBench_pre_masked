
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int*) ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;

int
FUNC_8(int VAR_8, char *VAR_9[])
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15 = 0, VAR_16 = 0;
 char *VAR_17;

 if (VAR_8 > 1 && VAR_9[1][0] == '-') {
  if (VAR_9[1][1] == 's') {
   VAR_8--;
   VAR_9++;
   VAR_15 = 1;
  } else if (VAR_9[1][1] == 'k') {
   VAR_8--;
   VAR_9++;
   VAR_16 = 1;
  }
 }
 if (VAR_16) {
  if ((VAR_17 = FUNC_3(VAR_1)) == ((void*)0)) {
   FUNC_1(VAR_4, "%s not set\n", VAR_1);
   FUNC_0(1);
  }
  FUNC_6(VAR_17);
 } else if (VAR_8 != 2) {
  FUNC_6(FUNC_4("Enter key:"));
 }
 else
  FUNC_6(VAR_9[1]);
 VAR_11 = 0;
 VAR_12 = 0;
 VAR_14 = 0;

 while((VAR_10=FUNC_2()) != -1) {
  if (VAR_15) {
   VAR_13 = VAR_3[VAR_11]&VAR_0;
   VAR_14 = VAR_3[VAR_13]&VAR_0;
  } else {
   VAR_13 = VAR_11;
  }
  VAR_10 = VAR_6[(VAR_7[(VAR_5[(VAR_10+VAR_13)&VAR_0]+VAR_14)&VAR_0]-VAR_14)&VAR_0]-VAR_13;
  FUNC_5(VAR_10);
  VAR_11++;
  if(VAR_11==VAR_2) {
   VAR_11 = 0;
   VAR_12++;
   if(VAR_12==VAR_2) VAR_12 = 0;
   if (VAR_15) {
    FUNC_7(VAR_3);
   } else {
    VAR_14 = VAR_12;
   }
  }
 }

 return 0;
}
