
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_ssi_port {scalar_t__ ssr_base; scalar_t__ sst_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct omap_ssi_port *VAR_2, u32 VAR_3)
{
 FUNC_1(VAR_3, VAR_2->sst_base + VAR_1);
 FUNC_1(VAR_3, VAR_2->ssr_base + VAR_0);

 VAR_3 = FUNC_0(VAR_2->ssr_base + VAR_0);

 return 0;
}
