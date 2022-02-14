
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_msg {int length; } ;
struct ssp_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct ssp_data*,struct ssp_msg*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ssp_data *VAR_2, struct ssp_msg *VAR_3,
   int VAR_4)
{
 FUNC_0(VAR_1);

 if (FUNC_1(!VAR_3->length))
  return -VAR_0;

 return FUNC_2(VAR_2, VAR_3, &VAR_1, VAR_4);
}
