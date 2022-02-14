
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dac5571_data {int* buf; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dac5571_data *VAR_2, int VAR_3, u8 VAR_4)
{
 VAR_2->buf[1] = 0;
 VAR_2->buf[0] = VAR_4 << VAR_0;

 if (FUNC_0(VAR_2->client, VAR_2->buf, 2) != 2)
  return -VAR_1;

 return 0;
}
