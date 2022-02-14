
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ib_device {TYPE_2__* port_data; } ;
struct TYPE_3__ {int pkey_tbl_len; } ;
struct TYPE_4__ {TYPE_1__ immutable; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,size_t,int,int*) ;

int FUNC_1(struct ib_device *VAR_1,
   u8 VAR_2, u16 VAR_3, u16 *VAR_4)
{
 int VAR_5, VAR_6;
 u16 VAR_7;
 int VAR_8 = -1;

 for (VAR_6 = 0; VAR_6 < VAR_1->port_data[VAR_2].immutable.pkey_tbl_len;
      ++VAR_6) {
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_6, &VAR_7);
  if (VAR_5)
   return VAR_5;
  if ((VAR_3 & 0x7fff) == (VAR_7 & 0x7fff)) {

   if (VAR_7 & 0x8000) {
    *VAR_4 = VAR_6;
    return 0;
   }
   if (VAR_8 < 0)
    VAR_8 = VAR_6;
  }
 }


 if (VAR_8 >= 0) {
  *VAR_4 = VAR_8;
  return 0;
 }
 return -VAR_0;
}
