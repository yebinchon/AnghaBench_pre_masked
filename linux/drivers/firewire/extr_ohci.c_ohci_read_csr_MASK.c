
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int pri_req_max; int lock; int csr_state_setclear_abdicate; int is_root; } ;
struct fw_card {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 struct fw_ohci* FUNC_1 (struct fw_card*) ;
 int FUNC_2 (struct fw_ohci*) ;
 int FUNC_3 (struct fw_ohci*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct fw_ohci*) ;

__attribute__((used)) static u32 FUNC_7(struct fw_card *VAR_7, int VAR_8)
{
 struct fw_ohci *VAR_9 = FUNC_1(VAR_7);
 unsigned long VAR_10;
 u32 VAR_11;

 switch (VAR_8) {
 case 129:
 case 128:
  if (VAR_9->is_root &&
      (FUNC_3(VAR_9, VAR_4) &
       VAR_5))
   VAR_11 = VAR_1;
  else
   VAR_11 = 0;
  if (VAR_9->csr_state_setclear_abdicate)
   VAR_11 |= VAR_0;

  return VAR_11;

 case 131:
  return FUNC_3(VAR_9, VAR_6) << 16;

 case 132:
  return FUNC_2(VAR_9);

 case 133:





  FUNC_4(&VAR_9->lock, VAR_10);
  VAR_11 = FUNC_6(VAR_9);
  FUNC_5(&VAR_9->lock, VAR_10);
  return VAR_11;

 case 134:
  VAR_11 = FUNC_3(VAR_9, VAR_2);
  return (VAR_11 >> 4) & 0x0ffff00f;

 case 130:
  return (FUNC_3(VAR_9, VAR_3) & 0x3f) |
   (VAR_9->pri_req_max << 8);

 default:
  FUNC_0(1);
  return 0;
 }
}
