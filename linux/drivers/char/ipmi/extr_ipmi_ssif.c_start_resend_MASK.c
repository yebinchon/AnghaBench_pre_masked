
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssif_info {int got_alert; int data_len; int* multi_data; int* data; int multi_len; int multi_pos; int ssif_debug; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int VAR_5 ;
 int FUNC_1 (struct ssif_info*,int ,int ,int,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct ssif_info *VAR_6)
{
 int VAR_7;
 int VAR_8;

 VAR_6->got_alert = 0;

 if (VAR_6->data_len > 32) {
  VAR_8 = VAR_3;
  VAR_6->multi_data = VAR_6->data;
  VAR_6->multi_len = VAR_6->data_len;





  VAR_6->multi_pos = 32;
  VAR_6->data[0] = 32;
 } else {
  VAR_6->multi_data = ((void*)0);
  VAR_8 = VAR_4;
  VAR_6->data[0] = VAR_6->data_len;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_1,
     VAR_8, VAR_6->data, VAR_0);
 if (VAR_7 && (VAR_6->ssif_debug & VAR_2))
  FUNC_0(&VAR_6->client->dev,
   "Error from i2c_non_blocking_op(4)\n");
 return VAR_7;
}
