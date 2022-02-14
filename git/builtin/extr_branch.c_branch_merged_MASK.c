
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct commit {int dummy; } ;
struct branch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct branch* FUNC_1 (char const*) ;
 char* FUNC_2 (struct branch*,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct commit*,struct commit*) ;
 struct commit* FUNC_5 (int ,struct object_id*) ;
 void* FUNC_6 (char const*,int ,struct object_id*,int *) ;
 int VAR_2 ;
 int FUNC_7 (int ,char const*,char const*) ;

__attribute__((used)) static int FUNC_8(int VAR_3, const char *VAR_4,
    struct commit *VAR_5, struct commit *VAR_6)
{






 struct commit *VAR_7 = ((void*)0);
 const char *VAR_8 = ((void*)0);
 void *VAR_9 = ((void*)0);
 int VAR_10;

 if (VAR_3 == VAR_0) {
  struct branch *VAR_11 = FUNC_1(VAR_4);
  const char *VAR_12 = FUNC_2(VAR_11, ((void*)0));
  struct object_id VAR_13;

  if (VAR_12 &&
      (VAR_8 = VAR_9 =
       FUNC_6(VAR_12, VAR_1,
        &VAR_13, ((void*)0))) != ((void*)0))
   VAR_7 = FUNC_5(VAR_2,
        &VAR_13);
 }
 if (!VAR_7)
  VAR_7 = VAR_6;

 VAR_10 = FUNC_4(VAR_5, VAR_7);
 if ((VAR_6 != VAR_7) &&
     FUNC_4(VAR_5, VAR_6) != VAR_10) {
  if (VAR_10)
   FUNC_7(FUNC_0("deleting branch '%s' that has been merged to\n"
    "         '%s', but not yet merged to HEAD."),
    VAR_4, VAR_8);
  else
   FUNC_7(FUNC_0("not deleting branch '%s' that is not yet merged to\n"
    "         '%s', even though it is merged to HEAD."),
    VAR_4, VAR_8);
 }
 FUNC_3(VAR_9);
 return VAR_10;
}
