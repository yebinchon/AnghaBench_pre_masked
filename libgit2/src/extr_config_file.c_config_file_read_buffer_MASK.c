
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_11__ {char* content; } ;
struct TYPE_8__ {TYPE_4__ ctx; int path; } ;
typedef TYPE_1__ git_config_parser ;
typedef int git_config_level_t ;
typedef int git_config_entries ;
struct TYPE_9__ {int depth; int level; int * entries; TYPE_3__* file; int const* repo; } ;
typedef TYPE_2__ config_file_parse_data ;
struct TYPE_10__ {int path; } ;
typedef TYPE_3__ config_file ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int *,int *,TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_4__*,char const*,size_t) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(
 git_config_entries *VAR_3,
 const git_repository *VAR_4,
 config_file *VAR_5,
 git_config_level_t VAR_6,
 int VAR_7,
 const char *VAR_8,
 size_t VAR_9)
{
 config_file_parse_data VAR_10;
 git_config_parser VAR_11;
 int VAR_12;

 if (VAR_7 >= VAR_1) {
  FUNC_1(VAR_0, "maximum config include depth reached");
  return -1;
 }


 VAR_11.path = VAR_5->path;
 FUNC_2(&VAR_11.ctx, VAR_8, VAR_9);


 if (!VAR_11.ctx.content || *VAR_11.ctx.content == '\0') {
  VAR_12 = 0;
  goto out;
 }

 VAR_10.repo = VAR_4;
 VAR_10.file = VAR_5;
 VAR_10.entries = VAR_3;
 VAR_10.level = VAR_6;
 VAR_10.depth = VAR_7;

 VAR_12 = FUNC_0(&VAR_11, ((void*)0), VAR_2, ((void*)0), ((void*)0), &VAR_10);

out:
 return VAR_12;
}
