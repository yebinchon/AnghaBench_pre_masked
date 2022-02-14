
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct dac5571_data {unsigned int* buf; int client; TYPE_1__* spec; } ;
struct TYPE_2__ {int resolution; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_1(struct dac5571_data *VAR_1, int VAR_2, u16 VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = 12 - VAR_1->spec->resolution;
 VAR_1->buf[1] = VAR_3 << VAR_4;
 VAR_1->buf[0] = VAR_3 >> (8 - VAR_4);

 if (FUNC_0(VAR_1->client, VAR_1->buf, 2) != 2)
  return -VAR_0;

 return 0;
}
