
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct ref_iterator {int dummy; } ;
struct do_for_each_ref_help {void* member_1; int member_0; } ;
typedef int each_ref_fn ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ref_iterator*,int ,struct do_for_each_ref_help*) ;
 struct ref_iterator* FUNC_1 (struct ref_store*,char const*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct ref_store *VAR_2, const char *VAR_3,
      each_ref_fn VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
 struct ref_iterator *VAR_8;
 struct do_for_each_ref_help VAR_9 = { VAR_4, VAR_7 };

 if (!VAR_2)
  return 0;

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6);

 return FUNC_0(VAR_1, VAR_8,
     VAR_0, &VAR_9);
}
