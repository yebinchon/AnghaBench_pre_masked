
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_info {int res_susp_fen; int res_susp_nod; int res_susp; int res_role; } ;
struct drbd_resource {int susp_fen; int susp_nod; int susp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drbd_resource*) ;

__attribute__((used)) static void FUNC_2(struct resource_info *VAR_0,
        struct drbd_resource *VAR_1)
{
 VAR_0->res_role = FUNC_0(FUNC_1(VAR_1));
 VAR_0->res_susp = VAR_1->susp;
 VAR_0->res_susp_nod = VAR_1->susp_nod;
 VAR_0->res_susp_fen = VAR_1->susp_fen;
}
