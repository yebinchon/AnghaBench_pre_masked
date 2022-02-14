
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int error_if_no_space; } ;
struct pool {int pool_md; TYPE_2__* ti; TYPE_1__ pf; } ;
typedef enum pool_mode { ____Placeholder_pool_mode } pool_mode ;
struct TYPE_4__ {int table; } ;


 int FUNC_0 (char*,int ,char const*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pool*) ;

__attribute__((used)) static void FUNC_4(struct pool *VAR_1)
{
 const char *VAR_2[] = {
  "write",
  "out-of-data-space",
  "read-only",
  "read-only",
  "fail"
 };
 const char *VAR_3 = ((void*)0);
 enum pool_mode VAR_4 = FUNC_3(VAR_1);

 if (VAR_4 == VAR_0) {
  if (!VAR_1->pf.error_if_no_space)
   VAR_3 = " (queue IO)";
  else
   VAR_3 = " (error IO)";
 }

 FUNC_2(VAR_1->ti->table);
 FUNC_0("%s: switching pool to %s%s mode",
        FUNC_1(VAR_1->pool_md),
        VAR_2[(int)VAR_4], VAR_3 ? : "");
}
