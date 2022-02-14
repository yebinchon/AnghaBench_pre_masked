
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef long uint16_t ;
typedef size_t u_int ;
struct mfi_pd_list {size_t count; TYPE_1__* addr; } ;
struct TYPE_2__ {scalar_t__ scsi_dev_type; int encl_device_id; int encl_index; int slot_number; long device_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mfi_pd_list*) ;
 scalar_t__ FUNC_1 (int,struct mfi_pd_list**,int *) ;
 long FUNC_2 (char*,char**,int ) ;
 char FUNC_3 (char) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;

int
FUNC_6(int VAR_2, char *VAR_3, uint16_t *VAR_4)
{
 struct mfi_pd_list *VAR_5;
 long VAR_6;
 int VAR_7;
 u_int VAR_8;
 char *VAR_9;
 uint8_t VAR_10, VAR_11;


 VAR_6 = FUNC_2(VAR_3, &VAR_9, 0);
 if (*VAR_9 == '\0') {
  if (VAR_6 < 0 || VAR_6 >= 0xffff)
   goto bad;
  *VAR_4 = VAR_6;
  return (0);
 }


 if (FUNC_3(VAR_3[0]) == 'E' || FUNC_3(VAR_3[0]) == 'S') {
  if (VAR_3[1] == '\0')
   goto bad;
  VAR_9 = VAR_3;
  if (FUNC_3(VAR_3[0]) == 'E') {
   VAR_9++;
   VAR_6 = FUNC_2(VAR_9, &VAR_9, 0);
   if (VAR_6 < 0 || VAR_6 > 0xff || *VAR_9 != ':')
    goto bad;
   VAR_10 = VAR_6;
   VAR_9++;
   if (FUNC_3(*VAR_9) != 'S')
    goto bad;
  } else
   VAR_10 = 0xff;
  VAR_9++;
  if (*VAR_9 == '\0')
   goto bad;
  VAR_6 = FUNC_2(VAR_9, &VAR_9, 0);
  if (VAR_6 < 0 || VAR_6 > 0xff || *VAR_9 != '\0')
   goto bad;
  VAR_11 = VAR_6;

  if (FUNC_1(VAR_2, &VAR_5, ((void*)0)) < 0) {
   VAR_7 = VAR_1;
   FUNC_4("Failed to fetch drive list");
   return (VAR_7);
  }

  for (VAR_8 = 0; VAR_8 < VAR_5->count; VAR_8++) {
   if (VAR_5->addr[VAR_8].scsi_dev_type != 0)
    continue;

   if (((VAR_10 == 0xff &&
       VAR_5->addr[VAR_8].encl_device_id == 0xffff) ||
       VAR_5->addr[VAR_8].encl_index == VAR_10) &&
       VAR_5->addr[VAR_8].slot_number == VAR_11) {
    *VAR_4 = VAR_5->addr[VAR_8].device_id;
    FUNC_0(VAR_5);
    return (0);
   }
  }
  FUNC_0(VAR_5);
  FUNC_5("Unknown drive %s", VAR_3);
  return (VAR_0);
 }

bad:
 FUNC_5("Invalid drive number %s", VAR_3);
 return (VAR_0);
}
