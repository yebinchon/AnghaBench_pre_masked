
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct cht_wc_i2c_adap {int irq_mask; int read_data; int io_error; int done; int client_irq; int wait; int adap_lock; TYPE_1__ adapter; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_7, void *VAR_8)
{
 struct cht_wc_i2c_adap *VAR_9 = VAR_8;
 int VAR_10, VAR_11;

 FUNC_4(&VAR_9->adap_lock);


 VAR_10 = FUNC_6(VAR_9->regmap, VAR_0, &VAR_11);
 if (VAR_10) {
  FUNC_0(&VAR_9->adapter.dev, "Error reading extchgrirq reg\n");
  FUNC_5(&VAR_9->adap_lock);
  return VAR_6;
 }

 VAR_11 &= ~VAR_9->irq_mask;


 VAR_10 = FUNC_6(VAR_9->regmap, VAR_4, &VAR_9->read_data);
 if (VAR_10)
  VAR_9->io_error = 1;





 VAR_10 = FUNC_7(VAR_9->regmap, VAR_0, VAR_11);
 if (VAR_10)
  FUNC_0(&VAR_9->adapter.dev, "Error writing extchgrirq reg\n");

 if (VAR_11 & VAR_1) {
  VAR_9->io_error |= !!(VAR_11 & VAR_3);
  VAR_9->done = 1;
 }

 FUNC_5(&VAR_9->adap_lock);

 if (VAR_11 & VAR_1)
  FUNC_8(&VAR_9->wait);







 if (VAR_11 & VAR_2) {




  FUNC_2();
  FUNC_1(VAR_9->client_irq);
  FUNC_3();
 }

 return VAR_5;
}
