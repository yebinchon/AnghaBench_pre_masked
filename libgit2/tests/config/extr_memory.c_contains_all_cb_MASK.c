
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct expected_entry {int seen; scalar_t__ value; scalar_t__ name; } ;
struct TYPE_3__ {int value; int name; } ;
typedef TYPE_1__ git_config_entry ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(const git_config_entry *VAR_0, void *VAR_1)
{
 struct expected_entry *VAR_2 = (struct expected_entry *) VAR_1;
 int VAR_3;

 for (VAR_3 = 0; VAR_2[VAR_3].name; VAR_3++) {
  if (FUNC_1(VAR_2[VAR_3].name, VAR_0->name) ||
      FUNC_1(VAR_2[VAR_3].value , VAR_0->value))
   continue;

  if (VAR_2[VAR_3].seen)
   FUNC_0("Entry seen more than once");
  VAR_2[VAR_3].seen = 1;
  return 0;
 }

 FUNC_0("Unexpected entry");
 return -1;
}
