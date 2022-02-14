
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wq; int flush_journal; scalar_t__ flags; scalar_t__ status; scalar_t__ write_prio; int write_point; int inode; int * bio; TYPE_1__* c; } ;
struct search {int recoverable; TYPE_2__ iop; int start_time; scalar_t__ read_dirty_data; int write; struct bcache_device* d; scalar_t__ cache_missed; int * cache_miss; struct bio* orig_bio; int cl; } ;
struct bio {int bi_opf; } ;
struct bcache_device {int id; TYPE_1__* c; } ;
struct TYPE_3__ {int search_inflight; int search; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct search*,struct bio*,int ) ;
 int FUNC_4 (unsigned long,int) ;
 int VAR_3 ;
 struct search* FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;

__attribute__((used)) static inline struct search *FUNC_8(struct bio *VAR_5,
       struct bcache_device *VAR_6)
{
 struct search *VAR_7;

 VAR_7 = FUNC_5(&VAR_6->c->search, VAR_0);

 FUNC_2(&VAR_7->cl, ((void*)0));
 FUNC_3(VAR_7, VAR_5, VAR_4);
 FUNC_0(&VAR_6->c->search_inflight);

 VAR_7->orig_bio = VAR_5;
 VAR_7->cache_miss = ((void*)0);
 VAR_7->cache_missed = 0;
 VAR_7->d = VAR_6;
 VAR_7->recoverable = 1;
 VAR_7->write = FUNC_7(FUNC_1(VAR_5));
 VAR_7->read_dirty_data = 0;
 VAR_7->start_time = VAR_3;

 VAR_7->iop.c = VAR_6->c;
 VAR_7->iop.bio = ((void*)0);
 VAR_7->iop.inode = VAR_6->id;
 VAR_7->iop.write_point = FUNC_4((unsigned long) VAR_2, 16);
 VAR_7->iop.write_prio = 0;
 VAR_7->iop.status = 0;
 VAR_7->iop.flags = 0;
 VAR_7->iop.flush_journal = FUNC_6(VAR_5->bi_opf);
 VAR_7->iop.wq = VAR_1;

 return VAR_7;
}
