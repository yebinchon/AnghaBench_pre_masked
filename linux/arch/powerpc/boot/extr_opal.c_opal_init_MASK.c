
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {void* entry; void* base; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (void*,char*,void**,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
 void *VAR_1;

 VAR_1 = FUNC_1("/ibm,opal");
 if (!VAR_1)
  return;
 if (FUNC_2(VAR_1, "opal-base-address", &VAR_0.base, sizeof(u64)) < 0)
  return;
 VAR_0.base = FUNC_0(VAR_0.base);
 if (FUNC_2(VAR_1, "opal-entry-address", &VAR_0.entry, sizeof(u64)) < 0)
  return;
 VAR_0.entry = FUNC_0(VAR_0.entry);
}
