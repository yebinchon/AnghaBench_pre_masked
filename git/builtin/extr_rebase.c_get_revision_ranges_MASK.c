
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {struct object_id oid; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (struct object_id*,int ) ;
 scalar_t__ FUNC_3 (char*,struct object_id*) ;
 char const* FUNC_4 (struct object_id*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_7(struct commit *VAR_2, struct commit *VAR_3,
          const char **VAR_4,
          char **VAR_5, char **VAR_6)
{
 struct commit *VAR_7 = VAR_2 ? VAR_2 : VAR_3;
 const char *VAR_8;
 struct object_id VAR_9;

 if (FUNC_3("HEAD", &VAR_9))
  return FUNC_1(FUNC_0("no HEAD?"));

 *VAR_4 = FUNC_2(&VAR_9, VAR_1);
 *VAR_5 = FUNC_6("%s...%s", FUNC_4(&VAR_7->object.oid),
         *VAR_4);

 VAR_8 = FUNC_2(&VAR_9, VAR_0);

 if (VAR_2) {
  const char *VAR_10;

  VAR_10 = FUNC_2(&VAR_7->object.oid,
           VAR_0);

  *VAR_6 = FUNC_6("%s..%s", VAR_10, VAR_8);
 } else
  *VAR_6 = FUNC_5(VAR_8);

 return 0;
}
