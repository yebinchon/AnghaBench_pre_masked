
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int new_name; int old_name; } ;
typedef TYPE_1__ rename_cb_data ;
typedef int normalized ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_refname_t ;
struct TYPE_11__ {int name; TYPE_8__* db; } ;
typedef TYPE_2__ git_reference ;
struct TYPE_12__ {int repo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**,TYPE_8__*,int ,int ,int,int const*,char const*) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int ,int *,char const*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(git_reference **VAR_1, git_reference *VAR_2, const char *VAR_3, int VAR_4,
     const git_signature *VAR_5, const char *VAR_6)
{
 git_repository *VAR_7;
 git_refname_t VAR_8;
 bool VAR_9 = 0;
 int VAR_10 = 0;

 FUNC_0(VAR_2 && VAR_3 && VAR_5);

 VAR_7 = FUNC_3(VAR_2);

 if ((VAR_10 = FUNC_7(
  VAR_8, VAR_7, VAR_3, 1)) < 0)
  return VAR_10;


 if ((VAR_10 = FUNC_1(VAR_2)) < 0)
  return VAR_10;

 VAR_9 = (VAR_10 > 0);

 if ((VAR_10 = FUNC_2(VAR_1, VAR_2->db, VAR_2->name, VAR_8, VAR_4, VAR_5, VAR_6)) < 0)
  return VAR_10;


 if (VAR_9) {
  VAR_10 = FUNC_5(VAR_2->db->repo, VAR_8);
 } else {
  rename_cb_data VAR_11;
  VAR_11.old_name = VAR_2->name;
  FUNC_6(&VAR_11.new_name, &VAR_8, sizeof(VAR_8));

  VAR_10 = FUNC_4(VAR_7, VAR_0, 0, &VAR_11);
 }

 return VAR_10;
}
