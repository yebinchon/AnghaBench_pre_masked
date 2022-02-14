
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dev; } ;
struct ps2mult_port {int serio; scalar_t__ registered; } ;
struct ps2mult {int escape; int lock; struct ps2mult_port* in_port; struct ps2mult_port* ports; struct ps2mult_port* out_port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;


 size_t VAR_1 ;

 size_t VAR_2 ;



 int FUNC_0 (int *,char*,...) ;
 struct ps2mult* FUNC_1 (struct serio*) ;
 int FUNC_2 (int ,unsigned char,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct serio *VAR_3,
         unsigned char VAR_4, unsigned int VAR_5)
{
 struct ps2mult *VAR_6 = FUNC_1(VAR_3);
 struct ps2mult_port *VAR_7;
 unsigned long VAR_8;

 FUNC_0(&VAR_3->dev, "Received %02x flags %02x\n", VAR_4, VAR_5);

 FUNC_3(&VAR_6->lock, VAR_8);

 if (VAR_6->escape) {
  VAR_6->escape = 0;
  VAR_7 = VAR_6->in_port;
  if (VAR_7->registered)
   FUNC_2(VAR_7->serio, VAR_4, VAR_5);
  goto out;
 }

 switch (VAR_4) {
 case 132:
  FUNC_0(&VAR_3->dev, "ESCAPE\n");
  VAR_6->escape = 1;
  break;

 case 133:
  FUNC_0(&VAR_3->dev, "BSYNC\n");
  VAR_6->in_port = VAR_6->out_port;
  break;

 case 128:
  FUNC_0(&VAR_3->dev, "SS\n");
  break;

 case 129:
  FUNC_0(&VAR_3->dev, "SE\n");
  break;

 case 131:
  FUNC_0(&VAR_3->dev, "KB\n");
  VAR_6->in_port = &VAR_6->ports[VAR_1];
  break;

 case 130:
  FUNC_0(&VAR_3->dev, "MS\n");
  VAR_6->in_port = &VAR_6->ports[VAR_2];
  break;

 default:
  VAR_7 = VAR_6->in_port;
  if (VAR_7->registered)
   FUNC_2(VAR_7->serio, VAR_4, VAR_5);
  break;
 }

 out:
 FUNC_4(&VAR_6->lock, VAR_8);
 return VAR_0;
}
