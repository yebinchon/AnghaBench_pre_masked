
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_soc {int dev; } ;
struct ipu_ic_priv {struct ipu_soc* ipu; } ;
struct ipu_ic {struct ipu_ic_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct ipu_ic *VAR_1,
         u32 VAR_2, u32 VAR_3,
         u32 *VAR_4,
         u32 *VAR_5)
{
 struct ipu_ic_priv *VAR_6 = VAR_1->priv;
 struct ipu_soc *VAR_7 = VAR_6->ipu;
 u32 VAR_8, VAR_9;





 if (VAR_2 > 4096) {
  FUNC_0(VAR_7->dev, "Unsupported resize (in_size > 4096)\n");
  return -VAR_0;
 }
 if (VAR_3 > 1024) {
  FUNC_0(VAR_7->dev, "Unsupported resize (out_size > 1024)\n");
  return -VAR_0;
 }


 if ((VAR_3 << 2) < VAR_2) {
  FUNC_0(VAR_7->dev, "Unsupported downsize\n");
  return -VAR_0;
 }


 VAR_9 = 0;
 VAR_8 = VAR_2;
 while (((VAR_8 > 1024) || (VAR_8 >= VAR_3 * 2)) &&
        (VAR_9 < 2)) {
  VAR_8 >>= 1;
  VAR_9++;
 }
 *VAR_5 = VAR_9;






 *VAR_4 = (8192L * (VAR_8 - 1)) / (VAR_3 - 1);
 if (*VAR_4 >= 16384L) {
  FUNC_0(VAR_7->dev, "Warning! Overflow on resize coeff.\n");
  *VAR_4 = 0x3FFF;
 }

 return 0;
}
