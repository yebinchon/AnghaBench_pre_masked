
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
 double* VAR_6 ;
 char** VAR_7 ;
 char** VAR_8 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (char**) ;
 double VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int) ;
 double VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 double VAR_18 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static void
FUNC_6(void)
{
 char **VAR_19;
 int VAR_20;
 int VAR_21;
 char **VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 if (!VAR_14)
  FUNC_1(0);
 VAR_10 += VAR_13 * VAR_18 / 100.0;
 VAR_23 = VAR_13 + VAR_10;
 if (VAR_9 & VAR_0) {
  VAR_16 = VAR_11;
  VAR_15 = VAR_12;
 }
 else if (VAR_16 == 0 && VAR_15 == 0) {
  VAR_15 = VAR_17 / VAR_23;
  if (VAR_15 == 0) {
   FUNC_5("display width %d is less than column width %d",
     VAR_17, VAR_23);
   VAR_15 = 1;
  }
  if (VAR_15 > VAR_14)
   VAR_15 = VAR_14;
  VAR_16 = VAR_14 / VAR_15 + (VAR_14 % VAR_15 ? 1 : 0);
 }
 else if (VAR_16 == 0)
  VAR_16 = VAR_14 / VAR_15 + (VAR_14 % VAR_15 ? 1 : 0);
 else if (VAR_15 == 0)
  VAR_15 = VAR_14 / VAR_16 + (VAR_14 % VAR_16 ? 1 : 0);
 VAR_22 = VAR_7 + VAR_16 * VAR_15;
 while (VAR_22 > VAR_8) {
  FUNC_2(VAR_7 + VAR_14);
  VAR_22 = VAR_7 + VAR_16 * VAR_15;
 }
 if (VAR_9 & VAR_2) {
  for (VAR_19 = VAR_7 + VAR_14; VAR_19 < VAR_22; VAR_19++)
   *VAR_19 = *(VAR_19 - VAR_14);
  VAR_14 = VAR_22 - VAR_7;
 }
 if (!(VAR_6 = (short *) FUNC_3(VAR_15 * sizeof(short))))
  FUNC_0(1, "malloc");
 if (VAR_9 & VAR_4) {
  VAR_19 = VAR_7;
  if (VAR_9 & VAR_5)
   for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
    VAR_24 = 0;
    for (VAR_21 = 0; *VAR_19 != ((void*)0) && VAR_21 < VAR_16; VAR_21++)
     if ((VAR_25 = FUNC_4(*VAR_19++)) > VAR_24)
      VAR_24 = VAR_25;
    VAR_6[VAR_20] = VAR_24 + VAR_10;
   }
  else
   for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
    VAR_24 = 0;
    for (VAR_21 = VAR_20; VAR_21 < VAR_14; VAR_21 += VAR_15)
     if ((VAR_25 = FUNC_4(VAR_19[VAR_21])) > VAR_24)
      VAR_24 = VAR_25;
    VAR_6[VAR_20] = VAR_24 + VAR_10;
   }
 }
 else
  for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++)
   VAR_6[VAR_20] = VAR_23;
 if (!(VAR_9 & VAR_1)) {
  if (VAR_9 & VAR_3)
   VAR_6[0] -= VAR_10;
  else
   VAR_6[VAR_15 - 1] = 0;
 }
 VAR_25 = VAR_16 * VAR_15;
 if (VAR_25 > VAR_14 && (VAR_9 & VAR_2))
  VAR_14 = VAR_25;


}
