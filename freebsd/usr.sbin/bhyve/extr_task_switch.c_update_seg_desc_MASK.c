
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;
struct seg_desc {int access; int limit; int base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vmctx*,int,int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct vmctx *VAR_0, int VAR_1, int VAR_2, struct seg_desc *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->base, VAR_3->limit, VAR_3->access);
 FUNC_0(VAR_4 == 0);
}
