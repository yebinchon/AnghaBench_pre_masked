
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct dac5571_data {unsigned int* buf; int client; TYPE_1__* spec; } ;
struct TYPE_2__ {int resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dac5571_data *VAR_3, int VAR_4, u16 VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = 16 - VAR_3->spec->resolution;
 VAR_3->buf[2] = VAR_5 << VAR_6;
 VAR_3->buf[1] = (VAR_5 >> (8 - VAR_6));
 VAR_3->buf[0] = (VAR_4 << VAR_0) |
         VAR_1;

 if (FUNC_0(VAR_3->client, VAR_3->buf, 3) != 3)
  return -VAR_2;

 return 0;
}
