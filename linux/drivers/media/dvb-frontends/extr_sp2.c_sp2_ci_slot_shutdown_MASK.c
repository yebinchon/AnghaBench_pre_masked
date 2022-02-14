
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sp2 {TYPE_1__* client; } ;
struct dvb_ca_en50221 {struct sp2* data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;

int FUNC_1(struct dvb_ca_en50221 *VAR_0, int VAR_1)
{
 struct sp2 *VAR_2 = VAR_0->data;

 FUNC_0(&VAR_2->client->dev, "slot:%d\n", VAR_1);


 return 0;
}
