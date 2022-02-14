
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2)
{
 int VAR_3;
 VAR_2 = FUNC_2(VAR_2);
 VAR_3 = FUNC_3(VAR_2, VAR_0 | VAR_1, 0644);
 if (VAR_3 < 0)
  FUNC_1(FUNC_0("failed to create file %s"), VAR_2);
 return VAR_3;
}
