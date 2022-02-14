
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int const*,int ) ;
 char* FUNC_4 (int const*) ;
 int FUNC_5 (int **,int *,char const*,int const*,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,char*) ;
 int FUNC_8 (int **,int *,int const*,int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int **,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(git_repository *VAR_4, const git_oid *VAR_5, int VAR_6)
{
 git_checkout_options VAR_7 = VAR_0;
 git_reference *VAR_8;
 git_reference *VAR_9;
 git_object *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 if (VAR_6) {
  const char *VAR_12;
  git_reference *VAR_13;


  VAR_11 = FUNC_7(&VAR_13, VAR_4, "HEAD");
  if (VAR_11 != 0) {
   FUNC_0(VAR_3, "failed to lookup HEAD ref\n");
   return -1;
  }


  VAR_12 = FUNC_9(VAR_13);


  VAR_11 = FUNC_5(&VAR_8, VAR_4, VAR_12, VAR_5, 0, ((void*)0));
  if (VAR_11 != 0) {
   FUNC_0(VAR_3, "failed to create master reference\n");
   return -1;
  }

  FUNC_6(VAR_13);
 } else {

  VAR_11 = FUNC_10(&VAR_8, VAR_4);
  if (VAR_11 != 0) {
   FUNC_0(VAR_3, "failed to get HEAD reference\n");
   return -1;
  }
 }


 VAR_11 = FUNC_3(&VAR_10, VAR_4, VAR_5, VAR_2);
 if (VAR_11 != 0) {
  FUNC_0(VAR_3, "failed to lookup OID %s\n", FUNC_4(VAR_5));
  return -1;
 }


 VAR_7.checkout_strategy = VAR_1;
 VAR_11 = FUNC_1(VAR_4, VAR_10, &VAR_7);
 if (VAR_11 != 0) {
  FUNC_0(VAR_3, "failed to checkout HEAD reference\n");
  return -1;
 }


 VAR_11 = FUNC_8(&VAR_9, VAR_8, VAR_5, ((void*)0));
 if (VAR_11 != 0) {
  FUNC_0(VAR_3, "failed to move HEAD reference\n");
  return -1;
 }

 FUNC_6(VAR_8);
 FUNC_6(VAR_9);
 FUNC_2(VAR_10);

 return 0;
}
