
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* config; } ;
struct TYPE_2__ {int hash_initialized; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct repository *VAR_0)
{
 if (!VAR_0->config || !VAR_0->config->hash_initialized)
  return;
 FUNC_0(VAR_0->config);
}
