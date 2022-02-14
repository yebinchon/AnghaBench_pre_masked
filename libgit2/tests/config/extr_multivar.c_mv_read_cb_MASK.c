
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ git_config_entry ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const git_config_entry *VAR_1, void *VAR_2)
{
 int *VAR_3 = (int *) VAR_2;

 if (!FUNC_0(VAR_1->name, VAR_0))
  (*VAR_3)++;

 return 0;
}
