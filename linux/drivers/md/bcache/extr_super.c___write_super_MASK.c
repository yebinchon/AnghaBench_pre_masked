
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache_sb {unsigned int first_bucket; unsigned int keys; void* seq; void* flags; void* version; int csum; void** d; int last_mount; int label; int set_uuid; int uuid; void* offset; } ;
struct TYPE_2__ {int bi_size; int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bio*,int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ,int) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (struct cache_sb*) ;
 int FUNC_7 (int ,int ,int) ;
 struct cache_sb* FUNC_8 (int ) ;
 int FUNC_9 (char*,void*,void*,void*) ;
 int FUNC_10 (struct bio*) ;

__attribute__((used)) static void FUNC_11(struct cache_sb *VAR_6, struct bio *VAR_7)
{
 struct cache_sb *VAR_8 = FUNC_8(FUNC_1(VAR_7));
 unsigned int VAR_9;

 VAR_7->bi_iter.bi_sector = VAR_4;
 VAR_7->bi_iter.bi_size = VAR_5;
 FUNC_2(VAR_7, VAR_1, VAR_2|VAR_0);
 FUNC_0(VAR_7, ((void*)0));

 VAR_8->offset = FUNC_5(VAR_6->offset);
 VAR_8->version = FUNC_5(VAR_6->version);

 FUNC_7(VAR_8->uuid, VAR_6->uuid, 16);
 FUNC_7(VAR_8->set_uuid, VAR_6->set_uuid, 16);
 FUNC_7(VAR_8->label, VAR_6->label, VAR_3);

 VAR_8->flags = FUNC_5(VAR_6->flags);
 VAR_8->seq = FUNC_5(VAR_6->seq);

 VAR_8->last_mount = FUNC_4(VAR_6->last_mount);
 VAR_8->first_bucket = FUNC_3(VAR_6->first_bucket);
 VAR_8->keys = FUNC_3(VAR_6->keys);

 for (VAR_9 = 0; VAR_9 < VAR_6->keys; VAR_9++)
  VAR_8->d[VAR_9] = FUNC_5(VAR_6->d[VAR_9]);

 VAR_8->csum = FUNC_6(VAR_8);

 FUNC_9("ver %llu, flags %llu, seq %llu",
   VAR_6->version, VAR_6->flags, VAR_6->seq);

 FUNC_10(VAR_7);
}
