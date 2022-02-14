
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (char,int *) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*,int,int,int *) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static unsigned FUNC_5(const char *VAR_5, int VAR_6, unsigned VAR_7,
    FILE *VAR_8, const char *VAR_9,
    const char *VAR_10, const char *VAR_11)
{
 unsigned VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = -1;
 int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17;


 if (VAR_6 > 0 && VAR_5[VAR_6 - 1] == '\n') {
  VAR_15 = 1;
  VAR_6--;
 }
 if ((VAR_7 & VAR_1) &&
     VAR_6 > 0 && VAR_5[VAR_6 - 1] == '\r') {
  VAR_16 = 1;
  VAR_6--;
 }


 if (VAR_7 & VAR_0) {
  for (VAR_17 = VAR_6 - 1; VAR_17 >= 0; VAR_17--) {
   if (FUNC_3(VAR_5[VAR_17])) {
    VAR_14 = VAR_17;
    VAR_12 |= VAR_0;
   }
   else
    break;
  }
 }

 if (VAR_14 == -1)
  VAR_14 = VAR_6;


 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++) {
  if (VAR_5[VAR_17] == ' ')
   continue;
  if (VAR_5[VAR_17] != '\t')
   break;
  if ((VAR_7 & VAR_3) && VAR_13 < VAR_17) {
   VAR_12 |= VAR_3;
   if (VAR_8) {
    FUNC_1(VAR_11, VAR_8);
    FUNC_2(VAR_5 + VAR_13, VAR_17 - VAR_13, 1, VAR_8);
    FUNC_1(VAR_10, VAR_8);
    FUNC_2(VAR_5 + VAR_17, 1, 1, VAR_8);
   }
  } else if (VAR_7 & VAR_4) {
   VAR_12 |= VAR_4;
   if (VAR_8) {
    FUNC_2(VAR_5 + VAR_13, VAR_17 - VAR_13, 1, VAR_8);
    FUNC_1(VAR_11, VAR_8);
    FUNC_2(VAR_5 + VAR_17, 1, 1, VAR_8);
    FUNC_1(VAR_10, VAR_8);
   }
  } else if (VAR_8) {
   FUNC_2(VAR_5 + VAR_13, VAR_17 - VAR_13 + 1, 1, VAR_8);
  }
  VAR_13 = VAR_17 + 1;
 }


 if ((VAR_7 & VAR_2) && VAR_17 - VAR_13 >= FUNC_4(VAR_7)) {
  VAR_12 |= VAR_2;
  if (VAR_8) {
   FUNC_1(VAR_11, VAR_8);
   FUNC_2(VAR_5 + VAR_13, VAR_17 - VAR_13, 1, VAR_8);
   FUNC_1(VAR_10, VAR_8);
  }
  VAR_13 = VAR_17;
 }

 if (VAR_8) {






  if (VAR_14 - VAR_13 > 0) {
   FUNC_1(VAR_9, VAR_8);
   FUNC_2(VAR_5 + VAR_13,
       VAR_14 - VAR_13, 1, VAR_8);
   FUNC_1(VAR_10, VAR_8);
  }


  if (VAR_14 != VAR_6) {
   FUNC_1(VAR_11, VAR_8);
   FUNC_2(VAR_5 + VAR_14,
       VAR_6 - VAR_14, 1, VAR_8);
   FUNC_1(VAR_10, VAR_8);
  }
  if (VAR_16)
   FUNC_0('\r', VAR_8);
  if (VAR_15)
   FUNC_0('\n', VAR_8);
 }
 return VAR_12;
}
