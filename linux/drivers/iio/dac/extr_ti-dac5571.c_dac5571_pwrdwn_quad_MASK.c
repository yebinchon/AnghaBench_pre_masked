
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dac5571_data {int* buf; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dac5571_data *VAR_5, int VAR_6, u8 VAR_7)
{
 VAR_5->buf[2] = 0;
 VAR_5->buf[1] = VAR_7 << VAR_3;
 VAR_5->buf[0] = (VAR_6 << VAR_0) |
         VAR_1 | VAR_2;

 if (FUNC_0(VAR_5->client, VAR_5->buf, 3) != 3)
  return -VAR_4;

 return 0;
}
