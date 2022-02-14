
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_csi {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipu_csi*,int ) ;
 int FUNC_1 (struct ipu_csi*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct ipu_csi *VAR_3, bool VAR_4, bool VAR_5)
{
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_2(&VAR_3->lock, VAR_6);

 VAR_7 = FUNC_0(VAR_3, VAR_1);
 VAR_7 &= ~(VAR_0 | VAR_2);
 VAR_7 |= (VAR_4 ? VAR_0 : 0) |
        (VAR_5 ? VAR_2 : 0);
 FUNC_1(VAR_3, VAR_7, VAR_1);

 FUNC_3(&VAR_3->lock, VAR_6);
}
