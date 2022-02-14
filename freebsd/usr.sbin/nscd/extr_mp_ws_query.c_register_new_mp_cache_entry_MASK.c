
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct query_state {TYPE_3__* config_entry; } ;
struct cache_entry_params {int dummy; } ;
typedef int cache_entry ;
struct TYPE_6__ {char* entry_name; } ;
struct TYPE_7__ {TYPE_1__ cep; } ;
struct TYPE_8__ {TYPE_2__ mp_cache_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int (*) (struct query_state*,char const*)) ;
 int FUNC_1 (int (*) (struct query_state*,char const*)) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (int ,struct cache_entry_params*) ;
 int VAR_2 ;
 int VAR_3 ;

cache_entry FUNC_10(struct query_state *VAR_4,
 const char *VAR_5)
{
 cache_entry VAR_6;
 char *VAR_7;

 FUNC_0(FUNC_10);
 VAR_6 = VAR_1;
 FUNC_3(VAR_4->config_entry, VAR_0);

 FUNC_5(VAR_3);
 VAR_7 = VAR_4->config_entry->mp_cache_params.cep.entry_name;
 VAR_4->config_entry->mp_cache_params.cep.entry_name =
  (char *)VAR_5;
 FUNC_9(VAR_2, (struct cache_entry_params *)
  &VAR_4->config_entry->mp_cache_params);
 VAR_4->config_entry->mp_cache_params.cep.entry_name = VAR_7;
 FUNC_6(VAR_3);

 FUNC_4(VAR_3);
 VAR_6 = FUNC_8(VAR_2,
  VAR_5);
 FUNC_6(VAR_3);

 FUNC_2(VAR_4->config_entry,
  VAR_6);

 FUNC_7(VAR_4->config_entry,
  VAR_0);

 FUNC_1(FUNC_10);
 return (VAR_6);
}
