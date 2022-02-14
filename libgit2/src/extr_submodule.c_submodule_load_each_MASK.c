
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int mods; int repo; int * map; } ;
typedef TYPE_1__ lfc_data ;
struct TYPE_14__ {int name; } ;
typedef TYPE_2__ git_submodule ;
typedef int git_strmap ;
struct TYPE_15__ {char* name; } ;
typedef TYPE_3__ git_config_entry ;
struct TYPE_16__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 TYPE_4__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,char const*,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (TYPE_2__**,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_11(const git_config_entry *VAR_1, void *VAR_2)
{
 lfc_data *VAR_3 = VAR_2;
 const char *VAR_4, *VAR_5;
 git_strmap *VAR_6 = VAR_3->map;
 git_buf VAR_7 = VAR_0;
 git_submodule *VAR_8;
 int VAR_9, VAR_10;

 if (FUNC_0(VAR_1->name, "submodule.") != 0)
  return 0;

 VAR_4 = VAR_1->name + FUNC_7("submodule.");
 VAR_5 = FUNC_8(VAR_4, '.');

 if (!VAR_5 || (VAR_5 == VAR_4))
  return 0;

 VAR_5++;

 if ((VAR_9 = FUNC_2(&VAR_7, VAR_4, VAR_5 - VAR_4 -1)) < 0)
  return VAR_9;

 VAR_10 = FUNC_6(VAR_3->repo, VAR_7.ptr, 0);
 if (VAR_10 <= 0) {
  VAR_9 = VAR_10;
  goto done;
 }







 if (FUNC_3(VAR_6, VAR_7.ptr)) {
  VAR_9 = 0;
  goto done;
 }

 if ((VAR_9 = FUNC_9(&VAR_8, VAR_3->repo, VAR_7.ptr)) < 0)
  goto done;

 if ((VAR_9 = FUNC_10(VAR_8, VAR_3->mods)) < 0) {
  FUNC_5(VAR_8);
  goto done;
 }

 if ((VAR_9 = FUNC_4(VAR_6, VAR_8->name, VAR_8)) < 0)
  goto done;

 VAR_9 = 0;

done:
 FUNC_1(&VAR_7);
 return VAR_9;
}
