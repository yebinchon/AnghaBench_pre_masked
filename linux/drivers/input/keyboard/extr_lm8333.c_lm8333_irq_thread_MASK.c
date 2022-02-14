
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm8333 {TYPE_1__* client; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct lm8333*) ;
 int FUNC_2 (struct lm8333*,int ) ;
 int FUNC_3 (struct lm8333*,int ,int,int*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_10, void *VAR_11)
{
 struct lm8333 *VAR_12 = VAR_11;
 u8 VAR_13 = FUNC_2(VAR_12, VAR_9);

 if (!VAR_13)
  return VAR_1;

 if (VAR_13 & VAR_3) {
  u8 VAR_14 = FUNC_2(VAR_12, VAR_8);

  if (VAR_14 & (VAR_4 | VAR_2)) {
   u8 VAR_15[VAR_6];

   FUNC_3(VAR_12, VAR_5,
     VAR_6, VAR_15);
  }
  FUNC_0(&VAR_12->client->dev, "Got error %02x\n", VAR_14);
 }

 if (VAR_13 & VAR_7)
  FUNC_1(VAR_12);

 return VAR_0;
}
