
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct object {struct object_id oid; int parsed; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct commit*,struct commit_list**) ;
 struct object* FUNC_1 (struct repository*,struct object*,char const*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct repository*,char const*,int,struct object_id*,unsigned int) ;
 int FUNC_4 (struct repository*,char*,struct object_id*,struct commit_list*) ;
 int FUNC_5 (struct object_id*,struct object_id*) ;
 struct object* FUNC_6 (struct repository*,struct object_id*) ;
 struct object* FUNC_7 (struct repository*,char const*,int,struct object*,unsigned int) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 char* FUNC_9 (char const*,int) ;

__attribute__((used)) static int FUNC_10(struct repository *VAR_9, const char *VAR_10, int VAR_11,
        struct object_id *VAR_12, unsigned VAR_13)
{
 struct object_id VAR_14;
 const char *VAR_15;
 unsigned int VAR_16 = 0;
 struct object *VAR_17;
 if (VAR_11 < 4 || VAR_10[VAR_11-1] != '}')
  return -1;

 for (VAR_15 = VAR_10 + VAR_11 - 1; VAR_10 <= VAR_15; VAR_15--) {
  int VAR_18 = *VAR_15;
  if (VAR_18 == '{' && VAR_10 < VAR_15 && VAR_15[-1] == '^')
   break;
 }
 if (VAR_15 <= VAR_10)
  return -1;

 VAR_15++;
 if (FUNC_8(VAR_15, "commit}"))
  VAR_16 = VAR_5;
 else if (FUNC_8(VAR_15, "tag}"))
  VAR_16 = VAR_7;
 else if (FUNC_8(VAR_15, "tree}"))
  VAR_16 = VAR_8;
 else if (FUNC_8(VAR_15, "blob}"))
  VAR_16 = VAR_4;
 else if (FUNC_8(VAR_15, "object}"))
  VAR_16 = VAR_3;
 else if (VAR_15[0] == '}')
  VAR_16 = VAR_6;
 else if (VAR_15[0] == '/')
  VAR_16 = VAR_5;
 else
  return -1;

 VAR_13 &= ~VAR_1;
 if (VAR_16 == VAR_5)
  VAR_13 |= VAR_0;
 else if (VAR_16 == VAR_8)
  VAR_13 |= VAR_2;

 if (FUNC_3(VAR_9, VAR_10, VAR_15 - VAR_10 - 2, &VAR_14, VAR_13))
  return -1;

 VAR_17 = FUNC_6(VAR_9, &VAR_14);
 if (!VAR_17)
  return -1;
 if (!VAR_16) {
  VAR_17 = FUNC_1(VAR_9, VAR_17, VAR_10, VAR_15 - VAR_10 - 2);
  if (!VAR_17 || (!VAR_17->parsed && !FUNC_6(VAR_9, &VAR_17->oid)))
   return -1;
  FUNC_5(VAR_12, &VAR_17->oid);
  return 0;
 }






 VAR_17 = FUNC_7(VAR_9, VAR_10, VAR_11, VAR_17, VAR_16);
 if (!VAR_17)
  return -1;

 FUNC_5(VAR_12, &VAR_17->oid);
 if (VAR_15[0] == '/') {

  char *VAR_19;
  int VAR_20;
  struct commit_list *VAR_21 = ((void*)0);





  if (VAR_15[1] == '}')
   return 0;

  VAR_19 = FUNC_9(VAR_15 + 1, VAR_10 + VAR_11 - 1 - (VAR_15 + 1));
  FUNC_0((struct commit *)VAR_17, &VAR_21);
  VAR_20 = FUNC_4(VAR_9, VAR_19, VAR_12, VAR_21);
  FUNC_2(VAR_19);
  return VAR_20;
 }
 return 0;
}
