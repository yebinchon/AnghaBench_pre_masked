
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {scalar_t__ nr; } ;


 scalar_t__ FUNC_0 (struct string_list*,char const**,size_t*,char const**,size_t*) ;
 int FUNC_1 (struct string_list*,int *) ;
 struct string_list* FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(const char **VAR_0, size_t *VAR_1,
   const char **VAR_2, size_t *VAR_3)
{
 static struct string_list *VAR_4;
 if (!VAR_4) {
  VAR_4 = FUNC_2(1, sizeof(*VAR_4));
  FUNC_1(VAR_4, ((void*)0));
 }
 return VAR_4->nr && FUNC_0(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
}
