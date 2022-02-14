
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_6)
{
 int VAR_7[2];
 int VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;

 if (!FUNC_1(VAR_6, "slow")) {
  VAR_9 = 1000, VAR_8 = 500;
  VAR_11 = 3, VAR_10 = 31;
 } else if (!FUNC_1(VAR_6, "normal")) {
  VAR_9 = 500, VAR_8 = 125;
  VAR_11 = 1, VAR_10 = 15;
 } else if (!FUNC_1(VAR_6, "fast")) {
  VAR_9 = VAR_8 = 0;
  VAR_11 = VAR_10 = 0;
 } else {
  int VAR_12;
  char *VAR_13;

  VAR_9 = FUNC_2(VAR_6, &VAR_13, 0);
  if ((VAR_9 < 0) || (*VAR_13 != '.'))
   goto badopt;
  VAR_6 = ++VAR_13;
  VAR_8 = FUNC_2(VAR_6, &VAR_13, 0);
  if ((VAR_8 < 0) || (*VAR_6 == '\0') || (*VAR_13 != '\0')) {
badopt:
   FUNC_4("argument to -r must be delay.repeat or slow|normal|fast");
   return;
  }
  for (VAR_12 = 0; VAR_12 < VAR_3 - 1; VAR_12++)
   if (VAR_9 <= VAR_2[VAR_12])
    break;
  VAR_11 = VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_4 - 1; VAR_12++)
   if (VAR_8 <= VAR_5[VAR_12])
    break;
  VAR_10 = VAR_12;
 }

 VAR_7[0] = VAR_9;
 VAR_7[1] = VAR_8;
 if (FUNC_0(0, VAR_1, VAR_7)) {
  if (FUNC_0(0, VAR_0, (VAR_11 << 5) | VAR_10))
   FUNC_3("setting keyboard rate");
 }
}
