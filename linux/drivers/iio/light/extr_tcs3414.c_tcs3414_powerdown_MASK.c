
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs3414_data {int control; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct tcs3414_data *VAR_3)
{
 return FUNC_0(VAR_3->client, VAR_0,
  VAR_3->control & ~(VAR_2 |
  VAR_1));
}
