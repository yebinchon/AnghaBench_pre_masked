
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdc100x_data {int config; int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hdc100x_data *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = (~VAR_2 & VAR_1->config) | VAR_3;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->client,
      VAR_0, VAR_4);
 if (!VAR_5)
  VAR_1->config = VAR_4;

 return VAR_5;
}
