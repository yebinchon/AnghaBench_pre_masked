
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 double FUNC_2 (double) ;
 int FUNC_3 (char*,char*,char,...) ;
 scalar_t__ FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static char *
FUNC_6(double VAR_2, double VAR_3, double VAR_4, int VAR_5, char VAR_6)
{
 static char VAR_7[256];
 char VAR_8 = '\0';
 int VAR_9, VAR_10, VAR_11, VAR_12;

 if (VAR_5 == 0)
  return (VAR_1);


 if (VAR_2 > VAR_4)
  VAR_4 = VAR_2 - VAR_3 * FUNC_2((VAR_2 - VAR_4) / VAR_3);
 else
  VAR_4 = VAR_2 + VAR_3 * FUNC_2((VAR_4 - VAR_2) / VAR_3);

 FUNC_3(VAR_7, "%g", VAR_3);
 if (FUNC_4(VAR_7, 'e'))
  VAR_8 = 'e';
 VAR_9 = FUNC_1(VAR_7);

 VAR_10 = FUNC_3(VAR_7, "%g", VAR_2);
 if (FUNC_4(VAR_7, 'e'))
  VAR_8 = 'e';
 if ((VAR_12 = FUNC_1(VAR_7)))
  VAR_10 -= (VAR_12 + FUNC_5(VAR_0));

 VAR_9 = FUNC_0(VAR_12, VAR_9);

 VAR_11 = FUNC_3(VAR_7, "%g", VAR_4);
 if (FUNC_4(VAR_7, 'e'))
  VAR_8 = 'e';
 if ((VAR_12 = FUNC_1(VAR_7)))
  VAR_11 -= (VAR_12 + FUNC_5(VAR_0));

 if (VAR_9) {
  FUNC_3(VAR_7, "%%%c%d.%d%c", VAR_6,
      FUNC_0(VAR_10, VAR_11) + (int) FUNC_5(VAR_0) +
      VAR_9, VAR_9, (VAR_8) ? VAR_8 : 'f');
 } else {
  FUNC_3(VAR_7, "%%%c%d%c", VAR_6, FUNC_0(VAR_10, VAR_11),
      (VAR_8) ? VAR_8 : 'g');
 }

 return (VAR_7);
}
