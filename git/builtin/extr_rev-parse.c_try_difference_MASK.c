
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;
struct TYPE_2__ {struct object_id oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct commit_list* FUNC_0 (struct commit*,struct commit*) ;
 int FUNC_1 (char const*,struct object_id*) ;
 struct commit* FUNC_2 (int ,struct object_id*) ;
 struct commit* FUNC_3 (struct commit_list**) ;
 int FUNC_4 (int ,struct object_id*,char const*) ;
 char* FUNC_5 (char const*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(const char *VAR_3)
{
 char *VAR_4;
 struct object_id VAR_5;
 struct object_id VAR_6;
 const char *VAR_7;
 const char *VAR_8;
 int VAR_9;
 static const char VAR_10[] = "HEAD";

 if (!(VAR_4 = FUNC_5(VAR_3, "..")))
  return 0;
 VAR_7 = VAR_4 + 2;
 VAR_8 = VAR_3;
 VAR_9 = (*VAR_7 == '.');

 *VAR_4 = 0;
 VAR_7 += VAR_9;

 if (!*VAR_7)
  VAR_7 = VAR_10;
 if (VAR_4 == VAR_3)
  VAR_8 = VAR_10;

 if (VAR_8 == VAR_10 && VAR_7 == VAR_10 &&
     !VAR_9) {




  *VAR_4 = '.';
  return 0;
 }

 if (!FUNC_1(VAR_8, &VAR_5) && !FUNC_1(VAR_7, &VAR_6)) {
  FUNC_4(VAR_0, &VAR_6, VAR_7);
  FUNC_4(VAR_9 ? VAR_0 : VAR_1, &VAR_5, VAR_8);
  if (VAR_9) {
   struct commit_list *VAR_11;
   struct commit *VAR_12, *VAR_13;
   VAR_12 = FUNC_2(VAR_2, &VAR_5);
   VAR_13 = FUNC_2(VAR_2, &VAR_6);
   if (!VAR_12 || !VAR_13) {
    *VAR_4 = '.';
    return 0;
   }
   VAR_11 = FUNC_0(VAR_12, VAR_13);
   while (VAR_11) {
    struct commit *VAR_14 = FUNC_3(&VAR_11);
    FUNC_4(VAR_1, &VAR_14->object.oid, ((void*)0));
   }
  }
  *VAR_4 = '.';
  return 1;
 }
 *VAR_4 = '.';
 return 0;
}
