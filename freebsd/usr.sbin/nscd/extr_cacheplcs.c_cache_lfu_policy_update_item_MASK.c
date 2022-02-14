
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cache_policy_item_ {int dummy; } ;
struct cache_policy_ {int dummy; } ;
struct TYPE_5__ {scalar_t__ tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_6__ {TYPE_2__ creation_time; TYPE_1__ last_request_time; scalar_t__ request_count; } ;
struct cache_lfu_policy_item_ {size_t frequency; TYPE_3__ parent_data; } ;
struct cache_lfu_policy_ {int * groups; } ;


 double VAR_0 ;
 int FUNC_0 (int *,struct cache_lfu_policy_item_*,int ) ;
 int FUNC_1 (int *,struct cache_lfu_policy_item_*,int ) ;
 int FUNC_2 (void (*) (struct cache_policy_*,struct cache_policy_item_*)) ;
 int FUNC_3 (void (*) (struct cache_policy_*,struct cache_policy_item_*)) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct cache_policy_ *VAR_2,
 struct cache_policy_item_ *VAR_3)
{
 struct cache_lfu_policy_ *VAR_4;
 struct cache_lfu_policy_item_ *VAR_5;
 int VAR_6;

 FUNC_2(FUNC_4);
 VAR_4 = (struct cache_lfu_policy_ *)VAR_2;
 VAR_5 = (struct cache_lfu_policy_item_ *)VAR_3;
 if (VAR_5->parent_data.last_request_time.tv_sec !=
  VAR_5->parent_data.creation_time.tv_sec) {
  VAR_6 = ((double)VAR_5->parent_data.request_count *
   (double)VAR_5->parent_data.request_count /
   (VAR_5->parent_data.last_request_time.tv_sec -
       VAR_5->parent_data.creation_time.tv_sec + 1)) *
       VAR_0;
  if (VAR_6 >= VAR_0)
   VAR_6 = VAR_0 - 1;
 } else
  VAR_6 = VAR_0 - 1;

 FUNC_1(&(VAR_4->groups[VAR_5->frequency]), VAR_5,
  VAR_1);
 VAR_5->frequency = VAR_6;
 FUNC_0(&(VAR_4->groups[VAR_6]), VAR_5, VAR_1);

 FUNC_3(FUNC_4);
}
