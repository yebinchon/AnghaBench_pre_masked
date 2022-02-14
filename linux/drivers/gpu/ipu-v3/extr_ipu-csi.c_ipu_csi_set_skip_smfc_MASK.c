
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_csi {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ipu_csi*,int ) ;
 int FUNC_1 (struct ipu_csi*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct ipu_csi *VAR_8, u32 VAR_9,
     u32 VAR_10, u32 VAR_11)
{
 unsigned long VAR_12;
 u32 VAR_13;

 if (VAR_10 > 5 || VAR_11 > 3)
  return -VAR_7;

 FUNC_2(&VAR_8->lock, VAR_12);

 VAR_13 = FUNC_0(VAR_8, VAR_4);
 VAR_13 &= ~(VAR_2 | VAR_0 |
    VAR_5);
 VAR_13 |= (VAR_10 << VAR_3) |
  (VAR_11 << VAR_1) |
  (VAR_9 << VAR_6);
 FUNC_1(VAR_8, VAR_13, VAR_4);

 FUNC_3(&VAR_8->lock, VAR_12);

 return 0;
}
