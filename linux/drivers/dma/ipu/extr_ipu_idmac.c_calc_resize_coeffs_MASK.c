
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int,int,int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_2, uint32_t VAR_3,
         uint32_t *VAR_4,
         uint32_t *VAR_5)
{
 uint32_t VAR_6;
 uint32_t VAR_7;

 *VAR_4 = 1 << 13;
 *VAR_5 = 1 << 13;


 if (VAR_3 << 3 < VAR_2)
  return -VAR_0;


 VAR_7 = 0;
 VAR_6 = VAR_2;
 while (VAR_6 >= VAR_3 * 2 && VAR_7 < 2) {
  VAR_6 >>= 1;
  VAR_7++;
 }
 *VAR_5 = VAR_7;






 *VAR_4 = (8192L * (VAR_6 - 1)) / (VAR_3 - 1);
 if (*VAR_4 >= 16384L) {
  FUNC_1(VAR_1.dev, "Warning! Overflow on resize coeff.\n");
  *VAR_4 = 0x3FFF;
 }

 FUNC_0(VAR_1.dev, "resizing from %u -> %u pixels, "
  "downsize=%u, resize=%u.%lu (reg=%u)\n", VAR_2, VAR_3,
  *VAR_5, *VAR_4 >= 8192L ? 1 : 0,
  ((*VAR_4 & 0x1FFF) * 10000L) / 8192L, *VAR_4);

 return 0;
}
