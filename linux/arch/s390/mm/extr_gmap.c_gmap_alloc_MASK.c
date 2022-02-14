
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; scalar_t__ index; } ;
struct gmap {unsigned long* table; unsigned long asce; unsigned long asce_end; int crst_list; int ref_count; int shadow_lock; int guest_table_lock; int host_to_rmap; int host_to_guest; int guest_to_host; int pt_list; int children; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long FUNC_2 (unsigned long*) ;
 struct page* FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned long*,unsigned long) ;
 int FUNC_5 (struct gmap*) ;
 struct gmap* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct gmap *FUNC_11(unsigned long VAR_16)
{
 struct gmap *VAR_17;
 struct page *VAR_18;
 unsigned long *VAR_19;
 unsigned long VAR_20, VAR_21;

 if (VAR_16 < VAR_14) {
  VAR_16 = VAR_14 - 1;
  VAR_21 = VAR_7;
  VAR_20 = VAR_15;
 } else if (VAR_16 < VAR_12) {
  VAR_16 = VAR_12 - 1;
  VAR_21 = VAR_6;
  VAR_20 = VAR_13;
 } else if (VAR_16 < VAR_10) {
  VAR_16 = VAR_10 - 1;
  VAR_21 = VAR_5;
  VAR_20 = VAR_11;
 } else {
  VAR_16 = -1UL;
  VAR_21 = VAR_4;
  VAR_20 = VAR_9;
 }
 VAR_17 = FUNC_6(sizeof(struct gmap), VAR_2);
 if (!VAR_17)
  goto out;
 FUNC_0(&VAR_17->crst_list);
 FUNC_0(&VAR_17->children);
 FUNC_0(&VAR_17->pt_list);
 FUNC_1(&VAR_17->guest_to_host, VAR_2);
 FUNC_1(&VAR_17->host_to_guest, VAR_1);
 FUNC_1(&VAR_17->host_to_rmap, VAR_1);
 FUNC_10(&VAR_17->guest_table_lock);
 FUNC_10(&VAR_17->shadow_lock);
 FUNC_9(&VAR_17->ref_count, 1);
 VAR_18 = FUNC_3(VAR_2, VAR_0);
 if (!VAR_18)
  goto out_free;
 VAR_18->index = 0;
 FUNC_7(&VAR_18->lru, &VAR_17->crst_list);
 VAR_19 = (unsigned long *) FUNC_8(VAR_18);
 FUNC_4(VAR_19, VAR_20);
 VAR_17->table = VAR_19;
 VAR_17->asce = VAR_21 | VAR_3 |
  VAR_8 | FUNC_2(VAR_19);
 VAR_17->asce_end = VAR_16;
 return VAR_17;

out_free:
 FUNC_5(VAR_17);
out:
 return ((void*)0);
}
