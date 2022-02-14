
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_cc {int num_channels; int num_slots; int id; int slot_inuse; scalar_t__ chmap_exist; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct edma_cc*,int,int *) ;
 int FUNC_3 (int ,int,int) ;
 scalar_t__ FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct edma_cc *VAR_5, int VAR_6)
{
 if (VAR_6 >= 0) {
  VAR_6 = FUNC_0(VAR_6);

  if (VAR_5->chmap_exist && VAR_6 < VAR_5->num_channels)
   VAR_6 = VAR_1;
 }

 if (VAR_6 < 0) {
  if (VAR_5->chmap_exist)
   VAR_6 = 0;
  else
   VAR_6 = VAR_5->num_channels;
  for (;;) {
   VAR_6 = FUNC_3(VAR_5->slot_inuse,
        VAR_5->num_slots,
        VAR_6);
   if (VAR_6 == VAR_5->num_slots)
    return -VAR_3;
   if (!FUNC_4(VAR_6, VAR_5->slot_inuse))
    break;
  }
 } else if (VAR_6 >= VAR_5->num_slots) {
  return -VAR_2;
 } else if (FUNC_4(VAR_6, VAR_5->slot_inuse)) {
  return -VAR_0;
 }

 FUNC_2(VAR_5, VAR_6, &VAR_4);

 return FUNC_1(VAR_5->id, VAR_6);
}
