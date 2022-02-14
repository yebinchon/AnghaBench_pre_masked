
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bma150_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct bma150_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->client, 1, VAR_1,
    VAR_0, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_1(2000, 2100);
 return 0;
}
