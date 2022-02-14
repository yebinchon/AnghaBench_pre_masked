
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int value; } ;
typedef TYPE_1__ git_config_entry ;
struct TYPE_5__ {int name; int path; } ;
typedef TYPE_2__ fbp_data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int) ;
 char* FUNC_2 (int ,char) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (int ,char) ;

__attribute__((used)) static int FUNC_5(const git_config_entry *VAR_0, void *VAR_1)
{
 fbp_data *VAR_2 = VAR_1;

 if (!FUNC_3(VAR_0->value, VAR_2->path)) {
  const char *VAR_3, *VAR_4;
  VAR_3 = FUNC_2(VAR_0->name, '.');
  VAR_4 = FUNC_4(VAR_0->name, '.');
  VAR_2->name = FUNC_1(VAR_3 + 1, VAR_4 - VAR_3 - 1);
  FUNC_0(VAR_2->name);
 }

 return 0;
}
