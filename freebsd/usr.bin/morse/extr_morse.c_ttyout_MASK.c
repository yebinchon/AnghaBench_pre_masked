
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int*) ;
 int VAR_8 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_9)
{
 const char *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 for (VAR_10 = VAR_9; *VAR_10 != '\0'; VAR_10++) {
  switch (*VAR_10) {
  case '.':
   VAR_12 = 1;
   VAR_11 = VAR_7;
   break;
  case '-':
   VAR_12 = 1;
   VAR_11 = VAR_7 * VAR_1;
   break;
  case ' ':
   VAR_12 = 0;
   VAR_11 = VAR_6 * VAR_5;
   break;
  default:
   VAR_12 = 0;
   VAR_11 = 0;
  }
  if (VAR_12) {
   FUNC_0(VAR_8, VAR_2, &VAR_13);
   VAR_13 |= VAR_4;
   FUNC_0(VAR_8, VAR_3, &VAR_13);
  }
  VAR_11 *= 10000;
  if (VAR_11)
   FUNC_1(VAR_11);
  FUNC_0(VAR_8, VAR_2, &VAR_13);
  VAR_13 &= ~VAR_4;
  FUNC_0(VAR_8, VAR_3, &VAR_13);
  VAR_11 = VAR_7 * 10000;
  FUNC_1(VAR_11);
 }
 VAR_11 = VAR_6 * VAR_0 * 10000;
 FUNC_1(VAR_11);
}
