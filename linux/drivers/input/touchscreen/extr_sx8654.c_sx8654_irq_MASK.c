
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sx8654 {TYPE_1__* client; int input; int props; } ;
typedef int irqreturn_t ;
typedef int data ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (TYPE_1__*,int*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct sx8654 *VAR_8 = VAR_7;
 int VAR_9;
 u8 VAR_10[4];
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 VAR_9 = FUNC_2(VAR_8->client,
       VAR_1 | VAR_2);
 FUNC_0(&VAR_8->client->dev, "irqsrc = 0x%x", VAR_9);

 if (VAR_9 < 0)
  goto out;

 if (VAR_9 & VAR_4) {
  FUNC_0(&VAR_8->client->dev, "pen release interrupt");

  FUNC_3(VAR_8->input, VAR_0, 0);
  FUNC_4(VAR_8->input);
 }

 if (VAR_9 & VAR_5) {
  FUNC_0(&VAR_8->client->dev, "pen touch interrupt");

  VAR_13 = FUNC_1(VAR_8->client, VAR_10, sizeof(VAR_10));
  if (VAR_13 != sizeof(VAR_10))
   goto out;


  if (FUNC_6(VAR_10[0] & 0x80 || VAR_10[2] & 0x80))
   goto out;

  VAR_11 = ((VAR_10[0] & 0xf) << 8) | (VAR_10[1]);
  VAR_12 = ((VAR_10[2] & 0xf) << 8) | (VAR_10[3]);

  FUNC_5(VAR_8->input, &VAR_8->props, VAR_11, VAR_12,
           0);
  FUNC_3(VAR_8->input, VAR_0, 1);
  FUNC_4(VAR_8->input);

  FUNC_0(&VAR_8->client->dev, "point(%4d,%4d)\n", VAR_11, VAR_12);
 }

out:
 return VAR_3;
}
