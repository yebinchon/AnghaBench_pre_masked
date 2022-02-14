
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ustar_header {char* typeflag; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (long) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,char*,char const**) ;
 long FUNC_4 (char*,char**,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,char const*,long) ;

int FUNC_7(int VAR_6, const char **VAR_7, const char *VAR_8)
{
 char VAR_9[VAR_2];
 struct ustar_header *VAR_10 = (struct ustar_header *)VAR_9;
 char *VAR_11 = VAR_9 + VAR_3;
 const char *VAR_12;
 ssize_t VAR_13;
 long VAR_14;
 char *VAR_15;

 if (VAR_6 != 1)
  FUNC_5(VAR_4);

 VAR_13 = FUNC_2(0, VAR_9, VAR_2);
 if (VAR_13 < 0)
  FUNC_0("git get-tar-commit-id: read error");
 if (VAR_13 != VAR_2)
  FUNC_0("git get-tar-commit-id: EOF before reading tar header");
 if (VAR_10->typeflag[0] != 'g')
  return 1;

 VAR_14 = FUNC_4(VAR_11, &VAR_15, 10);
 if (VAR_5 == VAR_0 || VAR_15 == VAR_11 || VAR_14 < 0)
  return 1;
 if (!FUNC_3(VAR_15, " comment=", &VAR_12))
  return 1;
 VAR_14 -= VAR_12 - VAR_11;
 if (VAR_14 < 1 || !(VAR_14 % 2) ||
     FUNC_1((VAR_14 - 1) / 2) == VAR_1)
  return 1;

 if (FUNC_6(1, VAR_12, VAR_14) < 0)
  FUNC_0("git get-tar-commit-id: write error");

 return 0;
}
