
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us5182d_data {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct us5182d_data*) ;

__attribute__((used)) static int FUNC_2(struct us5182d_data *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_1->client,
     VAR_0);
}
