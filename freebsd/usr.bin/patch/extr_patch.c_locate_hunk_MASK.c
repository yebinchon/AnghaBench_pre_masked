
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LINENUM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static LINENUM
FUNC_5(LINENUM VAR_9)
{
 LINENUM VAR_10 = FUNC_2() + VAR_7;
 LINENUM VAR_11;
 LINENUM VAR_12 = FUNC_3();
 LINENUM VAR_13 = VAR_5 - VAR_10 - VAR_12 + 1;
 LINENUM VAR_14 = VAR_10 - VAR_6 - 1 + FUNC_1();

 if (VAR_12 == 0) {
  if (VAR_8 && VAR_9 == 0 && (VAR_4 == VAR_0
      || VAR_4 == VAR_1
      || VAR_4 == VAR_2)) {
   FUNC_4("Empty context always matches.\n");
  }
  return (VAR_10);
 }
 if (VAR_14 >= VAR_10)
  VAR_14 = VAR_10 - 1;
 if (VAR_10 <= VAR_5 && FUNC_0(VAR_10, 0, VAR_9))
  return VAR_10;
 for (VAR_11 = 1; ; VAR_11++) {
  bool VAR_15 = (VAR_11 <= VAR_13);
  bool VAR_16 = (VAR_11 <= VAR_14);

  if (VAR_15 && FUNC_0(VAR_10, VAR_11, VAR_9)) {





   VAR_7 = VAR_11;
   return VAR_10 + VAR_11;
  } else if (VAR_16 && FUNC_0(VAR_10, -VAR_11, VAR_9)) {





   VAR_7 = -VAR_11;
   return VAR_10 - VAR_11;
  } else if (!VAR_16 && !VAR_15)
   return 0;
 }
}
