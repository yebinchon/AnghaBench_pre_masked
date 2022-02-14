
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etm_config {unsigned long mode; int ctrl; int enable_ctrl1; } ;
struct etm_drvdata {int etmccr; int etmccer; int spinlock; struct etm_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct etm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct etm_config*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_20,
     struct device_attribute *VAR_21,
     const char *VAR_22, size_t VAR_23)
{
 int VAR_24;
 unsigned long VAR_25;
 struct etm_drvdata *VAR_26 = FUNC_0(VAR_20->parent);
 struct etm_config *VAR_27 = &VAR_26->config;

 VAR_24 = FUNC_3(VAR_22, 16, &VAR_25);
 if (VAR_24)
  return VAR_24;

 FUNC_4(&VAR_26->spinlock);
 VAR_27->mode = VAR_25 & VAR_10;

 if (VAR_27->mode & VAR_14)
  VAR_27->enable_ctrl1 |= VAR_9;
 else
  VAR_27->enable_ctrl1 &= ~VAR_9;

 if (VAR_27->mode & VAR_13)
  VAR_27->ctrl |= VAR_5;
 else
  VAR_27->ctrl &= ~VAR_5;

 if (VAR_27->mode & VAR_18) {
  if (!(VAR_26->etmccr & VAR_2)) {
   FUNC_1(VAR_20, "stall mode not supported\n");
   VAR_24 = -VAR_0;
   goto err_unlock;
  }
  VAR_27->ctrl |= VAR_7;
 } else
  VAR_27->ctrl &= ~VAR_7;

 if (VAR_27->mode & VAR_19) {
  if (!(VAR_26->etmccer & VAR_1)) {
   FUNC_1(VAR_20, "timestamp not supported\n");
   VAR_24 = -VAR_0;
   goto err_unlock;
  }
  VAR_27->ctrl |= VAR_8;
 } else
  VAR_27->ctrl &= ~VAR_8;

 if (VAR_27->mode & VAR_12)
  VAR_27->ctrl |= VAR_4;
 else
  VAR_27->ctrl &= ~VAR_4;

 if (VAR_27->mode & VAR_11)
  VAR_27->ctrl |= VAR_3;
 else
  VAR_27->ctrl &= ~VAR_3;

 if (VAR_27->mode & VAR_17)
  VAR_27->ctrl |= VAR_6;
 else
  VAR_27->ctrl &= ~VAR_6;

 if (VAR_27->mode & (VAR_15 | VAR_16))
  FUNC_2(VAR_27);

 FUNC_5(&VAR_26->spinlock);

 return VAR_23;

err_unlock:
 FUNC_5(&VAR_26->spinlock);
 return VAR_24;
}
