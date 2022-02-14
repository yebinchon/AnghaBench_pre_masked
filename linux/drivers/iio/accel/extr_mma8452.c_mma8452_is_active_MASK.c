
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mma8452_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->client, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 return VAR_3 & VAR_0;
}
