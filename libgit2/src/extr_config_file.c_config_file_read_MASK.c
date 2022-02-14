
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int git_repository ;
typedef int git_config_level_t ;
typedef int git_config_entries ;
struct TYPE_8__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_9__ {int checksum; int stamp; int path; } ;
typedef TYPE_2__ config_file ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int const*,TYPE_2__*,int ,int,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,struct stat*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 scalar_t__ FUNC_6 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_7(
 git_config_entries *VAR_2,
 const git_repository *VAR_3,
 config_file *VAR_4,
 git_config_level_t VAR_5,
 int VAR_6)
{
 git_buf VAR_7 = VAR_0;
 struct stat VAR_8;
 int VAR_9;

 if (FUNC_6(VAR_4->path, &VAR_8) < 0) {
  VAR_9 = FUNC_5(VAR_1, VAR_4->path, "stat");
  goto out;
 }

 if ((VAR_9 = FUNC_3(&VAR_7, VAR_4->path)) < 0)
  goto out;

 FUNC_2(&VAR_4->stamp, &VAR_8);
 if ((VAR_9 = FUNC_4(&VAR_4->checksum, VAR_7.ptr, VAR_7.size)) < 0)
  goto out;

 if ((VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7.ptr, VAR_7.size)) < 0)
  goto out;

out:
 FUNC_1(&VAR_7);
 return VAR_9;
}
