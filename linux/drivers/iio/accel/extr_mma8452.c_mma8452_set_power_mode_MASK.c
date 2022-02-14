
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mma8452_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mma8452_data*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mma8452_data *VAR_3, u8 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->client,
           VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_4 << VAR_2;

 return FUNC_1(VAR_3, VAR_0, VAR_5);
}
