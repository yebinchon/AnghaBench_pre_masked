
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref_store {TYPE_1__* be; } ;
struct ref_iterator {int dummy; } ;
struct do_for_each_ref_help {void* member_1; int member_0; } ;
typedef int each_ref_fn ;
struct TYPE_2__ {struct ref_iterator* (* reflog_iterator_begin ) (struct ref_store*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ref_iterator*,int ,struct do_for_each_ref_help*) ;
 struct ref_iterator* FUNC_1 (struct ref_store*) ;
 int VAR_1 ;

int FUNC_2(struct ref_store *VAR_2, each_ref_fn VAR_3, void *VAR_4)
{
 struct ref_iterator *VAR_5;
 struct do_for_each_ref_help VAR_6 = { VAR_3, VAR_4 };

 VAR_5 = VAR_2->be->reflog_iterator_begin(VAR_2);

 return FUNC_0(VAR_1, VAR_5,
          VAR_0, &VAR_6);
}
