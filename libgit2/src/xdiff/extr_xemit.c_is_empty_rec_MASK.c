
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdfile_t ;


 scalar_t__ FUNC_0 (char const) ;
 long FUNC_1 (int *,long,char const**) ;

__attribute__((used)) static int FUNC_2(xdfile_t *VAR_0, long VAR_1)
{
 const char *VAR_2;
 long VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_2);

 while (VAR_3 > 0 && FUNC_0(*VAR_2)) {
  VAR_2++;
  VAR_3--;
 }
 return !VAR_3;
}
