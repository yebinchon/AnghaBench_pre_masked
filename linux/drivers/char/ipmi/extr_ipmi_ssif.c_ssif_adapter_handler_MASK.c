
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_addr_info {int adapter_name; int binfo; int added_client; } ;
struct device {int * type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, void *VAR_2)
{
 struct ssif_addr_info *VAR_3 = VAR_2;

 if (VAR_1->type != &VAR_0)
  return 0;

 VAR_3->added_client = FUNC_0(FUNC_1(VAR_1),
       &VAR_3->binfo);

 if (!VAR_3->adapter_name)
  return 1;
 return 0;
}
