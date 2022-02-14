
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernow_k8_data {int currfid; } ;


 unsigned int FUNC_0 (int ) ;
 struct powernow_k8_data* FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned int,int ,int*,int) ;

__attribute__((used)) static unsigned int FUNC_3(unsigned int VAR_2)
{
 struct powernow_k8_data *VAR_3 = FUNC_1(VAR_0, VAR_2);
 unsigned int VAR_4 = 0;
 int VAR_5;

 if (!VAR_3)
  return 0;

 FUNC_2(VAR_2, VAR_1, &VAR_5, 1);
 if (VAR_5)
  goto out;

 VAR_4 = FUNC_0(VAR_3->currfid);


out:
 return VAR_4;
}
