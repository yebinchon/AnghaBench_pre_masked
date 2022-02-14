
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct i40iw_device {scalar_t__ arp_table_size; int allocated_arps; TYPE_1__* arp_table; int next_arp_index; } ;
typedef int ip ;
struct TYPE_2__ {scalar_t__* ip_addr; int mac_addr; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct i40iw_device*,int ,int,scalar_t__*,int *) ;
 int FUNC_3 (struct i40iw_device*,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,int ,int) ;

int FUNC_7(struct i40iw_device *VAR_0,
      u32 *VAR_1,
      bool VAR_2,
      u8 *VAR_3,
      u32 VAR_4)
{
 int VAR_5;
 int VAR_6;
 u32 VAR_7[4];

 if (VAR_2) {
  FUNC_6(VAR_7, 0, sizeof(VAR_7));
  VAR_7[0] = *VAR_1;
 } else {
  FUNC_5(VAR_7, VAR_1, sizeof(VAR_7));
 }

 for (VAR_5 = 0; (u32)VAR_5 < VAR_0->arp_table_size; VAR_5++)
  if (FUNC_4(VAR_0->arp_table[VAR_5].ip_addr, VAR_7, sizeof(VAR_7)) == 0)
   break;
 switch (VAR_4) {
 case 130:
  if (VAR_5 != VAR_0->arp_table_size)
   return -1;

  VAR_5 = 0;
  VAR_6 = FUNC_2(VAR_0, VAR_0->allocated_arps,
        VAR_0->arp_table_size,
        (u32 *)&VAR_5,
        &VAR_0->next_arp_index);

  if (VAR_6)
   return VAR_6;

  FUNC_5(VAR_0->arp_table[VAR_5].ip_addr, VAR_7, sizeof(VAR_7));
  FUNC_1(VAR_0->arp_table[VAR_5].mac_addr, VAR_3);
  break;
 case 128:
  if (VAR_5 == VAR_0->arp_table_size)
   return -1;
  break;
 case 129:
  if (VAR_5 == VAR_0->arp_table_size)
   return -1;
  FUNC_6(VAR_0->arp_table[VAR_5].ip_addr, 0,
         sizeof(VAR_0->arp_table[VAR_5].ip_addr));
  FUNC_0(VAR_0->arp_table[VAR_5].mac_addr);
  FUNC_3(VAR_0, VAR_0->allocated_arps, VAR_5);
  break;
 default:
  return -1;
 }
 return VAR_5;
}
