
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct submodule {char* ignore; int name; } ;
struct TYPE_5__ {int ignore_submodules; } ;
struct diff_options {TYPE_1__ flags; } ;
struct TYPE_6__ {int index; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct diff_options*,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*,char const**) ;
 struct submodule* FUNC_4 (TYPE_2__*,int *,char const*) ;
 TYPE_2__* VAR_1 ;
 char* FUNC_5 (char*,int ) ;

void FUNC_6(struct diff_options *VAR_2,
          const char *VAR_3)
{
 const struct submodule *VAR_4 = FUNC_4(VAR_1,
        &VAR_0, VAR_3);
 if (VAR_4) {
  const char *VAR_5;
  char *VAR_6;

  VAR_6 = FUNC_5("submodule.%s.ignore", VAR_4->name);
  if (FUNC_3(VAR_1, VAR_6, &VAR_5))
   VAR_5 = VAR_4->ignore;
  FUNC_0(VAR_6);

  if (VAR_5)
   FUNC_1(VAR_2, VAR_5);
  else if (FUNC_2(VAR_1->index))
   VAR_2->flags.ignore_submodules = 1;
 }
}
