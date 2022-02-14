
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_clk {int dummy; } ;
struct gt215_clk_info {scalar_t__ pll; } ;
struct gt215_clk {int base; struct gt215_clk_info* eng; } ;


 int VAR_0 ;
 struct gt215_clk* FUNC_0 (struct nvkm_clk*) ;
 int FUNC_1 (int *,unsigned long*) ;
 int FUNC_2 (int *,unsigned long*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct gt215_clk*,int,int ) ;
 int FUNC_4 (struct gt215_clk*,size_t) ;
 int FUNC_5 (struct gt215_clk*) ;
 int FUNC_6 (struct gt215_clk*,int,int,int ) ;

__attribute__((used)) static int
FUNC_7(struct nvkm_clk *VAR_6)
{
 struct gt215_clk *VAR_7 = FUNC_0(VAR_6);
 struct gt215_clk_info *VAR_8 = &VAR_7->eng[VAR_1];
 int VAR_9 = 0;
 unsigned long VAR_10;
 unsigned long *VAR_11 = &VAR_10;

 VAR_9 = FUNC_2(&VAR_7->base, VAR_11);
 if (VAR_9)
  goto out;

 if (VAR_8->pll)
  FUNC_4(VAR_7, VAR_2);

 FUNC_4(VAR_7, VAR_1);
 FUNC_6(VAR_7, 0x01, 0x004220, VAR_4);
 FUNC_3(VAR_7, 0x20, VAR_3);
 FUNC_3(VAR_7, 0x21, VAR_5);
 FUNC_5(VAR_7);

out:
 if (VAR_9 == -VAR_0)
  VAR_11 = ((void*)0);

 FUNC_1(&VAR_7->base, VAR_11);
 return VAR_9;
}
