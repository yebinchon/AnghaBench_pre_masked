
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_layout {int new_chunk_sectors; int new_layout; int new_level; } ;
struct mddev {int new_chunk_sectors; int new_layout; int new_level; } ;
struct raid_set {struct mddev md; } ;



__attribute__((used)) static void FUNC_0(struct raid_set *VAR_0, struct rs_layout *VAR_1)
{
 struct mddev *VAR_2 = &VAR_0->md;

 VAR_2->new_level = VAR_1->new_level;
 VAR_2->new_layout = VAR_1->new_layout;
 VAR_2->new_chunk_sectors = VAR_1->new_chunk_sectors;
}
