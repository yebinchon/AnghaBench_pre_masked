
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct descriptor {int control; int req_count; int data_address; } ;
struct context {int current_bus; TYPE_2__* ohci; } ;
typedef int __le16 ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct context *VAR_3,
       struct descriptor *VAR_4)
{
 __le16 VAR_5;
 u32 VAR_6;


 if (VAR_4->control & FUNC_0(VAR_0))
  return;


 VAR_4 += 2;






 if ((FUNC_3(VAR_4->data_address) & VAR_2) ==
     (VAR_3->current_bus & VAR_2)) {
  if (VAR_4->control & FUNC_0(VAR_0))
   return;
  VAR_4++;
 }

 do {
  VAR_6 = FUNC_3(VAR_4->data_address);
  FUNC_1(VAR_3->ohci->card.device,
           VAR_6 & VAR_2,
           VAR_6 & ~VAR_2,
           FUNC_2(VAR_4->req_count),
           VAR_1);
  VAR_5 = VAR_4->control;
  VAR_4++;
 } while (!(VAR_5 & FUNC_0(VAR_0)));
}
