
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnxt_qplib_rcfw {int cmdq_depth; int cmdq_bitmap; int waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct bnxt_qplib_rcfw *VAR_2, u16 VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 VAR_4 = VAR_3 % VAR_2->cmdq_depth;
 VAR_5 = FUNC_2(VAR_2->waitq,
    !FUNC_1(VAR_4, VAR_2->cmdq_bitmap),
    FUNC_0(VAR_1));
 return VAR_5 ? 0 : -VAR_0;
}
