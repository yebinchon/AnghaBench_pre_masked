
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {scalar_t__ base_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,char*,unsigned long long) ;
 scalar_t__ FUNC_1 (struct hfi1_devdata*,int ) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int ) ;

void FUNC_3(struct hfi1_devdata *VAR_2)
{

 FUNC_2(VAR_2, VAR_0, 0);
 (void)FUNC_1(VAR_2, VAR_0);

 VAR_2->base_guid = FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_2, "GUID %llx",
      (unsigned long long)VAR_2->base_guid);
}
