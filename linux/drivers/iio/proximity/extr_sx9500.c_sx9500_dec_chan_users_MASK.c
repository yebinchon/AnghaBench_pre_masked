
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx9500_data {int * channel_users; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sx9500_data*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sx9500_data *VAR_1, int VAR_2)
{
 return FUNC_1(VAR_1, &VAR_1->channel_users[VAR_2],
    VAR_0, FUNC_0(VAR_2));
}
