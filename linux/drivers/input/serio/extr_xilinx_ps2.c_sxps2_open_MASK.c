
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xps2data {scalar_t__ base_address; int irq; int dev; } ;
struct serio {struct xps2data* port_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int *,int ,int ,struct xps2data*) ;
 int VAR_5 ;
 int FUNC_3 (struct xps2data*,int *) ;

__attribute__((used)) static int FUNC_4(struct serio *VAR_6)
{
 struct xps2data *VAR_7 = VAR_6->port_data;
 int VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_2(VAR_7->irq, &VAR_5, 0,
    VAR_0, VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_7->dev,
   "Couldn't allocate interrupt %d\n", VAR_7->irq);
  return VAR_8;
 }


 FUNC_1(VAR_7->base_address + VAR_2, VAR_1);
 FUNC_1(VAR_7->base_address + VAR_3, VAR_4);
 (void)FUNC_3(VAR_7, &VAR_9);

 return 0;
}
