
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_evt_pd {int enclosure_index; int device_id; int slot_number; } ;
typedef int buffer ;


 int FUNC_0 (char*,int,char*,int,int,...) ;

__attribute__((used)) static const char *
FUNC_1(struct mfi_evt_pd *VAR_0)
{
 static char VAR_1[16];

 if (VAR_0->enclosure_index == 0)
  FUNC_0(VAR_1, sizeof(VAR_1), "%02d(s%d)", VAR_0->device_id,
      VAR_0->slot_number);
 else
  FUNC_0(VAR_1, sizeof(VAR_1), "%02d(e%d/s%d)", VAR_0->device_id,
      VAR_0->enclosure_index, VAR_0->slot_number);
 return (VAR_1);
}
