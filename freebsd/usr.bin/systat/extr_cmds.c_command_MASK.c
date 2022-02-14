
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdtab {int c_flags; int (* c_cmd ) (char*,char*) ;scalar_t__ (* c_init ) () ;int * (* c_open ) () ;int (* c_close ) (int *) ;scalar_t__ c_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 struct cmdtab* VAR_4 ;
 struct cmdtab* VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 struct cmdtab* FUNC_11 (char*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int ,char*) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (char*,char*) ;
 char* FUNC_16 (char const*) ;
 int FUNC_17 (scalar_t__) ;
 double FUNC_18 (char*,int *) ;
 int FUNC_19 (int *) ;
 int * FUNC_20 () ;
 int * FUNC_21 () ;
 scalar_t__ FUNC_22 () ;
 int FUNC_23 (char*,char*) ;
 int * VAR_7 ;

void
FUNC_24(const char *VAR_8)
{
 struct cmdtab *VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;
 double VAR_13;

 VAR_11 = VAR_12 = FUNC_16(VAR_8);
 for (VAR_10 = VAR_12; *VAR_10 && !FUNC_8(*VAR_10); VAR_10++)
  ;
 if (*VAR_10)
  *VAR_10++ = '\0';
 if (*VAR_12 == '\0')
  goto done;
 for (; *VAR_10 && FUNC_8(*VAR_10); VAR_10++)
  ;
 if (FUNC_15(VAR_12, "quit") == 0 || FUNC_15(VAR_12, "q") == 0)
  FUNC_3(0);
 if (FUNC_15(VAR_12, "load") == 0) {
  FUNC_10();
  goto done;
 }
 if (FUNC_15(VAR_12, "stop") == 0) {
  VAR_6 = 0;
  FUNC_13(VAR_1, 0, "Refresh disabled.");
  FUNC_2();
  goto done;
 }
 if (FUNC_15(VAR_12, "help") == 0) {
  int VAR_14, VAR_15;

  FUNC_12(VAR_1, VAR_14 = 0);
  for (VAR_9 = VAR_4; VAR_9->c_name; VAR_9++) {
   VAR_15 = FUNC_17(VAR_9->c_name);
   if (VAR_14 + VAR_15 > VAR_2)
    break;
   FUNC_1(VAR_9->c_name); VAR_14 += VAR_15;
   if (VAR_14 + 1 < VAR_2)
    FUNC_0(' ');
  }
  FUNC_2();
  goto done;
 }
 VAR_13 = FUNC_18(VAR_12, ((void*)0)) * 1000000.0;
 if (VAR_13 > 0 && VAR_13 < (double)VAR_3)
  VAR_6 = (unsigned int)VAR_13;
 if ((VAR_13 <= 0 || VAR_13 > (double)VAR_3) &&
     (FUNC_15(VAR_12, "start") == 0 ||
     FUNC_15(VAR_12, "interval") == 0)) {
  if (*VAR_10 != '\0') {
   VAR_13 = FUNC_18(VAR_10, ((void*)0)) * 1000000.0;
   if (VAR_13 <= 0 || VAR_13 >= (double)VAR_3) {
    FUNC_5("%d: bad interval.", (int)VAR_13);
    goto done;
   }
  }
 }
 if (VAR_13 > 0) {
  VAR_6 = (unsigned int)VAR_13;
  FUNC_4();
  FUNC_14();
  goto done;
 }
 VAR_9 = FUNC_11(VAR_12);
 if (VAR_9 == (struct cmdtab *)-1) {
  FUNC_5("%s: Ambiguous command.", VAR_12);
  goto done;
 }
 if (VAR_9) {
  if (VAR_5 == VAR_9)
   goto done;
  (*VAR_5->c_close)(VAR_7);
  VAR_5->c_flags &= ~VAR_0;
  VAR_7 = (*VAR_9->c_open)();
  if (VAR_7 == ((void*)0)) {
   FUNC_5("Couldn't open new display");
   VAR_7 = (*VAR_5->c_open)();
   if (VAR_7 == ((void*)0)) {
    FUNC_5("Couldn't change back to previous cmd");
    FUNC_6(1);
   }
   VAR_9 = VAR_5;
  }
  if ((VAR_9->c_flags & VAR_0) == 0) {
   if ((*VAR_9->c_init)())
    VAR_9->c_flags |= VAR_0;
   else
    goto done;
  }
  VAR_5 = VAR_9;
  FUNC_9();
  FUNC_4();
  FUNC_14();
  goto done;
 }
 if (VAR_5->c_cmd == ((void*)0) || !(*VAR_5->c_cmd)(VAR_12, VAR_10))
  FUNC_5("%s: Unknown command.", VAR_12);
done:
 FUNC_7(VAR_11);
}
