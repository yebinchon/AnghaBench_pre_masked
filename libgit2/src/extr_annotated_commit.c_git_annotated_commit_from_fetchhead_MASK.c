
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_oid ;
struct TYPE_4__ {void* remote_url; void* ref_name; } ;
typedef TYPE_1__ git_annotated_commit ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (TYPE_1__**,int *,int const*,char const*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (char const*) ;

int FUNC_4(
 git_annotated_commit **VAR_0,
 git_repository *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 const git_oid *VAR_4)
{
 FUNC_2(VAR_1 && VAR_4 && VAR_2 && VAR_3);

 if (FUNC_1(VAR_0, VAR_1, VAR_4, VAR_2) < 0)
  return -1;

 (*VAR_0)->ref_name = FUNC_3(VAR_2);
 FUNC_0((*VAR_0)->ref_name);

 (*VAR_0)->remote_url = FUNC_3(VAR_3);
 FUNC_0((*VAR_0)->remote_url);

 return 0;
}
