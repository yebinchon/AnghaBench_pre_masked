
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpl3115_data {int ctrl_reg1; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mpl3115_data *VAR_2)
{
 return FUNC_0(VAR_2->client, VAR_1,
  VAR_2->ctrl_reg1 & ~VAR_0);
}
