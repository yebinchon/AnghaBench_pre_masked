
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidset_iter {int dummy; } ;
struct object_id {int dummy; } ;
struct object {int oid; } ;
struct fsck_options {int dummy; } ;
struct blob {struct object object; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct blob*,char*,unsigned long,struct fsck_options*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 struct blob* FUNC_3 (int ,struct object_id const*) ;
 struct object* FUNC_4 (struct object_id const*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,struct object_id const*) ;
 int FUNC_7 (int *,struct oidset_iter*) ;
 struct object_id* FUNC_8 (struct oidset_iter*) ;
 char* FUNC_9 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_10 (struct fsck_options*,struct object*,int ,char*) ;
 int VAR_5 ;

int FUNC_11(struct fsck_options *VAR_6)
{
 int VAR_7 = 0;
 struct oidset_iter VAR_8;
 const struct object_id *VAR_9;

 FUNC_7(&VAR_4, &VAR_8);
 while ((VAR_9 = FUNC_8(&VAR_8))) {
  struct blob *VAR_10;
  enum object_type VAR_11;
  unsigned long VAR_12;
  char *VAR_13;

  if (FUNC_6(&VAR_3, VAR_9))
   continue;

  VAR_10 = FUNC_3(VAR_5, VAR_9);
  if (!VAR_10) {
   struct object *VAR_14 = FUNC_4(VAR_9);
   VAR_7 |= FUNC_10(VAR_6, VAR_14,
          VAR_0,
          "non-blob found at .gitmodules");
   continue;
  }

  VAR_13 = FUNC_9(VAR_9, &VAR_11, &VAR_12);
  if (!VAR_13) {
   if (FUNC_2(&VAR_10->object.oid))
    continue;
   VAR_7 |= FUNC_10(VAR_6, &VAR_10->object,
          VAR_1,
          "unable to read .gitmodules blob");
   continue;
  }

  if (VAR_11 == VAR_2)
   VAR_7 |= FUNC_1(VAR_10, VAR_13, VAR_12, VAR_6);
  else
   VAR_7 |= FUNC_10(VAR_6, &VAR_10->object,
          VAR_0,
          "non-blob found at .gitmodules");
  FUNC_0(VAR_13);
 }


 FUNC_5(&VAR_4);
 FUNC_5(&VAR_3);
 return VAR_7;
}
