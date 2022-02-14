
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {char** filters; int printer; scalar_t__ remote; scalar_t__* lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct printer const*,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char*,int ,int ,char*) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct printer const*) ;
 int FUNC_9 (struct printer const*) ;
 int FUNC_10 (struct printer const*) ;
 int VAR_10 ;
 int FUNC_11 (int*) ;
 int * FUNC_12 (scalar_t__*,char) ;
 int FUNC_13 (int ,int ) ;
 char* FUNC_14 (char*,char) ;
 int FUNC_15 (int ,char*,int ,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_16(const struct printer *VAR_14)
{
 int VAR_15[2];
 char *VAR_16;

 if (VAR_14->remote) {
  FUNC_9(VAR_14);
  VAR_9 = -1;
  VAR_8 = 0;
  return;
 } else if (*VAR_14->lp) {
  if (FUNC_12(VAR_14->lp, '@') != ((void*)0))
   FUNC_8(VAR_14);
  else
   FUNC_10(VAR_14);
 } else {
  FUNC_15(VAR_1, "%s: no line printer device or host name",
      VAR_14->printer);
  FUNC_6(1);
 }




 if (VAR_14->filters[VAR_3] && !VAR_14->filters[VAR_2] && !VAR_8) {
  FUNC_11(VAR_15);
  if (VAR_14->remote) {
   FUNC_13(VAR_12, VAR_6);
   VAR_11 = FUNC_7(VAR_12);
  }
  if ((VAR_8 = FUNC_3(VAR_14, VAR_0)) == 0) {
   FUNC_4(VAR_15[0], VAR_4);

   FUNC_4(VAR_14->remote ? VAR_11 : VAR_10, VAR_5);
   FUNC_2();
   FUNC_1(3);
   if ((VAR_16 = FUNC_14(VAR_14->filters[VAR_3], '/')) == ((void*)0))
    VAR_16 = VAR_14->filters[VAR_3];
   else
    VAR_16++;
   FUNC_5(VAR_14->filters[VAR_3], VAR_16, VAR_13, VAR_7,
         (char *)0);
   FUNC_15(VAR_1, "%s: execl(%s): %m", VAR_14->printer,
       VAR_14->filters[VAR_3]);
   FUNC_6(1);
  }
  (void) FUNC_0(VAR_15[0]);
  VAR_9 = VAR_15[1];
 } else {
  VAR_9 = VAR_10;
  VAR_8 = 0;
 }
}
