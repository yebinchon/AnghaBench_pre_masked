
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {int dummy; } ;
struct named_object {int dummy; } ;
struct table_config {struct named_object no; } ;
struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int FUNC_2 (int ,struct tid_info*,struct table_config**) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_0, struct tid_info *VAR_1,
    struct named_object **VAR_2)
{
 struct table_config *VAR_3;
 int VAR_4;

 FUNC_1(VAR_0);

 VAR_4 = FUNC_2(FUNC_0(VAR_0), VAR_1, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);

 *VAR_2 = &VAR_3->no;
 return (0);
}
