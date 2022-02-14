
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay_cache_entry {size_t rce_hash; scalar_t__ rce_repbody; } ;
struct replay_cache {int rc_size; int rc_all; int * rc_cache; int rc_count; int rc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct replay_cache_entry*,int ) ;
 int FUNC_1 (struct replay_cache_entry*,int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct replay_cache *VAR_4, struct replay_cache_entry *VAR_5)
{

 FUNC_4(&VAR_4->rc_lock, VAR_0);

 VAR_4->rc_count--;
 FUNC_0(&VAR_4->rc_cache[VAR_5->rce_hash], VAR_5, VAR_3);
 FUNC_0(&VAR_4->rc_all, VAR_5, VAR_2);
 if (VAR_5->rce_repbody) {
  VAR_4->rc_size -= FUNC_3(VAR_5->rce_repbody, ((void*)0));
  FUNC_2(VAR_5->rce_repbody);
 }
 FUNC_1(VAR_5, VAR_1);
}
