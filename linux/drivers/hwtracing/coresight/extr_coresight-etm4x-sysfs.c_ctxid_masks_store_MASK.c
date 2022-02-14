
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct etmv4_config {unsigned long ctxid_mask0; unsigned long ctxid_mask1; int* ctxid_pid; } ;
struct etmv4_drvdata {int numcidc; int spinlock; int ctxid_size; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*,unsigned long*,unsigned long*) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13;
 struct etmv4_drvdata *VAR_14 = FUNC_0(VAR_4->parent);
 struct etmv4_config *VAR_15 = &VAR_14->config;





 if (FUNC_4(VAR_2) != &VAR_3)
  return -VAR_0;






 if (!VAR_14->ctxid_size || !VAR_14->numcidc)
  return -VAR_0;
 if (FUNC_3(VAR_6, "%lx %lx", &VAR_11, &VAR_12) != 2)
  return -VAR_0;

 FUNC_1(&VAR_14->spinlock);




 switch (VAR_14->numcidc) {
 case 0x1:

  VAR_15->ctxid_mask0 = VAR_11 & 0xFF;
  break;
 case 0x2:

  VAR_15->ctxid_mask0 = VAR_11 & 0xFFFF;
  break;
 case 0x3:

  VAR_15->ctxid_mask0 = VAR_11 & 0xFFFFFF;
  break;
 case 0x4:

  VAR_15->ctxid_mask0 = VAR_11;
  break;
 case 0x5:

  VAR_15->ctxid_mask0 = VAR_11;
  VAR_15->ctxid_mask1 = VAR_12 & 0xFF;
  break;
 case 0x6:

  VAR_15->ctxid_mask0 = VAR_11;
  VAR_15->ctxid_mask1 = VAR_12 & 0xFFFF;
  break;
 case 0x7:

  VAR_15->ctxid_mask0 = VAR_11;
  VAR_15->ctxid_mask1 = VAR_12 & 0xFFFFFF;
  break;
 case 0x8:

  VAR_15->ctxid_mask0 = VAR_11;
  VAR_15->ctxid_mask1 = VAR_12;
  break;
 default:
  break;
 }






 VAR_13 = VAR_15->ctxid_mask0;
 for (VAR_8 = 0; VAR_8 < VAR_14->numcidc; VAR_8++) {

  VAR_10 = VAR_13 & VAR_1;




  for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
   if (VAR_10 & 1)
    VAR_15->ctxid_pid[VAR_8] &= ~(0xFFUL << (VAR_9 * 8));
   VAR_10 >>= 1;
  }

  if (VAR_8 == 3)

   VAR_13 = VAR_15->ctxid_mask1;
  else
   VAR_13 >>= 0x8;
 }

 FUNC_2(&VAR_14->spinlock);
 return VAR_7;
}
