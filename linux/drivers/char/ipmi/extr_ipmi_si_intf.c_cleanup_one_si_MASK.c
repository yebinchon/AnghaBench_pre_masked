
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {scalar_t__ intf; int link; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct smi_info*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct smi_info *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(&VAR_0->link);

 if (VAR_0->intf)
  FUNC_0(VAR_0->intf);

 FUNC_1(VAR_0);
}
