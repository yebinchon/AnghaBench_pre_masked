
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long uint8_t ;
struct mpt_drive_list {long ndrives; TYPE_1__** drives; } ;
typedef long U8 ;
struct TYPE_2__ {long PhysDiskBus; long PhysDiskID; long PhysDiskNum; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (char const*,char**,int ) ;

int
FUNC_1(struct mpt_drive_list *VAR_2, const char *VAR_3,
    U8 *VAR_4)
{
 long VAR_5;
 uint8_t VAR_6, VAR_7;
 char *VAR_8;


 VAR_5 = FUNC_0(VAR_3, &VAR_8, 0);
 if (*VAR_8 == '\0') {
  if (VAR_5 < 0 || VAR_5 > 0xff)
   goto bad;
  *VAR_4 = VAR_5;
  return (0);
 }


 if (*VAR_8 == ':') {
  if (VAR_5 < 0 || VAR_5 > 0xff)
   goto bad;
  VAR_6 = VAR_5;
  VAR_5 = FUNC_0(VAR_8 + 1, &VAR_8, 0);
  if (*VAR_8 != '\0')
   goto bad;
  if (VAR_5 < 0 || VAR_5 > 0xff)
   goto bad;
  VAR_7 = VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_2->ndrives; VAR_5++) {
   if (VAR_2->drives[VAR_5]->PhysDiskBus == VAR_6 &&
       VAR_2->drives[VAR_5]->PhysDiskID == VAR_7) {
    *VAR_4 = VAR_2->drives[VAR_5]->PhysDiskNum;
    return (0);
   }
  }
  return (VAR_1);
 }

bad:
 return (VAR_0);
}
