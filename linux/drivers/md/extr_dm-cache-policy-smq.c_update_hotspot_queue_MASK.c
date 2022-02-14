
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {unsigned int hotspot_level_jump; int hotspot_table; int hotspot; int hotspot_hit_bits; int hotspot_alloc; int hotspot_stats; } ;
struct entry {int oblock; int level; } ;
typedef int dm_oblock_t ;


 struct entry* FUNC_0 (int *) ;
 int FUNC_1 (unsigned int,int ) ;
 unsigned int FUNC_2 (int *,struct entry*) ;
 int FUNC_3 (int *,struct entry*) ;
 struct entry* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,struct entry*) ;
 struct entry* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct entry*) ;
 int FUNC_8 (int *,struct entry*,unsigned int,int *,int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (unsigned int,int ) ;
 int FUNC_12 (struct smq_policy*,int ) ;

__attribute__((used)) static struct entry *FUNC_13(struct smq_policy *VAR_0, dm_oblock_t VAR_1)
{
 unsigned VAR_2;
 dm_oblock_t VAR_3 = FUNC_12(VAR_0, VAR_1);
 struct entry *VAR_4 = FUNC_4(&VAR_0->hotspot_table, VAR_3);

 if (VAR_4) {
  FUNC_9(&VAR_0->hotspot_stats, VAR_4->level);

  VAR_2 = FUNC_2(&VAR_0->hotspot_alloc, VAR_4);
  FUNC_8(&VAR_0->hotspot, VAR_4,
     FUNC_11(VAR_2, VAR_0->hotspot_hit_bits) ?
     0u : VAR_0->hotspot_level_jump,
     ((void*)0), ((void*)0));

 } else {
  FUNC_10(&VAR_0->hotspot_stats);

  VAR_4 = FUNC_0(&VAR_0->hotspot_alloc);
  if (!VAR_4) {
   VAR_4 = FUNC_6(&VAR_0->hotspot);
   if (VAR_4) {
    FUNC_5(&VAR_0->hotspot_table, VAR_4);
    VAR_2 = FUNC_2(&VAR_0->hotspot_alloc, VAR_4);
    FUNC_1(VAR_2, VAR_0->hotspot_hit_bits);
   }

  }

  if (VAR_4) {
   VAR_4->oblock = VAR_3;
   FUNC_7(&VAR_0->hotspot, VAR_4);
   FUNC_3(&VAR_0->hotspot_table, VAR_4);
  }
 }

 return VAR_4;
}
