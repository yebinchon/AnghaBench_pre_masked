
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_store {int dummy; } ;
struct ref_cache {int root; int * fill_ref_dir; struct ref_store* ref_store; } ;
typedef int fill_ref_dir_fn ;


 int FUNC_0 (struct ref_cache*,char*,int ,int) ;
 struct ref_cache* FUNC_1 (int,int) ;

struct ref_cache *FUNC_2(struct ref_store *VAR_0,
       fill_ref_dir_fn *VAR_1)
{
 struct ref_cache *VAR_2 = FUNC_1(1, sizeof(*VAR_2));

 VAR_2->ref_store = VAR_0;
 VAR_2->fill_ref_dir = VAR_1;
 VAR_2->root = FUNC_0(VAR_2, "", 0, 1);
 return VAR_2;
}
