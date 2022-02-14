
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sp2 {int (* ci_control ) (void*,int,int,int,int*) ;int module_access_type; void* priv; TYPE_1__* client; } ;
struct dvb_ca_en50221 {struct sp2* data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char*,int,int,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct sp2*,int,int*,int) ;
 int FUNC_3 (struct sp2*,int,int*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_ca_en50221 *VAR_4, int VAR_5, u8 VAR_6,
   u8 VAR_7, int VAR_8, u8 VAR_9)
{
 struct sp2 *VAR_10 = VAR_4->data;
 u8 VAR_11;
 int VAR_12, VAR_13;
 int (*VAR_14)(void*, u8, int, u8, int*) = VAR_10->ci_control;

 if (VAR_5 != 0)
  return -VAR_0;





 if (VAR_10->module_access_type != VAR_6) {
  VAR_13 = FUNC_2(VAR_10, 0x00, &VAR_11, 1);

  if (VAR_13)
   return VAR_13;

  VAR_11 &= ~(VAR_3 | VAR_2);
  VAR_11 |= VAR_6;

  VAR_13 = FUNC_3(VAR_10, 0x00, &VAR_11, 1);
  if (VAR_13)
   return VAR_13;
 }

 VAR_10->module_access_type = VAR_6;


 if (VAR_14) {
  VAR_13 = VAR_14(VAR_10->priv, VAR_7, VAR_8, VAR_9, &VAR_12);
 } else {
  FUNC_1(&VAR_10->client->dev, "callback not defined");
  return -VAR_0;
 }

 if (VAR_13)
  return VAR_13;

 FUNC_0(&VAR_10->client->dev, "%s: slot=%d, addr=0x%04x, %s, data=%x",
   (VAR_7) ? "read" : "write", VAR_5, VAR_8,
   (VAR_6 == VAR_1) ? "attr" : "io",
   (VAR_7) ? VAR_12 : VAR_9);

 if (VAR_7)
  return VAR_12;
 else
  return 0;

}
