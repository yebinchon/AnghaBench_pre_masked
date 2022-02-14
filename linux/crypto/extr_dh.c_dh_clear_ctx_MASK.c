
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dh_ctx {int xa; int g; int q; int p; } ;


 int FUNC_0 (struct dh_ctx*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dh_ctx *VAR_0)
{
 FUNC_1(VAR_0->p);
 FUNC_1(VAR_0->q);
 FUNC_1(VAR_0->g);
 FUNC_1(VAR_0->xa);
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
}
