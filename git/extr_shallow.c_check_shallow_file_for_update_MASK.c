
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* parsed_objects; } ;
struct TYPE_2__ {int is_shallow; int shallow_stat; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct repository*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct repository *VAR_0)
{
 if (VAR_0->parsed_objects->is_shallow == -1)
  FUNC_0("shallow must be initialized by now");

 if (!FUNC_3(VAR_0->parsed_objects->shallow_stat,
     FUNC_2(VAR_0)))
  FUNC_1("shallow file has changed since we read it");
}
