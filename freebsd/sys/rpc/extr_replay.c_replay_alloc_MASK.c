
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;
struct rpc_msg {int dummy; } ;
struct replay_cache_entry {int rce_hash; int rce_addr; struct rpc_msg rce_msg; } ;
struct replay_cache {int rc_all; int * rc_cache; int rc_count; int rc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct replay_cache_entry*,int ) ;
 int FUNC_1 (struct sockaddr*,int *,int ) ;
 struct replay_cache_entry* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct replay_cache_entry *
FUNC_4(struct replay_cache *VAR_6,
    struct rpc_msg *VAR_7, struct sockaddr *VAR_8, int VAR_9)
{
 struct replay_cache_entry *VAR_10;

 FUNC_3(&VAR_6->rc_lock, VAR_0);

 VAR_6->rc_count++;
 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2, VAR_1|VAR_3);
 if (!VAR_10)
  return (((void*)0));
 VAR_10->rce_hash = VAR_9;
 VAR_10->rce_msg = *VAR_7;
 FUNC_1(VAR_8, &VAR_10->rce_addr, VAR_8->sa_len);

 FUNC_0(&VAR_6->rc_cache[VAR_9], VAR_10, VAR_5);
 FUNC_0(&VAR_6->rc_all, VAR_10, VAR_4);

 return (VAR_10);
}
