
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int printer; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (char*,int ,...) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,char*,size_t) ;
 int * FUNC_6 (char*,char) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int,char*,size_t) ;

__attribute__((used)) static int
FUNC_10(struct printer *VAR_7, char *VAR_8, size_t VAR_9)
{
 register char *VAR_10;
 char VAR_11[VAR_4];
 size_t VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_15 = FUNC_4(VAR_8, VAR_1|VAR_2|VAR_3, VAR_0);
 if (VAR_15 < 0) {
  FUNC_2("%s: readfile: error on open(%s): %s",
    VAR_7->printer, VAR_8, FUNC_7(VAR_6));

 }
 FUNC_0();
 VAR_14 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13 += VAR_4) {
  VAR_12 = VAR_4;
  VAR_10 = VAR_11;
  if (VAR_13 + VAR_12 > VAR_9)
   VAR_12 = VAR_9 - VAR_13;
  do {
   VAR_16 = FUNC_5(VAR_5, VAR_10, VAR_12);
   if (VAR_16 <= 0) {
    FUNC_2("%s: lost connection", VAR_7->printer);

   }
   VAR_12 -= VAR_16;
   VAR_10 += VAR_16;
  } while (VAR_12 > 0);
  VAR_12 = VAR_4;
  if (VAR_13 + VAR_12 > VAR_9)
   VAR_12 = VAR_9 - VAR_13;
  if (FUNC_9(VAR_15, VAR_11, VAR_12) != (ssize_t)VAR_12) {
   VAR_14++;
   break;
  }
 }
 (void) FUNC_1(VAR_15);
 if (VAR_14) {
  FUNC_2("%s: write error on close(%s)", VAR_7->printer, VAR_8);

 }
 if (FUNC_3()) {
  if (FUNC_6(VAR_8, '/') == ((void*)0))
   (void) FUNC_8(VAR_8);
  return (0);
 }
 FUNC_0();
 return (1);
}
