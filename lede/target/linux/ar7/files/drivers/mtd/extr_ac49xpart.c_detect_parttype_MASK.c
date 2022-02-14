
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_partition {int size; int offset; } ;
struct mtd_info {int dummy; } ;
typedef int magic ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct mtd_info*,int ,int,size_t*,int *) ;

int FUNC_1(struct mtd_info *VAR_5, struct mtd_partition VAR_6)
{
 unsigned int VAR_7;
 size_t VAR_8;

 if (VAR_6.size < 4)
  return -1;

 FUNC_0(VAR_5, VAR_6.offset, sizeof(VAR_7), &VAR_8,
   (uint8_t *)&VAR_7);

 if (VAR_8 != sizeof(VAR_7))
  return -1;

 switch (VAR_7) {
 case 132:
  return VAR_2;
 case 133:
  return VAR_1;
 case 128:
 case 131:
 case 130:
  return VAR_3;
 case 134:
  return VAR_0;
 default:
  switch (VAR_7 & 0xFF) {
  case 129:
   return VAR_3;
  }
  switch (VAR_7 >> 8) {
  case 129:
   return VAR_3;
  }
  return VAR_4;
 }
}
