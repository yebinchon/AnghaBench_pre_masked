
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct rev_info {int max_age; int min_age; } ;
struct object {int oid; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char,int) ;
 char* FUNC_2 (char*,unsigned long,char*,int) ;
 int FUNC_3 (char*,int *,int) ;
 char* FUNC_4 (int *,int*,unsigned long*) ;

__attribute__((used)) static int FUNC_5(struct object *VAR_0, struct rev_info *VAR_1)
{
 unsigned long VAR_2;
 enum object_type VAR_3;
 char *VAR_4 = ((void*)0), *VAR_5, *VAR_6;
 timestamp_t VAR_7;
 int VAR_8 = 1;

 if (VAR_1->max_age == -1 && VAR_1->min_age == -1)
  goto out;

 VAR_4 = FUNC_4(&VAR_0->oid, &VAR_3, &VAR_2);
 if (!VAR_4)
  goto out;
 VAR_5 = FUNC_2(VAR_4, VAR_2, "\ntagger ", 8);
 if (!VAR_5++)
  goto out;
 VAR_6 = FUNC_1(VAR_5, '\n', VAR_4 + VAR_2 - VAR_5);
 VAR_5 = FUNC_1(VAR_5, '>', VAR_6 ? VAR_6 - VAR_5 : VAR_4 + VAR_2 - VAR_5);
 if (!VAR_5++)
  goto out;
 VAR_7 = FUNC_3(VAR_5, ((void*)0), 10);
 VAR_8 = (VAR_1->max_age == -1 || VAR_1->max_age < VAR_7) &&
  (VAR_1->min_age == -1 || VAR_1->min_age > VAR_7);
out:
 FUNC_0(VAR_4);
 return VAR_8;
}
