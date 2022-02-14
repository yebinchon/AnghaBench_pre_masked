
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_msg {int dummy; } ;
struct ssp_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (struct ssp_msg*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ssp_msg*) ;
 struct ssp_msg* FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (struct ssp_data*,struct ssp_msg*,int) ;

int FUNC_4(struct ssp_data *VAR_3)
{
 int VAR_4;
 char VAR_5;
 struct ssp_msg *VAR_6;

 VAR_6 = FUNC_2(VAR_2, 1, VAR_1, 0);
 if (!VAR_6)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_3, VAR_6, 1000);

 VAR_5 = FUNC_0(VAR_6, 0);

 FUNC_1(VAR_6);

 return VAR_4 < 0 ? VAR_4 : VAR_5;
}
