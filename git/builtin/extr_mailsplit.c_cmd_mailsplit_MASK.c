
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char const*,char const*,int,int) ;
 int FUNC_6 (char const*,char const*,int,int,int) ;
 int FUNC_7 (char const*,struct stat*) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (char const*,int *,int) ;
 int FUNC_10 (int ) ;

int FUNC_11(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 4, VAR_8 = 0;
 int VAR_9 = 0;
 const char *VAR_10 = ((void*)0);
 const char **VAR_11;
 static const char *VAR_12[] = { "-", ((void*)0) };

 for (VAR_11 = VAR_4+1; *VAR_11; VAR_11++) {
  const char *VAR_13 = *VAR_11;

  if (VAR_13[0] != '-')
   break;

  if ( VAR_13[1] == 'd' ) {
   VAR_7 = FUNC_9(VAR_13+2, ((void*)0), 10);
   if (VAR_7 < 3 || 10 <= VAR_7)
    FUNC_10(VAR_0);
   continue;
  } else if ( VAR_13[1] == 'f' ) {
   VAR_6 = FUNC_9(VAR_13+2, ((void*)0), 10);
  } else if ( VAR_13[1] == 'h' ) {
   FUNC_10(VAR_0);
  } else if ( VAR_13[1] == 'b' && !VAR_13[2] ) {
   VAR_9 = 1;
  } else if (!FUNC_8(VAR_13, "--keep-cr")) {
   VAR_1 = 1;
  } else if ( VAR_13[1] == 'o' && VAR_13[2] ) {
   VAR_10 = VAR_13+2;
  } else if (!FUNC_8(VAR_13, "--mboxrd")) {
   VAR_2 = 1;
  } else if ( VAR_13[1] == '-' && !VAR_13[2] ) {
   VAR_11++;
   break;
  } else {
   FUNC_1("unknown option: %s", VAR_13);
  }
 }

 if ( !VAR_10 ) {


  switch (VAR_3 - (VAR_11-VAR_4)) {
  case 1:
   VAR_10 = VAR_11[0];
   VAR_11 = VAR_12;
   break;
  case 2:
   VAR_12[0] = VAR_11[0];
   VAR_10 = VAR_11[1];
   VAR_11 = VAR_12;
   break;
  default:
   FUNC_10(VAR_0);
  }
 } else {

  if ( !*VAR_11 )
   VAR_11 = VAR_12;
 }

 while (*VAR_11) {
  const char *VAR_14 = *VAR_11++;
  struct stat VAR_15;
  int VAR_16 = 0;

  if (VAR_14[0] == '-' && VAR_14[1] == 0) {
   VAR_16 = FUNC_6(VAR_14, VAR_10, VAR_9, VAR_7, VAR_6);
   if (VAR_16 < 0) {
    FUNC_2("cannot split patches from stdin");
    return 1;
   }
   VAR_8 += (VAR_16 - VAR_6);
   VAR_6 = VAR_16;
   continue;
  }

  if (FUNC_7(VAR_14, &VAR_15) == -1) {
   FUNC_3("cannot stat %s", VAR_14);
   return 1;
  }

  if (FUNC_0(VAR_15.st_mode))
   VAR_16 = FUNC_5(VAR_14, VAR_10, VAR_7, VAR_6);
  else
   VAR_16 = FUNC_6(VAR_14, VAR_10, VAR_9, VAR_7, VAR_6);

  if (VAR_16 < 0) {
   FUNC_2("cannot split patches from %s", VAR_14);
   return 1;
  }
  VAR_8 += (VAR_16 - VAR_6);
  VAR_6 = VAR_16;
 }

 FUNC_4("%d\n", VAR_8);

 return 0;
}
