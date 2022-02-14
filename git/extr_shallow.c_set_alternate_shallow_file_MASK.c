
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {TYPE_1__* parsed_objects; } ;
struct TYPE_2__ {int is_shallow; scalar_t__ alternate_shallow_file; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

void FUNC_3(struct repository *VAR_0, const char *VAR_1, int VAR_2)
{
 if (VAR_0->parsed_objects->is_shallow != -1)
  FUNC_0("is_repository_shallow must not be called before set_alternate_shallow_file");
 if (VAR_0->parsed_objects->alternate_shallow_file && !VAR_2)
  return;
 FUNC_1(VAR_0->parsed_objects->alternate_shallow_file);
 VAR_0->parsed_objects->alternate_shallow_file = FUNC_2(VAR_1);
}
