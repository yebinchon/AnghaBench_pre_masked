
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_config_parser ;
typedef int git_config_level_t ;
typedef int git_config_backend ;
struct TYPE_6__ {int level; int entries; } ;
typedef TYPE_2__ config_memory_parse_data ;
struct TYPE_5__ {int size; int ptr; } ;
struct TYPE_7__ {int entries; TYPE_1__ cfg; } ;
typedef TYPE_3__ config_memory_backend ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int *,int ,int *,int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(git_config_backend *VAR_2, git_config_level_t VAR_3, const git_repository *VAR_4)
{
 config_memory_backend *VAR_5 = (config_memory_backend *) VAR_2;
 git_config_parser VAR_6 = VAR_0;
 config_memory_parse_data VAR_7;
 int VAR_8;

 FUNC_0(VAR_4);

 if ((VAR_8 = FUNC_3(&VAR_6, "in-memory", VAR_5->cfg.ptr,
         VAR_5->cfg.size)) < 0)
  goto out;
 VAR_7.entries = VAR_5->entries;
 VAR_7.level = VAR_3;

 if ((VAR_8 = FUNC_1(&VAR_6, ((void*)0), VAR_1, ((void*)0), ((void*)0), &VAR_7)) < 0)
  goto out;

out:
 FUNC_2(&VAR_6);
 return VAR_8;
}
