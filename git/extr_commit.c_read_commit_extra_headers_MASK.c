
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_extra_header {int dummy; } ;
struct commit {int dummy; } ;


 char* FUNC_0 (struct commit*,unsigned long*) ;
 struct commit_extra_header* FUNC_1 (char const*,unsigned long,char const**) ;
 int FUNC_2 (struct commit*,char const*) ;

struct commit_extra_header *FUNC_3(struct commit *VAR_0,
            const char **VAR_1)
{
 struct commit_extra_header *VAR_2 = ((void*)0);
 unsigned long VAR_3;
 const char *VAR_4 = FUNC_0(VAR_0, &VAR_3);
 VAR_2 = FUNC_1(VAR_4, VAR_3, VAR_1);
 FUNC_2(VAR_0, VAR_4);
 return VAR_2;
}
