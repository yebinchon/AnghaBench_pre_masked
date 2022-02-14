
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_msi_priv_data {scalar_t__ devid; struct device* dev; scalar_t__ write_msg; } ;
struct device {TYPE_1__* msi_domain; } ;
typedef scalar_t__ irq_write_msi_msg_t ;
struct TYPE_2__ {scalar_t__ bus_token; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct platform_msi_priv_data* FUNC_0 (int) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (struct platform_msi_priv_data*) ;
 struct platform_msi_priv_data* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;

__attribute__((used)) static struct platform_msi_priv_data *
FUNC_7(struct device *VAR_8, unsigned int VAR_9,
        irq_write_msi_msg_t VAR_10)
{
 struct platform_msi_priv_data *VAR_11;






 if (!VAR_8->msi_domain || !VAR_10 || !VAR_9 || VAR_9 > VAR_6)
  return FUNC_0(-VAR_3);

 if (VAR_8->msi_domain->bus_token != VAR_1) {
  FUNC_1(VAR_8, "Incompatible msi_domain, giving up\n");
  return FUNC_0(-VAR_3);
 }


 if (!FUNC_6(FUNC_2(VAR_8)))
  return FUNC_0(-VAR_2);

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_5);
 if (!VAR_11)
  return FUNC_0(-VAR_4);

 VAR_11->devid = FUNC_3(&VAR_7,
          0, 1 << VAR_0, VAR_5);
 if (VAR_11->devid < 0) {
  int VAR_12 = VAR_11->devid;
  FUNC_4(VAR_11);
  return FUNC_0(VAR_12);
 }

 VAR_11->write_msg = VAR_10;
 VAR_11->dev = VAR_8;

 return VAR_11;
}
