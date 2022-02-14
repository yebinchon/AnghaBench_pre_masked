
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int,int,size_t,size_t) ;
 int FUNC_2 (struct device*,char*,int,int,size_t,size_t) ;
 int FUNC_3 (char*,int,size_t) ;
 int FUNC_4 (struct device*,int *,size_t,int) ;

int FUNC_5(struct device *VAR_1, u16 VAR_2, __be32 *VAR_3,
    size_t VAR_4, size_t *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 size_t VAR_9;

 if (VAR_4 < 3) {
  FUNC_3("sbefifo: cmd %04x, response too small: %zd\n",
    VAR_2, VAR_4);
  return -VAR_0;
 }
 VAR_6 = FUNC_0(VAR_3[VAR_4 - 1]);
 if (VAR_6 > VAR_4 || VAR_6 < 3) {
  FUNC_1(VAR_1, "SBE cmd %02x:%02x status offset out of range: %d/%zd\n",
   VAR_2 >> 8, VAR_2 & 0xff, VAR_6, VAR_4);
  return -VAR_0;
 }
 VAR_7 = FUNC_0(VAR_3[VAR_4 - VAR_6]);
 VAR_8 = FUNC_0(VAR_3[VAR_4 - VAR_6 + 1]);
 if (((VAR_7 >> 16) != 0xC0DE) || ((VAR_7 & 0xffff) != VAR_2)) {
  FUNC_1(VAR_1, "SBE cmd %02x:%02x, status signature invalid: 0x%08x 0x%08x\n",
   VAR_2 >> 8, VAR_2 & 0xff, VAR_7, VAR_8);
  return -VAR_0;
 }
 if (VAR_8 != 0) {
  VAR_9 = VAR_6 - 3;
  FUNC_2(VAR_1, "SBE error cmd %02x:%02x status=%04x:%04x\n",
    VAR_2 >> 8, VAR_2 & 0xff, VAR_8 >> 16, VAR_8 & 0xffff);
  if (VAR_9)
   FUNC_4(VAR_1, &VAR_3[VAR_4 - VAR_6 + 2],
       VAR_9, 0);
 }
 if (VAR_5)
  *VAR_5 = VAR_4 - VAR_6;





 return VAR_8;
}
