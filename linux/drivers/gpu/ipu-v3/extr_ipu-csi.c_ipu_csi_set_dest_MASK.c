
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_csi {int lock; } ;
typedef enum ipu_csi_dest { ____Placeholder_ipu_csi_dest } ipu_csi_dest ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ipu_csi*,int ) ;
 int FUNC_1 (struct ipu_csi*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct ipu_csi *VAR_6, enum ipu_csi_dest VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9, VAR_10;

 if (VAR_7 == VAR_5)
  VAR_10 = VAR_1;
 else
  VAR_10 = VAR_0;

 FUNC_2(&VAR_6->lock, VAR_8);

 VAR_9 = FUNC_0(VAR_6, VAR_2);
 VAR_9 &= ~VAR_3;
 VAR_9 |= (VAR_10 << VAR_4);
 FUNC_1(VAR_6, VAR_9, VAR_2);

 FUNC_3(&VAR_6->lock, VAR_8);

 return 0;
}
