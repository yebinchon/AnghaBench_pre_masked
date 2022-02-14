
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int StringList ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char**,size_t*,int *) ;
 size_t FUNC_5 (int *,char*) ;
 char* FUNC_6 (char const*,size_t,char**,char*) ;
 scalar_t__ FUNC_7 (unsigned char) ;
 int FUNC_8 (int *,char*) ;
 int * FUNC_9 (int *,char*) ;
 int * FUNC_10 () ;
 char* FUNC_11 (char*,char) ;
 char* FUNC_12 (char*) ;
 char* FUNC_13 (char**,char*) ;
 unsigned long FUNC_14 (char*,char**,int ) ;
 int FUNC_15 (char*,char const*,size_t,...) ;

__attribute__((used)) static StringList ***
FUNC_16(const char *VAR_5, StringList *VAR_6)
{
 ssize_t VAR_7;
 size_t VAR_8, VAR_9, VAR_10;
 FILE *VAR_11;
 StringList ***VAR_12, *VAR_13;
 char *VAR_14, *VAR_15;

 if ((VAR_11 = FUNC_3(VAR_5, "r")) == ((void*)0))
  FUNC_1(1, "Cannot open `%s'", VAR_5);

 VAR_9 = VAR_8 = 0;
 if ((VAR_12 = FUNC_0(VAR_1 + 1, sizeof(StringList **))) == ((void*)0))
  FUNC_1(1, "Cannot allocate %zu bytes", (size_t)(VAR_1 + 1));

 VAR_14 = ((void*)0);
 while ((VAR_7 = FUNC_4(&VAR_14, &VAR_8, VAR_11)) != -1) {
  char *VAR_16, *VAR_17, *VAR_18, *VAR_19, *VAR_20, *VAR_21;
  unsigned long VAR_22;

  VAR_9++;

  if (VAR_7 == 0)
   continue;

  if (VAR_14[VAR_7 - 1] == '\n')
   VAR_14[VAR_7 - 1] = '\0';

  for (VAR_20 = VAR_14; *VAR_20 && FUNC_7((unsigned char)*VAR_20); VAR_20++)
   continue;

  if (*VAR_20 == '\0' || *VAR_20 == '#')
   continue;

  if ((VAR_16 = FUNC_6(VAR_5, VAR_9, &VAR_20, "name")) == ((void*)0))
   continue;

  if ((VAR_17 = FUNC_6(VAR_5, VAR_9, &VAR_20, "port")) == ((void*)0))
   continue;

  if (VAR_20) {
   for (VAR_19 = VAR_20; *VAR_20 && *VAR_20 != '#'; VAR_20++)
    continue;

   if (*VAR_20)
    *VAR_20 = '\0';
  } else
   VAR_19 = ((void*)0);

  VAR_18 = FUNC_11(VAR_17, '/');
  if (VAR_18 == ((void*)0) || VAR_18[1] == '\0') {
   FUNC_15("%s, %zu: no protocol found", VAR_5, VAR_9);
   continue;
  }
  *VAR_18++ = '\0';

  VAR_4 = 0;
  VAR_22 = FUNC_14(VAR_17, &VAR_15, 0);
  if (*VAR_17 == '\0' || *VAR_15 != '\0') {
   FUNC_15("%s, %zu: invalid port `%s'", VAR_5, VAR_9, VAR_17);
   continue;
  }
  if ((VAR_4 == VAR_0 && VAR_22 == VAR_3) || VAR_22 > VAR_1) {
   FUNC_15("%s, %zu: port too big `%s'", VAR_5, VAR_9, VAR_17);
   continue;
  }

  if (VAR_12[VAR_22] == ((void*)0)) {
   VAR_12[VAR_22] = FUNC_0(VAR_2, sizeof(StringList *));
   if (VAR_12[VAR_22] == ((void*)0))
    FUNC_1(1, "Cannot allocate %zu bytes",
        (size_t)VAR_2);
  }

  VAR_10 = FUNC_5(VAR_6, VAR_18);
  if (VAR_12[VAR_22][VAR_10] == ((void*)0))
   VAR_13 = VAR_12[VAR_22][VAR_10] = FUNC_10();
  else
   VAR_13 = VAR_12[VAR_22][VAR_10];


  if (FUNC_9(VAR_13, VAR_16) == ((void*)0)) {
   char *VAR_23;

   if ((VAR_23 = FUNC_12(VAR_16)) == ((void*)0))
    FUNC_1(1, "Cannot copy string");
   (void)FUNC_8(VAR_13, VAR_23);
  }

  if (VAR_19) {
   while ((VAR_21 = FUNC_13(&VAR_19, " \t")) != ((void*)0)) {
    if (VAR_21[0] == '\0')
     continue;
    if (FUNC_9(VAR_13, VAR_21) == ((void*)0)) {
     char *VAR_24;

     if ((VAR_24 = FUNC_12(VAR_21)) == ((void*)0))
      FUNC_1(1, "Cannot copy string");
     (void)FUNC_8(VAR_13, VAR_24);
    }
   }
  }
 }
 (void)FUNC_2(VAR_11);
 return VAR_12;
}
