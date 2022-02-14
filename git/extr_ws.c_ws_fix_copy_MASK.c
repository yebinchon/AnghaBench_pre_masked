
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (struct strbuf*,char const*,int) ;
 int FUNC_2 (struct strbuf*,char const) ;
 int FUNC_3 (unsigned int) ;

void FUNC_4(struct strbuf *VAR_5, const char *VAR_6, int VAR_7, unsigned VAR_8, int *VAR_9)
{





 int VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = -1;
 int VAR_15 = -1;
 int VAR_16 = 0;




 if (VAR_8 & VAR_0) {
  if (0 < VAR_7 && VAR_6[VAR_7 - 1] == '\n') {
   VAR_11 = 1;
   VAR_7--;
   if (0 < VAR_7 && VAR_6[VAR_7 - 1] == '\r') {
    VAR_12 = !!(VAR_8 & VAR_1);
    VAR_7--;
   }
  }
  if (0 < VAR_7 && FUNC_0(VAR_6[VAR_7 - 1])) {
   while (0 < VAR_7 && FUNC_0(VAR_6[VAR_7-1]))
    VAR_7--;
   VAR_13 = 1;
  }
 }




 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  char VAR_17 = VAR_6[VAR_10];
  if (VAR_17 == '\t') {
   VAR_14 = VAR_10;
   if ((VAR_8 & VAR_3) &&
       0 <= VAR_15)
       VAR_16 = 1;
  } else if (VAR_17 == ' ') {
   VAR_15 = VAR_10;
   if ((VAR_8 & VAR_2) &&
       FUNC_3(VAR_8) <= VAR_10 - VAR_14)
    VAR_16 = 1;
  } else
   break;
 }

 if (VAR_16) {

  int VAR_18 = 0;
  int VAR_19 = VAR_14 + 1;

  if (VAR_8 & VAR_2) {

   if (VAR_14 < VAR_15)
    VAR_19 = VAR_15 + 1;
   else
    VAR_19 = VAR_14 + 1;
  }





  for (VAR_10 = 0; VAR_10 < VAR_19; VAR_10++) {
   char VAR_20 = VAR_6[VAR_10];
   if (VAR_20 != ' ') {
    VAR_18 = 0;
    FUNC_2(VAR_5, VAR_20);
   } else {
    VAR_18++;
    if (VAR_18 == FUNC_3(VAR_8)) {
     FUNC_2(VAR_5, '\t');
     VAR_18 = 0;
    }
   }
  }
  while (0 < VAR_18--)
   FUNC_2(VAR_5, ' ');
  VAR_7 -= VAR_19;
  VAR_6 += VAR_19;
  VAR_13 = 1;
 } else if ((VAR_8 & VAR_4) && VAR_14 >= 0) {

  int VAR_21 = VAR_5->len;
  int VAR_22 = VAR_14 + 1;
  for (VAR_10 = 0; VAR_10 < VAR_22; VAR_10++) {
   if (VAR_6[VAR_10] == '\t')
    do {
     FUNC_2(VAR_5, ' ');
    } while ((VAR_5->len - VAR_21) % FUNC_3(VAR_8));
   else
    FUNC_2(VAR_5, VAR_6[VAR_10]);
  }
  VAR_7 -= VAR_22;
  VAR_6 += VAR_22;
  VAR_13 = 1;
 }

 FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_12)
  FUNC_2(VAR_5, '\r');
 if (VAR_11)
  FUNC_2(VAR_5, '\n');
 if (VAR_13 && VAR_9)
  (*VAR_9)++;
}
