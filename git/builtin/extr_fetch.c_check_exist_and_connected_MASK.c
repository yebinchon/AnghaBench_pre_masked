
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref {int old_oid; struct ref* next; } ;
struct check_connected_options {int quiet; } ;


 struct check_connected_options VAR_0 ;
 int FUNC_0 (int ,struct ref**,struct check_connected_options*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct ref *VAR_3)
{
 struct ref *VAR_4 = VAR_3;
 struct check_connected_options VAR_5 = VAR_0;
 struct ref *VAR_6;
 if (VAR_1)
  return -1;





 for (VAR_6 = VAR_4; VAR_6; VAR_6 = VAR_6->next) {
  if (!FUNC_1(&VAR_6->old_oid))
   return -1;
 }

 VAR_5.quiet = 1;
 return FUNC_0(VAR_2, &VAR_4, &VAR_5);
}
