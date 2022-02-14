
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct kxcjk1013_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,char) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct kxcjk1013_data *VAR_1, int VAR_2)
{
 u8 VAR_3 = VAR_0 + VAR_2 * 2;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->client, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_1->client->dev,
   "failed to read accel_%c registers\n", 'x' + VAR_2);
  return VAR_4;
 }

 return VAR_4;
}
