
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipack_device {int id_format; unsigned int id_avail; int* id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef unsigned int ssize_t ;


 unsigned int VAR_0 ;


 int FUNC_0 (char*,char*,int) ;
 struct ipack_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 struct ipack_device *VAR_8 = FUNC_1(VAR_1);


 switch (VAR_8->id_format) {
 case 129:
  VAR_6 = 0x7; VAR_7 = 1; break;
 case 128:
  VAR_6 = 0xf; VAR_7 = 2; break;
 default:
  return -VAR_0;
 }
 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_8->id_avail; VAR_4++) {
  if (VAR_4 > 0) {
   if ((VAR_4 & VAR_6) == 0)
    VAR_3[VAR_5++] = '\n';
   else if ((VAR_4 & VAR_7) == 0)
    VAR_3[VAR_5++] = ' ';
  }
  FUNC_0(&VAR_3[VAR_5], "%02x", VAR_8->id[VAR_4]);
  VAR_5 += 2;
 }
 VAR_3[VAR_5++] = '\n';
 return VAR_5;
}
