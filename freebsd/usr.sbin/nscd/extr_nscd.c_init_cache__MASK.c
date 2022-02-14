
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int entry_name; } ;
struct TYPE_8__ {TYPE_3__ cep; } ;
struct TYPE_5__ {int entry_name; } ;
struct TYPE_6__ {TYPE_1__ cep; } ;
struct configuration_entry {scalar_t__ positive_cache_entry; scalar_t__ negative_cache_entry; TYPE_4__ negative_cache_params; TYPE_2__ positive_cache_params; } ;
struct configuration {int dummy; } ;
struct cache_params {int get_time_func; } ;
struct cache_entry_params {int dummy; } ;
typedef int cache ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int (*) (struct configuration*)) ;
 int FUNC_2 (int (*) (struct configuration*)) ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (struct configuration*) ;
 struct configuration_entry* FUNC_5 (struct configuration*,size_t) ;
 void* FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct cache_params*) ;
 int FUNC_8 (struct cache_params*,int ,int) ;
 int FUNC_9 (int ,struct cache_entry_params*) ;

__attribute__((used)) static cache
FUNC_10(struct configuration *VAR_2)
{
 struct cache_params VAR_3;
 cache VAR_4;

 struct configuration_entry *VAR_5;
 size_t VAR_6, VAR_7;
 int VAR_8;

 FUNC_1(FUNC_10);

 FUNC_8(&VAR_3, 0, sizeof(struct cache_params));
 VAR_3.get_time_func = VAR_1;
 VAR_4 = FUNC_7(&VAR_3);

 VAR_6 = FUNC_4(VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  VAR_5 = FUNC_5(VAR_2, VAR_7);




  VAR_8 = FUNC_9(VAR_4, (struct cache_entry_params *)
   &VAR_5->positive_cache_params);
  VAR_5->positive_cache_entry = FUNC_6(VAR_4,
   VAR_5->positive_cache_params.cep.entry_name);
  FUNC_3(VAR_5->positive_cache_entry !=
   VAR_0);

  VAR_8 = FUNC_9(VAR_4, (struct cache_entry_params *)
   &VAR_5->negative_cache_params);
  VAR_5->negative_cache_entry = FUNC_6(VAR_4,
   VAR_5->negative_cache_params.cep.entry_name);
  FUNC_3(VAR_5->negative_cache_entry !=
   VAR_0);
 }

 FUNC_0("cache", "cache was successfully initialized");
 FUNC_2(FUNC_10);
 return (VAR_4);
}
