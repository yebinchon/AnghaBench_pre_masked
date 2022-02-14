
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ms_ht_dev {TYPE_1__* client; int lock; } ;
typedef int ssize_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (char const*,int,int*) ;
 int FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

ssize_t FUNC_6(struct ms_ht_dev *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 u8 VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, 10, &VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_5 > 1)
  return -VAR_0;

 FUNC_4(&VAR_2->lock);
 VAR_7 = FUNC_3(VAR_2->client, &VAR_6);
 if (VAR_7) {
  FUNC_5(&VAR_2->lock);
  return VAR_7;
 }

 VAR_6 &= 0xFB;
 VAR_6 |= VAR_5 << 2;

 VAR_7 = FUNC_1(VAR_2->client,
     VAR_1,
     VAR_6);
 FUNC_5(&VAR_2->lock);
 if (VAR_7) {
  FUNC_0(&VAR_2->client->dev, "Unable to write config register\n");
  return VAR_7;
 }

 return VAR_4;
}
