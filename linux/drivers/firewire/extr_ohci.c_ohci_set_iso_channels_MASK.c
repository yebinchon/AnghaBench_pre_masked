
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fw_ohci {int ir_context_channels; int mc_channels; int lock; } ;
struct fw_iso_context {int type; int card; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct fw_ohci* FUNC_0 (int ) ;
 int FUNC_1 (struct fw_ohci*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct fw_iso_context *VAR_2, u64 *VAR_3)
{
 struct fw_ohci *VAR_4 = FUNC_0(VAR_2->card);
 unsigned long VAR_5;
 int VAR_6;

 switch (VAR_2->type) {
 case 128:

  FUNC_2(&VAR_4->lock, VAR_5);


  if (~VAR_4->ir_context_channels & ~VAR_4->mc_channels & *VAR_3) {
   *VAR_3 = VAR_4->ir_context_channels;
   VAR_6 = -VAR_0;
  } else {
   FUNC_1(VAR_4, *VAR_3);
   VAR_6 = 0;
  }

  FUNC_3(&VAR_4->lock, VAR_5);

  break;
 default:
  VAR_6 = -VAR_1;
 }

 return VAR_6;
}
