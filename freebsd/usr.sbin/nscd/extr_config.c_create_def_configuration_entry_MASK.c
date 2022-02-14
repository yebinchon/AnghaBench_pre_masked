
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; } ;
struct TYPE_3__ {int entry_type; } ;
struct timeval {int max_elemsize; int satisf_elemsize; TYPE_2__ max_lifetime; int max_sessions; TYPE_1__ cep; int tv_sec; int policy; int confidence_threshold; int cache_entries_size; } ;
struct mp_cache_entry_params {int max_elemsize; int satisf_elemsize; TYPE_2__ max_lifetime; int max_sessions; TYPE_1__ cep; int tv_sec; int policy; int confidence_threshold; int cache_entries_size; } ;
struct configuration_entry {int dummy; } ;
struct common_cache_entry_params {int max_elemsize; int satisf_elemsize; TYPE_2__ max_lifetime; int max_sessions; TYPE_1__ cep; int tv_sec; int policy; int confidence_threshold; int cache_entries_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct configuration_entry* (*) (char const*)) ;
 int FUNC_1 (struct configuration_entry* (*) (char const*)) ;
 struct configuration_entry* FUNC_2 (char const*,struct timeval*,struct timeval*,struct timeval*,struct timeval*,struct timeval*) ;
 int FUNC_3 (struct timeval*,struct timeval*,int) ;
 int FUNC_4 (struct timeval*,int ,int) ;

struct configuration_entry *
FUNC_5(const char *VAR_16)
{
 struct common_cache_entry_params VAR_17, VAR_18;
 struct mp_cache_entry_params VAR_19;
 struct timeval VAR_20, VAR_21;

 struct configuration_entry *VAR_22 = ((void*)0);

 FUNC_0(FUNC_5);
 FUNC_4(&VAR_17, 0,
  sizeof(struct common_cache_entry_params));
 VAR_17.cep.entry_type = VAR_0;
 VAR_17.cache_entries_size = VAR_4;
 VAR_17.max_elemsize = VAR_14;
 VAR_17.satisf_elemsize = VAR_14 / 2;
 VAR_17.max_lifetime.tv_sec = VAR_15;
 VAR_17.confidence_threshold = VAR_13;
 VAR_17.policy = VAR_3;

 FUNC_3(&VAR_18, &VAR_17,
  sizeof(struct common_cache_entry_params));
 VAR_18.max_elemsize = VAR_11;
 VAR_18.satisf_elemsize = VAR_11 / 2;
 VAR_18.max_lifetime.tv_sec = VAR_12;
 VAR_18.confidence_threshold = VAR_10;
 VAR_18.policy = VAR_2;

 FUNC_4(&VAR_20, 0, sizeof(struct timeval));
 VAR_20.tv_sec = VAR_5;

 FUNC_4(&VAR_21, 0, sizeof(struct timeval));
 VAR_21.tv_sec = VAR_6;

 FUNC_4(&VAR_19, 0,
  sizeof(struct mp_cache_entry_params));
 VAR_19.cep.entry_type = VAR_1;
 VAR_19.max_elemsize = VAR_9;
 VAR_19.max_sessions = VAR_8;
 VAR_19.max_lifetime.tv_sec = VAR_7;

 VAR_22 = FUNC_2(VAR_16, &VAR_20,
  &VAR_21, &VAR_17, &VAR_18,
  &VAR_19);

 FUNC_1(FUNC_5);
 return (VAR_22);
}
