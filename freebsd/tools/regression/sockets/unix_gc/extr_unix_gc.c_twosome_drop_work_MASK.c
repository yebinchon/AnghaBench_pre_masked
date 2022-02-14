
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int,int) ;
 char const* VAR_0 ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7[2];

 FUNC_2("%s\n", VAR_1);
 VAR_0 = VAR_1;
 FUNC_3(&VAR_5, &VAR_6);
 FUNC_1(VAR_7);
 FUNC_4(VAR_7[VAR_2], VAR_7[VAR_3]);
 if (VAR_4 == 0)
  FUNC_0(VAR_7[0], VAR_7[1]);
 else
  FUNC_0(VAR_7[1], VAR_7[0]);
 FUNC_5(VAR_5, VAR_6);
}
