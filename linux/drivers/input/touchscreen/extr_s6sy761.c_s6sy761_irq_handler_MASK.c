
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct s6sy761_data {int* data; TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int*) ;
 int FUNC_2 (struct s6sy761_data*,int) ;
 int FUNC_3 (struct s6sy761_data*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct s6sy761_data *VAR_7 = VAR_6;
 int VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_1(VAR_7->client,
         VAR_4,
         VAR_2,
         VAR_7->data);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_7->client->dev, "failed to read events\n");
  return VAR_0;
 }

 if (!VAR_7->data[0])
  return VAR_0;

 VAR_9 = VAR_7->data[7] & VAR_3;
 if (FUNC_4(VAR_9 > VAR_1 - 1))
  return VAR_0;

 if (VAR_9) {
  VAR_8 = FUNC_3(VAR_7, VAR_9);
  if (VAR_8 < 0) {
   FUNC_0(&VAR_7->client->dev, "failed to read events\n");
   return VAR_0;
  }
 }

 FUNC_2(VAR_7, VAR_9 + 1);

 return VAR_0;
}
