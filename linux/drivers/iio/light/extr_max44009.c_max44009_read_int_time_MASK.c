
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max44009_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct max44009_data *VAR_3)
{

 int VAR_4 = FUNC_0(VAR_3->client, VAR_1);

 if (VAR_4 < 0)
  return VAR_4;

 return VAR_2[VAR_4 & VAR_0];
}
