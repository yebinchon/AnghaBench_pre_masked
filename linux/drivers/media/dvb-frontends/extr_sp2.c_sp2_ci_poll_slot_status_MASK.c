
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sp2 {int status; scalar_t__ next_status_checked_time; TYPE_1__* client; } ;
struct dvb_ca_en50221 {struct sp2* data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sp2*,int,int*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

int FUNC_4(struct dvb_ca_en50221 *VAR_4,
    int VAR_5, int VAR_6)
{
 struct sp2 *VAR_7 = VAR_4->data;
 u8 VAR_8[2];
 int VAR_9;

 FUNC_0(&VAR_7->client->dev, "slot:%d open:%d\n", VAR_5, VAR_6);





 if (FUNC_3(VAR_3, VAR_7->next_status_checked_time)) {
  VAR_9 = FUNC_2(VAR_7, 0x00, VAR_8, 1);
  VAR_7->next_status_checked_time = VAR_3 + FUNC_1(1000);

  if (VAR_9)
   return 0;

  if (VAR_8[0] & VAR_2)
   VAR_7->status = VAR_0 |
     VAR_1;
  else
   VAR_7->status = 0;
 }

 return VAR_7->status;
}
