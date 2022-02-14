
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bma180_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bma180_data*,int) ;
 int FUNC_1 (struct bma180_data*,int) ;
 int FUNC_2 (struct bma180_data*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct bma180_data *VAR_3)
{

 int VAR_4 = FUNC_3(VAR_3->client, VAR_0);

 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4 != VAR_1)
  return -VAR_2;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;




 FUNC_4(20);

 VAR_4 = FUNC_0(VAR_3, 0);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_3, 0);
}
