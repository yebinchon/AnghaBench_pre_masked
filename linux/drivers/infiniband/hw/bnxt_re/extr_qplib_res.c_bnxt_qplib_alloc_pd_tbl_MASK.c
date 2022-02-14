
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnxt_qplib_res {int dummy; } ;
struct bnxt_qplib_pd_tbl {int max; scalar_t__ tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct bnxt_qplib_res *VAR_2,
       struct bnxt_qplib_pd_tbl *VAR_3,
       u32 VAR_4)
{
 u32 VAR_5;

 VAR_5 = VAR_4 >> 3;
 if (!VAR_5)
  VAR_5 = 1;
 VAR_3->tbl = FUNC_0(VAR_5, VAR_1);
 if (!VAR_3->tbl)
  return -VAR_0;

 VAR_3->max = VAR_4;
 FUNC_1((u8 *)VAR_3->tbl, 0xFF, VAR_5);

 return 0;
}
