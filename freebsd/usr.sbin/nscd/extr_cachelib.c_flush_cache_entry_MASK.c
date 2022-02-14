
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cache_policy_ {int dummy; } ;
struct TYPE_11__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_12__ {TYPE_5__ max_lifetime; } ;
struct TYPE_10__ {scalar_t__ tv_sec; } ;
struct cache_mp_entry_ {TYPE_6__ mp_params; TYPE_4__ last_request_time; } ;
struct cache_entry_ {TYPE_1__* params; } ;
struct TYPE_8__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_9__ {scalar_t__ max_elemsize; TYPE_2__ max_lifetime; } ;
struct cache_common_entry_ {int policies_size; scalar_t__ items_size; struct cache_policy_** policies; TYPE_3__ common_params; } ;
struct TYPE_7__ {scalar_t__ entry_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cache_entry_*) ;
 int FUNC_1 (struct cache_common_entry_*,struct cache_policy_*,struct cache_policy_*,int ) ;

__attribute__((used)) static void
FUNC_2(struct cache_entry_ *VAR_3)
{
 struct cache_mp_entry_ *VAR_4;
 struct cache_common_entry_ *VAR_5;
 struct cache_policy_ *VAR_6, *VAR_7;

 VAR_7 = ((void*)0);
 if (VAR_3->params->entry_type == VAR_0) {
  VAR_5 = (struct cache_common_entry_ *)VAR_3;
  if ((VAR_5->common_params.max_lifetime.tv_sec != 0) ||
      (VAR_5->common_params.max_lifetime.tv_usec != 0)) {

   VAR_6 = VAR_5->policies[0];
   if (VAR_5->policies_size > 1)
    VAR_7 = VAR_5->policies[1];

   FUNC_1(VAR_5, VAR_6,
    VAR_7,
    VAR_2);
  }


  if ((VAR_5->common_params.max_elemsize != 0) &&
   VAR_5->items_size >
   VAR_5->common_params.max_elemsize) {

   if (VAR_5->policies_size > 1) {
    VAR_6 = VAR_5->policies[1];
    VAR_7 = VAR_5->policies[0];
   } else {
    VAR_6 = VAR_5->policies[0];
    VAR_7 = ((void*)0);
   }

   FUNC_1(VAR_5, VAR_6,
    VAR_7,
    VAR_1);
  }
 } else {
  VAR_4 = (struct cache_mp_entry_ *)VAR_3;

  if ((VAR_4->mp_params.max_lifetime.tv_sec != 0)
   || (VAR_4->mp_params.max_lifetime.tv_usec != 0)) {

   if (VAR_4->last_request_time.tv_sec -
    VAR_4->last_request_time.tv_sec >
    VAR_4->mp_params.max_lifetime.tv_sec)
    FUNC_0(VAR_3);
  }
 }
}
