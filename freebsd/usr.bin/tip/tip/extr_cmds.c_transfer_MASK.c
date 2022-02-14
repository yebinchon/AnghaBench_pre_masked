
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int sig_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,scalar_t__) ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (int ,char*,int) ;
 int * VAR_14 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,int ,int *) ;
 int VAR_15 ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_16 ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int,char*,int) ;

__attribute__((used)) static void
FUNC_16(char *VAR_17, int VAR_18, char *VAR_19)
{
 int VAR_20, VAR_21;
 char VAR_22, VAR_23[VAR_0];
 char *VAR_24 = VAR_23;
 size_t VAR_25;
 time_t VAR_26;
 sig_t VAR_27;
 char VAR_28;

 if (FUNC_4(FUNC_14(VAR_2)) > VAR_0 || FUNC_4(FUNC_14(VAR_2)) < 1) {
  FUNC_6("framesize must be >= 1 and <= %d\r\n", VAR_0);
  FUNC_2(VAR_18);
  return;
 }

 FUNC_5(VAR_1, VAR_17, FUNC_11(VAR_17));
 VAR_13 = 0;
 FUNC_3(VAR_16, VAR_4);
 FUNC_8(VAR_14[0], (char *)&VAR_8, 1);




 VAR_28 = '\r';
 FUNC_5(VAR_1, &VAR_28, 1);
 do
  FUNC_8(VAR_1, &VAR_22, 1);
 while ((VAR_22&VAR_5) != '\n');
 FUNC_12(0, VAR_6, &VAR_9);

 (void) FUNC_9(VAR_11);
 VAR_27 = FUNC_10(VAR_3, VAR_12);
 VAR_26 = FUNC_13(0);
 for (VAR_20 = 0; !VAR_13;) {
  VAR_21 = FUNC_8(VAR_1, &VAR_22, 1) <= 0;
  VAR_22 &= VAR_5;
  if (VAR_13)
   continue;
  if (VAR_21 || FUNC_0(VAR_22, VAR_19))
   break;
  if (VAR_22 == 0)
   continue;
  if (VAR_22 == '\r')
   continue;
  *VAR_24++ = VAR_22;

  if (VAR_22 == '\n' && FUNC_1(FUNC_14(VAR_7)))
   FUNC_6("\r%d", ++VAR_20);
  if ((VAR_25 = (VAR_24-VAR_23)) == (size_t)FUNC_4(FUNC_14(VAR_2))) {
   if ((size_t)FUNC_15(VAR_18, VAR_23, VAR_25) != VAR_25) {
    FUNC_6("\r\nwrite error\r\n");
    VAR_13 = 1;
   }
   VAR_24 = VAR_23;
  }
 }
 if ((VAR_25 = (VAR_24-VAR_23)))
  if ((size_t)FUNC_15(VAR_18, VAR_23, VAR_25) != VAR_25)
   FUNC_6("\r\nwrite error\r\n");

 if (FUNC_1(FUNC_14(VAR_7)))
  FUNC_7(" lines transferred in ", FUNC_13(0)-VAR_26);
 FUNC_12(0, VAR_6, &VAR_15);
 FUNC_15(VAR_10[1], (char *)&VAR_8, 1);
 FUNC_10(VAR_3, VAR_27);
 FUNC_2(VAR_18);
}
