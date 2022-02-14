
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct cache {TYPE_1__ features; int cmd; } ;
typedef enum cache_metadata_mode { ____Placeholder_cache_metadata_mode } cache_metadata_mode ;





 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct cache*) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cache*) ;
 int FUNC_6 (struct cache*,int) ;

__attribute__((used)) static void FUNC_7(struct cache *VAR_0, enum cache_metadata_mode VAR_1)
{
 bool VAR_2;
 enum cache_metadata_mode VAR_3 = FUNC_5(VAR_0);

 if (FUNC_2(VAR_0->cmd, &VAR_2)) {
  FUNC_0("%s: unable to read needs_check flag, setting failure mode.",
        FUNC_1(VAR_0));
  VAR_1 = 130;
 }

 if (VAR_1 == 128 && VAR_2) {
  FUNC_0("%s: unable to switch cache to write mode until repaired.",
        FUNC_1(VAR_0));
  if (VAR_3 != VAR_1)
   VAR_1 = VAR_3;
  else
   VAR_1 = 129;
 }


 if (VAR_3 == 130)
  VAR_1 = 130;

 switch (VAR_1) {
 case 130:
 case 129:
  FUNC_3(VAR_0->cmd);
  break;

 case 128:
  FUNC_4(VAR_0->cmd);
  break;
 }

 VAR_0->features.mode = VAR_1;

 if (VAR_1 != VAR_3)
  FUNC_6(VAR_0, VAR_1);
}
