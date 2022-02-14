
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vers_num; } ;
typedef TYPE_1__ version_list ;
struct TYPE_7__ {int proc_name; int res_type; int res_prefix; } ;
typedef TYPE_2__ proc_list ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(proc_list *VAR_2, version_list *VAR_3, const char *VAR_4, int VAR_5)
{
 if (VAR_1) {
  if (VAR_5)
   FUNC_0(VAR_0, "bool_t ");
  else
   FUNC_0(VAR_0, "enum clnt_stat ");
 } else {
  FUNC_2(VAR_2->res_prefix, VAR_2->res_type, 1);
  FUNC_0(VAR_0, "* ");
 }
 if (VAR_5)
  FUNC_4(VAR_2->proc_name, VAR_3->vers_num);
 else
  FUNC_3(VAR_2->proc_name, VAR_3->vers_num);

 FUNC_1(VAR_2, VAR_4);
}
