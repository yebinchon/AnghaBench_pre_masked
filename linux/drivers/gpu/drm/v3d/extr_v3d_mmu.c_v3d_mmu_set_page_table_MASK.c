
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_dev {int pt_paddr; int mmu_scratch_paddr; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct v3d_dev*) ;

int FUNC_2(struct v3d_dev *VAR_15)
{
 FUNC_0(VAR_14, VAR_15->pt_paddr >> VAR_13);
 FUNC_0(VAR_2,
    VAR_5 |
    VAR_7 |
    VAR_6 |
    VAR_8 |
    VAR_9 |
    VAR_10 |
    VAR_3 |
    VAR_4);
 FUNC_0(VAR_11,
    (VAR_15->mmu_scratch_paddr >> VAR_13) |
    VAR_12);
 FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_15);
}
