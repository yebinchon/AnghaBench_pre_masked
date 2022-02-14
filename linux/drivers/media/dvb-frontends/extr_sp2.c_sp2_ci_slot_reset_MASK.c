
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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sp2*,int,int*,int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct dvb_ca_en50221 *VAR_2, int VAR_3)
{
 struct sp2 *VAR_4 = VAR_2->data;
 u8 VAR_5;
 int VAR_6;

 FUNC_0(&VAR_4->client->dev, "slot: %d\n", VAR_3);

 if (VAR_3 != 0)
  return -VAR_0;


 VAR_5 = VAR_1;
 VAR_6 = FUNC_2(VAR_4, 0x00, &VAR_5, 1);

 if (VAR_6)
  return VAR_6;

 FUNC_3(500, 600);


 VAR_5 = 0x00;
 VAR_6 = FUNC_2(VAR_4, 0x00, &VAR_5, 1);

 if (VAR_6)
  return VAR_6;

 FUNC_1(1000);

 return 0;
}
