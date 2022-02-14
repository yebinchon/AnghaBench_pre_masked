
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct submodule_update_strategy {scalar_t__ type; int command; } ;
struct TYPE_2__ {scalar_t__ type; int command; } ;
struct submodule {TYPE_1__ update_strategy; int name; } ;
struct repository {int dummy; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char const*,struct submodule_update_strategy*) ;
 int FUNC_4 (struct repository*,char*,char const**) ;
 struct submodule* FUNC_5 (struct repository*,int *,char const*) ;
 char* FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(struct repository *VAR_6,
      int VAR_7,
      const char *VAR_8,
      const char *VAR_9,
      struct submodule_update_strategy *VAR_10)
{
 const struct submodule *VAR_11 = FUNC_5(VAR_6, &VAR_5, VAR_8);
 char *VAR_12;
 const char *VAR_13;

 VAR_12 = FUNC_6("submodule.%s.update", VAR_11->name);

 if (VAR_9) {
  if (FUNC_3(VAR_9, VAR_10) < 0)
   FUNC_1(FUNC_0("Invalid update mode '%s' for submodule path '%s'"),
    VAR_9, VAR_8);
 } else if (!FUNC_4(VAR_6, VAR_12, &VAR_13)) {
  if (FUNC_3(VAR_13, VAR_10) < 0)
   FUNC_1(FUNC_0("Invalid update mode '%s' configured for submodule path '%s'"),
    VAR_13, VAR_8);
 } else if (VAR_11->update_strategy.type != VAR_4) {
  VAR_10->type = VAR_11->update_strategy.type;
  VAR_10->command = VAR_11->update_strategy.command;
 } else
  VAR_10->type = VAR_0;

 if (VAR_7 &&
     (VAR_10->type == VAR_1 ||
      VAR_10->type == VAR_3 ||
      VAR_10->type == VAR_2))
  VAR_10->type = VAR_0;

 FUNC_2(VAR_12);
}
