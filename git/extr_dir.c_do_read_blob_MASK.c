
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_stat {int oid; int stat; } ;
struct object_id {int dummy; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,struct object_id const*) ;
 char* FUNC_3 (struct object_id const*,int*,unsigned long*) ;
 int FUNC_4 (unsigned long,int) ;
 char* FUNC_5 (char*,int ) ;
 size_t FUNC_6 (unsigned long) ;

__attribute__((used)) static int FUNC_7(const struct object_id *VAR_1, struct oid_stat *VAR_2,
   size_t *VAR_3, char **VAR_4)
{
 enum object_type VAR_5;
 unsigned long VAR_6;
 char *VAR_7;

 *VAR_3 = 0;
 *VAR_4 = ((void*)0);

 VAR_7 = FUNC_3(VAR_1, &VAR_5, &VAR_6);
 if (!VAR_7 || VAR_5 != VAR_0) {
  FUNC_0(VAR_7);
  return -1;
 }

 if (VAR_2) {
  FUNC_1(&VAR_2->stat, 0, sizeof(VAR_2->stat));
  FUNC_2(&VAR_2->oid, VAR_1);
 }

 if (VAR_6 == 0) {
  FUNC_0(VAR_7);
  return 0;
 }

 if (VAR_7[VAR_6 - 1] != '\n') {
  VAR_7 = FUNC_5(VAR_7, FUNC_4(VAR_6, 1));
  VAR_7[VAR_6++] = '\n';
 }

 *VAR_3 = FUNC_6(VAR_6);
 *VAR_4 = VAR_7;

 return 1;
}
