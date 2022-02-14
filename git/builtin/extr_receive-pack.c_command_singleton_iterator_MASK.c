
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
struct command {int new_oid; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct object_id*,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, struct object_id *VAR_1)
{
 struct command **VAR_2 = VAR_0;
 struct command *VAR_3 = *VAR_2;

 if (!VAR_3 || FUNC_0(&VAR_3->new_oid))
  return -1;
 *VAR_2 = ((void*)0);
 FUNC_1(VAR_1, &VAR_3->new_oid);
 return 0;
}
