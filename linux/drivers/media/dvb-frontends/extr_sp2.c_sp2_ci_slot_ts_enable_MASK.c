
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sp2 {TYPE_1__* client; } ;
struct dvb_ca_en50221 {struct sp2* data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct sp2*,int,int*,int) ;
 int FUNC_2 (struct sp2*,int ,int*,int) ;

int FUNC_3(struct dvb_ca_en50221 *VAR_3, int VAR_4)
{
 struct sp2 *VAR_5 = VAR_3->data;
 u8 VAR_6;

 FUNC_0(&VAR_5->client->dev, "slot:%d\n", VAR_4);

 if (VAR_4 != 0)
  return -VAR_0;

 FUNC_1(VAR_5, 0x00, &VAR_6, 1);


 VAR_6 |= (VAR_2 | VAR_1);
 return FUNC_2(VAR_5, 0, &VAR_6, 1);
}
