
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ads1015_data {int* data_rate; TYPE_1__* channel_data; } ;
struct TYPE_2__ {int data_rate; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct ads1015_data *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_2->data_rate[VAR_5] == VAR_4) {
   VAR_2->channel_data[VAR_3].data_rate = VAR_5;
   return 0;
  }
 }

 return -VAR_0;
}
