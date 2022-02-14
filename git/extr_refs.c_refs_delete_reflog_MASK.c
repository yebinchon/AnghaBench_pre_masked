
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_store {TYPE_1__* be; } ;
struct TYPE_2__ {int (* delete_reflog ) (struct ref_store*,char const*) ;} ;


 int FUNC_0 (struct ref_store*,char const*) ;

int FUNC_1(struct ref_store *VAR_0, const char *VAR_1)
{
 return VAR_0->be->delete_reflog(VAR_0, VAR_1);
}
