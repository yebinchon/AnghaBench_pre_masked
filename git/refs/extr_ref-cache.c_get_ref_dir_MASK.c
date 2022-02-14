
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ref_dir {TYPE_2__* cache; } ;
struct TYPE_3__ {struct ref_dir subdir; } ;
struct ref_entry {int flag; int name; TYPE_1__ u; } ;
struct TYPE_4__ {int ref_store; int (* fill_ref_dir ) (int ,struct ref_dir*,int ) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct ref_dir*,int ) ;

struct ref_dir *FUNC_3(struct ref_entry *VAR_2)
{
 struct ref_dir *VAR_3;
 FUNC_1(VAR_2->flag & VAR_0);
 VAR_3 = &VAR_2->u.subdir;
 if (VAR_2->flag & VAR_1) {
  if (!VAR_3->cache->fill_ref_dir)
   FUNC_0("incomplete ref_store without fill_ref_dir function");

  VAR_3->cache->fill_ref_dir(VAR_3->cache->ref_store, VAR_3, VAR_2->name);
  VAR_2->flag &= ~VAR_1;
 }
 return VAR_3;
}
