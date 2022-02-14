
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int semc ;
typedef int rp ;
typedef int ng_hci_le_set_event_mask_rp ;
struct TYPE_2__ {int* event_mask; } ;
typedef TYPE_1__ ng_hci_le_set_event_mask_cp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,void*,int,void*,int*) ;

__attribute__((used)) static int
FUNC_2(int VAR_3, uint64_t VAR_4)
{
 ng_hci_le_set_event_mask_cp VAR_5;
 ng_hci_le_set_event_mask_rp VAR_6;
 int VAR_7, VAR_8 ,VAR_9;

 VAR_8 = sizeof(VAR_6);

 for (VAR_7=0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5.event_mask[VAR_7] = VAR_4&0xff;
  VAR_4 >>= 8;
 }
 VAR_9 = FUNC_1(VAR_3, FUNC_0(VAR_2,
   VAR_1),
   (void *)&VAR_5, sizeof(VAR_5), (void *)&VAR_6, &VAR_8);

 return 0;
}
