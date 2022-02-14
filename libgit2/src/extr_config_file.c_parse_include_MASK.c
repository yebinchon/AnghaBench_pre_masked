
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_buf ;
struct TYPE_10__ {scalar_t__ depth; int level; int repo; int entries; TYPE_1__* file; } ;
typedef TYPE_2__ config_file_parse_data ;
struct TYPE_11__ {void* path; int includes; } ;
typedef TYPE_3__ config_file ;
struct TYPE_9__ {int includes; int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,TYPE_3__*,int ,scalar_t__) ;
 int FUNC_2 (char*) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char*,char const*) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_10(config_file_parse_data *VAR_2, const char *VAR_3)
{
 config_file *VAR_4;
 git_buf VAR_5 = VAR_0;
 char *VAR_6;
 int VAR_7;

 if (!VAR_3)
  return 0;

 if ((VAR_7 = FUNC_7(&VAR_5, VAR_2->file->path)) < 0)
  return VAR_7;

 VAR_6 = FUNC_5(&VAR_5);
 VAR_7 = FUNC_8(&VAR_5, VAR_6, VAR_3);
 FUNC_2(VAR_6);

 if (VAR_7 < 0)
  return VAR_7;

 VAR_4 = FUNC_3(VAR_2->file->includes);
 FUNC_0(VAR_4);
 FUNC_9(VAR_4, 0, sizeof(*VAR_4));
 FUNC_4(VAR_4->includes);
 VAR_4->path = FUNC_5(&VAR_5);

 VAR_7 = FUNC_1(VAR_2->entries, VAR_2->repo, VAR_4,
      VAR_2->level, VAR_2->depth+1);

 if (VAR_7 == VAR_1) {
  FUNC_6();
  VAR_7 = 0;
 }

 return VAR_7;
}
