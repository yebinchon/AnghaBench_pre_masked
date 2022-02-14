
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serio {struct pcips2_data* port_data; } ;
struct pcips2_data {int base; TYPE_1__* dev; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct pcips2_data*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,char*,struct pcips2_data*) ;

__attribute__((used)) static int FUNC_3(struct serio *VAR_4)
{
 struct pcips2_data *VAR_5 = VAR_4->port_data;
 int VAR_6, VAR_7 = 0;

 FUNC_0(VAR_1, VAR_5->base);
 FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_5->dev->irq, VAR_3, VAR_0,
     "pcips2", VAR_5);
 if (VAR_6 == 0)
  VAR_7 = VAR_1 | VAR_2;

 FUNC_0(VAR_7, VAR_5->base);

 return VAR_6;
}
