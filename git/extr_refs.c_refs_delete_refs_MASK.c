
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct ref_store {TYPE_1__* be; } ;
struct TYPE_2__ {int (* delete_refs ) (struct ref_store*,char const*,struct string_list*,unsigned int) ;} ;


 int FUNC_0 (struct ref_store*,char const*,struct string_list*,unsigned int) ;

int FUNC_1(struct ref_store *VAR_0, const char *VAR_1,
       struct string_list *VAR_2, unsigned int VAR_3)
{
 return VAR_0->be->delete_refs(VAR_0, VAR_1, VAR_2, VAR_3);
}
