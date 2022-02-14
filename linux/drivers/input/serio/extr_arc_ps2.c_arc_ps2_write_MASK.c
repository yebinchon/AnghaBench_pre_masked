
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dev; struct arc_ps2_port* port_data; } ;
struct arc_ps2_port {int data_addr; int status_addr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char,int ) ;

__attribute__((used)) static int FUNC_4(struct serio *VAR_3, unsigned char VAR_4)
{
 unsigned VAR_5;
 struct arc_ps2_port *VAR_6 = VAR_3->port_data;
 int VAR_7 = VAR_2;

 do {
  VAR_5 = FUNC_2(VAR_6->status_addr);
  FUNC_0();

  if (VAR_5 & VAR_1) {
   FUNC_3(VAR_4 & 0xff, VAR_6->data_addr);
   return 0;
  }

 } while (--VAR_7);

 FUNC_1(&VAR_3->dev, "write timeout\n");
 return -VAR_0;
}
