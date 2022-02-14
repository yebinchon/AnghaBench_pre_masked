
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct ident_split {char* date_end; int date_begin; } ;
struct commit {int dummy; } ;
struct author_date_slab {int dummy; } ;


 int * FUNC_0 (struct author_date_slab*,struct commit*) ;
 char* FUNC_1 (char const*,char*,size_t*) ;
 char* FUNC_2 (struct commit*,int *) ;
 int FUNC_3 (int ,char**,int) ;
 scalar_t__ FUNC_4 (struct ident_split*,char const*,size_t) ;
 int FUNC_5 (struct commit*,char const*) ;

void FUNC_6(struct author_date_slab *VAR_0,
   struct commit *VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_1, ((void*)0));
 struct ident_split VAR_3;
 const char *VAR_4;
 size_t VAR_5;
 char *VAR_6;
 timestamp_t VAR_7;

 VAR_4 = FUNC_1(VAR_2, "author", &VAR_5);
 if (!VAR_4)
  goto fail_exit;
 if (FUNC_4(&VAR_3, VAR_4, VAR_5) ||
     !VAR_3.date_begin || !VAR_3.date_end)
  goto fail_exit;

 VAR_7 = FUNC_3(VAR_3.date_begin, &VAR_6, 10);
 if (VAR_6 != VAR_3.date_end)
  goto fail_exit;
 *(FUNC_0(VAR_0, VAR_1)) = VAR_7;

fail_exit:
 FUNC_5(VAR_1, VAR_2);
}
