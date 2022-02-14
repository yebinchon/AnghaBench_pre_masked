
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct etmv4_config {unsigned long vmid_mask0; unsigned long vmid_mask1; int* vmid_val; } ;
struct etmv4_drvdata {int numvmidc; int spinlock; int vmid_size; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*,unsigned long*,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 struct etmv4_drvdata *VAR_12 = FUNC_0(VAR_2->parent);
 struct etmv4_config *VAR_13 = &VAR_12->config;





 if (!VAR_12->vmid_size || !VAR_12->numvmidc)
  return -VAR_0;
 if (FUNC_3(VAR_4, "%lx %lx", &VAR_9, &VAR_10) != 2)
  return -VAR_0;

 FUNC_1(&VAR_12->spinlock);





 switch (VAR_12->numvmidc) {
 case 0x1:

  VAR_13->vmid_mask0 = VAR_9 & 0xFF;
  break;
 case 0x2:

  VAR_13->vmid_mask0 = VAR_9 & 0xFFFF;
  break;
 case 0x3:

  VAR_13->vmid_mask0 = VAR_9 & 0xFFFFFF;
  break;
 case 0x4:

  VAR_13->vmid_mask0 = VAR_9;
  break;
 case 0x5:

  VAR_13->vmid_mask0 = VAR_9;
  VAR_13->vmid_mask1 = VAR_10 & 0xFF;
  break;
 case 0x6:

  VAR_13->vmid_mask0 = VAR_9;
  VAR_13->vmid_mask1 = VAR_10 & 0xFFFF;
  break;
 case 0x7:

  VAR_13->vmid_mask0 = VAR_9;
  VAR_13->vmid_mask1 = VAR_10 & 0xFFFFFF;
  break;
 case 0x8:

  VAR_13->vmid_mask0 = VAR_9;
  VAR_13->vmid_mask1 = VAR_10;
  break;
 default:
  break;
 }







 VAR_11 = VAR_13->vmid_mask0;
 for (VAR_6 = 0; VAR_6 < VAR_12->numvmidc; VAR_6++) {

  VAR_8 = VAR_11 & VAR_1;




  for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
   if (VAR_8 & 1)
    VAR_13->vmid_val[VAR_6] &= ~(0xFFUL << (VAR_7 * 8));
   VAR_8 >>= 1;
  }

  if (VAR_6 == 3)

   VAR_11 = VAR_13->vmid_mask1;
  else
   VAR_11 >>= 0x8;
 }
 FUNC_2(&VAR_12->spinlock);
 return VAR_5;
}
