
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {char const** merge_name; scalar_t__ merge_nr; int merge_alloc; } ;


 int FUNC_0 (char const**,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct branch *VAR_0, const char *VAR_1)
{
 FUNC_0(VAR_0->merge_name, VAR_0->merge_nr + 1,
     VAR_0->merge_alloc);
 VAR_0->merge_name[VAR_0->merge_nr++] = VAR_1;
}
