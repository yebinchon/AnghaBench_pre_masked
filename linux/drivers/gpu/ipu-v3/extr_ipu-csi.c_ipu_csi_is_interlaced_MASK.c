
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipu_csi {int id; TYPE_1__* ipu; int lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct ipu_csi*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

bool FUNC_4(struct ipu_csi *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_5 =
  (FUNC_1(VAR_3, VAR_0) &
   VAR_1) >>
  VAR_2;
 FUNC_3(&VAR_3->lock, VAR_4);

 switch (VAR_5) {
 case 129:
 case 128:
 case 130:
 case 133:
 case 132:
  return 0;
 case 131:
 case 135:
 case 134:
  return 1;
 default:
  FUNC_0(VAR_3->ipu->dev,
   "CSI %d sensor protocol unsupported\n", VAR_3->id);
  return 0;
 }
}
