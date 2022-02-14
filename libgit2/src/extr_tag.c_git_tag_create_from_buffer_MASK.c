
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tag ;
struct TYPE_13__ {scalar_t__ type; int message; int tag_name; int tagger; int target; } ;
typedef TYPE_2__ git_tag ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_odb_stream ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_14__ {TYPE_1__ cached; } ;
typedef TYPE_3__ git_odb_object ;
typedef int git_odb ;
struct TYPE_15__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int **,int *,int,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__**,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*,int) ;
 int FUNC_10 (int **,int *,int ,int *,int,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int **,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_2__*,int ,int) ;
 int FUNC_15 (int *,TYPE_4__*,int *,int ) ;
 int FUNC_16 (char const*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,char const*,char const*) ;

int FUNC_18(git_oid *VAR_5, git_repository *VAR_6, const char *VAR_7, int VAR_8)
{
 git_tag VAR_9;
 int VAR_10;
 git_odb *VAR_11;
 git_odb_stream *VAR_12;
 git_odb_object *VAR_13;

 git_reference *VAR_14 = ((void*)0);
 git_buf VAR_15 = VAR_0;

 FUNC_0(VAR_5 && VAR_7);

 FUNC_14(&VAR_9, 0, sizeof(VAR_9));

 if (FUNC_12(&VAR_11, VAR_6) < 0)
  return -1;


 if (FUNC_17(&VAR_9, VAR_7, VAR_7 + FUNC_16(VAR_7)) < 0)
  return -1;


 if (FUNC_6(&VAR_13, VAR_11, &VAR_9.target) < 0)
  goto on_error;

 if (VAR_9.type != VAR_13->cached.type) {
  FUNC_3(VAR_3, "the type for the given target is invalid");
  goto on_error;
 }

 VAR_10 = FUNC_15(VAR_5, &VAR_15, VAR_6, VAR_9.tag_name);
 if (VAR_10 < 0 && VAR_10 != VAR_2)
  goto on_error;


 FUNC_13(VAR_9.tagger);
 FUNC_1(VAR_9.tag_name);
 FUNC_1(VAR_9.message);
 FUNC_4(VAR_13);



 if (VAR_10 == 0 && !VAR_8) {
  FUNC_3(VAR_3, "tag already exists");
  return VAR_1;
 }


 if ((VAR_10 = FUNC_5(
   &VAR_12, VAR_11, FUNC_16(VAR_7), VAR_4)) < 0)
  return VAR_10;

 if (!(VAR_10 = FUNC_9(VAR_12, VAR_7, FUNC_16(VAR_7))))
  VAR_10 = FUNC_7(VAR_5, VAR_12);

 FUNC_8(VAR_12);

 if (VAR_10 < 0) {
  FUNC_2(&VAR_15);
  return VAR_10;
 }

 VAR_10 = FUNC_10(
  &VAR_14, VAR_6, VAR_15.ptr, VAR_5, VAR_8, ((void*)0));

 FUNC_11(VAR_14);
 FUNC_2(&VAR_15);

 return VAR_10;

on_error:
 FUNC_13(VAR_9.tagger);
 FUNC_1(VAR_9.tag_name);
 FUNC_1(VAR_9.message);
 FUNC_4(VAR_13);
 return -1;
}
