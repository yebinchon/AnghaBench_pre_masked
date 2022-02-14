
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* path; } ;
typedef TYPE_1__ git_index_entry ;


 int FUNC_0 (TYPE_1__*,TYPE_1__ const*,int) ;

__attribute__((used)) static void FUNC_1(
 git_index_entry *VAR_0,
 const git_index_entry *VAR_1)
{
 const char *VAR_2 = VAR_0->path;
 FUNC_0(VAR_0, VAR_1, sizeof(*VAR_0));
 VAR_0->path = VAR_2;
}
