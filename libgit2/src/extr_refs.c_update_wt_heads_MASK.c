
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int new_name; int old_name; } ;
typedef TYPE_2__ rename_cb_data ;
typedef int git_repository ;
struct TYPE_7__ {int symbolic; } ;
struct TYPE_9__ {TYPE_1__ target; } ;
typedef TYPE_3__ git_reference ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_3__**,int *,char const*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(git_repository *VAR_2, const char *VAR_3, void *VAR_4)
{
 rename_cb_data *VAR_5 = (rename_cb_data *) VAR_4;
 git_reference *VAR_6 = ((void*)0);
 char *VAR_7 = ((void*)0);
 int VAR_8;

 if ((VAR_8 = FUNC_4(&VAR_6, VAR_2, VAR_3)) < 0) {
  FUNC_2(VAR_0, "could not read HEAD when renaming references");
  goto out;
 }

 if ((VAR_7 = FUNC_3(VAR_3)) == ((void*)0)) {
  VAR_8 = -1;
  goto out;
 }

 if (FUNC_6(VAR_6) != VAR_1 ||
     FUNC_1(VAR_6->target.symbolic, VAR_5->old_name) != 0) {
  VAR_8 = 0;
  goto out;
 }


 if ((VAR_8 = FUNC_7(VAR_7, VAR_5->new_name)) < 0) {
  FUNC_2(VAR_0, "failed to update HEAD after renaming reference");
  goto out;
 }

out:
 FUNC_5(VAR_6);
 FUNC_0(VAR_7);

 return VAR_8;
}
