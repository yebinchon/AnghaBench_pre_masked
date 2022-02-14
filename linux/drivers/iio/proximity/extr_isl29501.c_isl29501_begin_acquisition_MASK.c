
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isl29501_private {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct isl29501_private *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->client,
     VAR_0,
     VAR_1);
 if (VAR_3 < 0)
  FUNC_0(&VAR_2->client->dev,
   "cannot begin acquisition %d\n", VAR_3);

 return VAR_3;
}
