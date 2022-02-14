
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ms_ht_dev {size_t res_index; TYPE_1__* client; int lock; } ;
typedef int s64 ;
typedef int s32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int*) ;
 int FUNC_2 (int) ;
 int * VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ms_ht_dev *VAR_4,
       s32 *VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 u16 VAR_8;

 FUNC_3(&VAR_4->lock);
 VAR_8 = VAR_3[VAR_4->res_index];
 VAR_6 = FUNC_1(VAR_4->client,
       VAR_1,
       VAR_2,
       VAR_8, &VAR_7);
 FUNC_4(&VAR_4->lock);
 if (VAR_6)
  return VAR_6;

 if (!FUNC_2(VAR_7)) {
  FUNC_0(&VAR_4->client->dev,
   "Temperature read crc check error\n");
  return -VAR_0;
 }


 *VAR_5 = (((s64)(VAR_7 >> 8) * 175720) >> 16) - 46850;

 return 0;
}
