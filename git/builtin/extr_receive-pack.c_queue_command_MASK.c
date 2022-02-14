
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct command {struct command* next; int new_oid; int old_oid; } ;


 int FUNC_0 (struct command*,int ,char const*,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,struct object_id*) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*,char const**) ;
 int VAR_0 ;

__attribute__((used)) static struct command **FUNC_4(struct command **VAR_1,
          const char *VAR_2,
          int VAR_3)
{
 struct object_id VAR_4, VAR_5;
 struct command *VAR_6;
 const char *VAR_7;
 int VAR_8;
 const char *VAR_9;

 if (FUNC_3(VAR_2, &VAR_4, &VAR_9) ||
     *VAR_9++ != ' ' ||
     FUNC_3(VAR_9, &VAR_5, &VAR_9) ||
     *VAR_9++ != ' ')
  FUNC_1("protocol error: expected old/new/ref, got '%s'", VAR_2);

 VAR_7 = VAR_9;
 VAR_8 = VAR_3 - (VAR_9 - VAR_2);
 FUNC_0(VAR_6, VAR_0, VAR_7, VAR_8);
 FUNC_2(&VAR_6->old_oid, &VAR_4);
 FUNC_2(&VAR_6->new_oid, &VAR_5);
 *VAR_1 = VAR_6;
 return &VAR_6->next;
}
