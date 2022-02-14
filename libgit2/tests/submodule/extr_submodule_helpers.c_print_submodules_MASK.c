
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ,char*,char const*,char*,unsigned int) ;
 int FUNC_2 (unsigned int*,int *) ;
 char* FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(git_submodule *VAR_1, const char *VAR_2, void *VAR_3)
{
 unsigned int VAR_4 = 0;
 FUNC_0(VAR_3);
 FUNC_2(&VAR_4, VAR_1);
 FUNC_1(VAR_0, "# submodule %s (at %s) flags %x\n",
  VAR_2, FUNC_3(VAR_1), VAR_4);
 return 0;
}
