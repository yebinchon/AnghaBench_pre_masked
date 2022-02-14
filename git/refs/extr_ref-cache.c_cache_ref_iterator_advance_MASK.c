
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ref_iterator {int dummy; } ;
struct TYPE_4__ {int oid; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
struct ref_entry {int flag; TYPE_2__ u; int name; } ;
struct ref_dir {int nr; struct ref_entry** entries; } ;
struct cache_ref_iterator_level {int index; scalar_t__ prefix_state; struct ref_dir* dir; } ;
struct TYPE_6__ {int flags; int * oid; int refname; } ;
struct cache_ref_iterator {int levels_nr; TYPE_3__ base; struct cache_ref_iterator_level* levels; int levels_alloc; int prefix; } ;
typedef enum prefix_state { ____Placeholder_prefix_state } prefix_state ;


 int FUNC_0 (struct cache_ref_iterator_level*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct ref_dir* FUNC_1 (struct ref_entry*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ref_iterator*) ;
 int FUNC_4 (struct ref_dir*) ;

__attribute__((used)) static int FUNC_5(struct ref_iterator *VAR_4)
{
 struct cache_ref_iterator *VAR_5 =
  (struct cache_ref_iterator *)VAR_4;

 while (1) {
  struct cache_ref_iterator_level *VAR_6 =
   &VAR_5->levels[VAR_5->levels_nr - 1];
  struct ref_dir *VAR_7 = VAR_6->dir;
  struct ref_entry *VAR_8;
  enum prefix_state VAR_9;

  if (VAR_6->index == -1)
   FUNC_4(VAR_7);

  if (++VAR_6->index == VAR_6->dir->nr) {

   if (--VAR_5->levels_nr == 0)
    return FUNC_3(VAR_4);

   continue;
  }

  VAR_8 = VAR_7->entries[VAR_6->index];

  if (VAR_6->prefix_state == VAR_2) {
   VAR_9 = FUNC_2(VAR_8->name, VAR_5->prefix);
   if (VAR_9 == VAR_1)
    continue;
  } else {
   VAR_9 = VAR_6->prefix_state;
  }

  if (VAR_8->flag & VAR_3) {

   FUNC_0(VAR_5->levels, VAR_5->levels_nr + 1,
       VAR_5->levels_alloc);

   VAR_6 = &VAR_5->levels[VAR_5->levels_nr++];
   VAR_6->dir = FUNC_1(VAR_8);
   VAR_6->prefix_state = VAR_9;
   VAR_6->index = -1;
  } else {
   VAR_5->base.refname = VAR_8->name;
   VAR_5->base.oid = &VAR_8->u.value.oid;
   VAR_5->base.flags = VAR_8->flag;
   return VAR_0;
  }
 }
}
