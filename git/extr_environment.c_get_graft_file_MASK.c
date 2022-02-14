
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {char* graft_file; } ;


 int FUNC_0 (char*) ;

char *FUNC_1(struct repository *VAR_0)
{
 if (!VAR_0->graft_file)
  FUNC_0("git environment hasn't been setup");
 return VAR_0->graft_file;
}
