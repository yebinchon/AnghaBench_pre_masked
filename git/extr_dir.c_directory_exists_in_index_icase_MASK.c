
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct cache_entry {int ce_mode; } ;
typedef enum exist_status { ____Placeholder_exist_status } exist_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct index_state*,char const*,int) ;
 int VAR_1 ;
 struct cache_entry* FUNC_2 (struct index_state*,char const*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum exist_status FUNC_3(struct index_state *VAR_4,
        const char *VAR_5, int VAR_6)
{
 struct cache_entry *VAR_7;

 if (FUNC_1(VAR_4, VAR_5, VAR_6))
  return VAR_1;

 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_0);
 if (VAR_7 && FUNC_0(VAR_7->ce_mode))
  return VAR_2;

 return VAR_3;
}
