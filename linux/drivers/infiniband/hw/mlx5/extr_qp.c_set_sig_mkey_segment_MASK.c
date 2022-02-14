
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5_mkey_seg {int flags; void* bsfs_octo_size; void* xlt_oct_size; int len; void* flags_pd; void* qpn_mkey7_0; } ;
struct ib_mr {int rkey; } ;
struct TYPE_4__ {TYPE_1__* sig; } ;
struct TYPE_3__ {int sigerr_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlx5_mkey_seg*,int ,int) ;
 TYPE_2__* FUNC_5 (struct ib_mr*) ;

__attribute__((used)) static void FUNC_6(struct mlx5_mkey_seg *VAR_4,
     struct ib_mr *VAR_5, int VAR_6,
     u32 VAR_7, u32 VAR_8, u32 VAR_9)
{
 u32 VAR_10 = VAR_5->rkey;
 u8 VAR_11 = FUNC_5(VAR_5)->sig->sigerr_count & 1;

 FUNC_4(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->flags = FUNC_2(VAR_6) | VAR_0;
 VAR_4->qpn_mkey7_0 = FUNC_0((VAR_10 & 0xff) | 0xffffff00);
 VAR_4->flags_pd = FUNC_0(VAR_3 | VAR_11 << 26 |
        VAR_1 | VAR_9);
 VAR_4->len = FUNC_1(VAR_8);
 VAR_4->xlt_oct_size = FUNC_0(FUNC_3(VAR_7));
 VAR_4->bsfs_octo_size = FUNC_0(VAR_2);
}
