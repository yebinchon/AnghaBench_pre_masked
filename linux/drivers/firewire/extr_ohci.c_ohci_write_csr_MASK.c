
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int csr_state_setclear_abdicate; int bus_time; int lock; int is_root; } ;
struct fw_card {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fw_ohci*) ;
 struct fw_ohci* FUNC_2 (struct fw_card*) ;
 int FUNC_3 (struct fw_ohci*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct fw_ohci*) ;

__attribute__((used)) static void FUNC_7(struct fw_card *VAR_11, int VAR_12, u32 VAR_13)
{
 struct fw_ohci *VAR_14 = FUNC_2(VAR_11);
 unsigned long VAR_15;

 switch (VAR_12) {
 case 129:
  if ((VAR_13 & VAR_1) && VAR_14->is_root) {
   FUNC_3(VAR_14, VAR_6,
      VAR_8);
   FUNC_1(VAR_14);
  }
  if (VAR_13 & VAR_0)
   VAR_14->csr_state_setclear_abdicate = 0;
  break;

 case 128:
  if ((VAR_13 & VAR_1) && VAR_14->is_root) {
   FUNC_3(VAR_14, VAR_7,
      VAR_8);
   FUNC_1(VAR_14);
  }
  if (VAR_13 & VAR_0)
   VAR_14->csr_state_setclear_abdicate = 1;
  break;

 case 131:
  FUNC_3(VAR_14, VAR_9, VAR_13 >> 16);
  FUNC_1(VAR_14);
  break;

 case 132:
  FUNC_3(VAR_14, VAR_5, VAR_13);
  FUNC_3(VAR_14, VAR_4,
     VAR_10);
  FUNC_1(VAR_14);
  break;

 case 133:
  FUNC_4(&VAR_14->lock, VAR_15);
  VAR_14->bus_time = (FUNC_6(VAR_14) & 0x40) |
                   (VAR_13 & ~0x7f);
  FUNC_5(&VAR_14->lock, VAR_15);
  break;

 case 134:
  VAR_13 = (VAR_13 & 0xf) | ((VAR_13 & 0xf) << 4) |
   ((VAR_13 & 0xf) << 8) | ((VAR_13 & 0x0ffff000) << 4);
  FUNC_3(VAR_14, VAR_2, VAR_13);
  FUNC_1(VAR_14);
  break;

 case 130:
  FUNC_3(VAR_14, VAR_3, VAR_13 & 0x3f);
  FUNC_1(VAR_14);
  break;

 default:
  FUNC_0(1);
  break;
 }
}
