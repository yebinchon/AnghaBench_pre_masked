
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*,char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int,char**) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (char const*) ;
 int VAR_7 ;
 int FUNC_10 () ;
 scalar_t__ VAR_8 ;

int
FUNC_11(int VAR_9, char *VAR_10[])
{
 const char *VAR_11;
 int VAR_12;

 if (FUNC_6(VAR_0))
  VAR_5 = 1;

 if (FUNC_4("UNZIP_DEBUG") != ((void*)0))
  VAR_7 = 1;
 for (int VAR_13 = 0; VAR_13 < VAR_9; ++VAR_13)
  FUNC_1("%s%c", VAR_10[VAR_13], (VAR_13 < VAR_9 - 1) ? ' ' : '\n');







 VAR_12 = FUNC_5(VAR_9, VAR_10);





 if (VAR_8 && !VAR_1) {
  FUNC_7("Zipinfo mode needs additional options\n");
  FUNC_3(1);
 }

 if (VAR_9 <= VAR_12)
  FUNC_10();
 VAR_11 = VAR_10[VAR_12++];

 if (FUNC_8(VAR_11, "-") == 0)
  VAR_11 = ((void*)0);

 while (VAR_12 < VAR_9 && *VAR_10[VAR_12] != '-')
  FUNC_0(&VAR_2, VAR_10[VAR_12++]);

 VAR_12--;
 VAR_12 += FUNC_5(VAR_9 - VAR_12, VAR_10 + VAR_12);

 if (VAR_3 + VAR_4 + VAR_6 > 1)
  FUNC_2("-n, -o and -u are contradictory");

 FUNC_9(VAR_11);

 FUNC_3(0);
}
