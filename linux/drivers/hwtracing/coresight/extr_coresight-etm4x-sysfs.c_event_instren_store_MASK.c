
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {unsigned long eventctrl1; } ;
struct etmv4_drvdata {int nr_event; int spinlock; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 unsigned long FUNC_0 (int) ;
 size_t VAR_0 ;
 struct etmv4_drvdata* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 struct etmv4_drvdata *VAR_6 = FUNC_1(VAR_1->parent);
 struct etmv4_config *VAR_7 = &VAR_6->config;

 if (FUNC_2(VAR_3, 16, &VAR_5))
  return -VAR_0;

 FUNC_3(&VAR_6->spinlock);

 VAR_7->eventctrl1 &= ~(FUNC_0(0) | FUNC_0(1) | FUNC_0(2) | FUNC_0(3));
 switch (VAR_6->nr_event) {
 case 0x0:

  VAR_7->eventctrl1 |= VAR_5 & FUNC_0(1);
  break;
 case 0x1:

  VAR_7->eventctrl1 |= VAR_5 & (FUNC_0(0) | FUNC_0(1));
  break;
 case 0x2:

  VAR_7->eventctrl1 |= VAR_5 & (FUNC_0(0) | FUNC_0(1) | FUNC_0(2));
  break;
 case 0x3:

  VAR_7->eventctrl1 |= VAR_5 & 0xF;
  break;
 default:
  break;
 }
 FUNC_4(&VAR_6->spinlock);
 return VAR_4;
}
