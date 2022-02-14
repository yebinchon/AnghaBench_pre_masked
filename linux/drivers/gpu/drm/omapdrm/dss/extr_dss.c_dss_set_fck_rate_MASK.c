
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_device {unsigned long dss_clk_rate; int dss_clk; } ;


 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (int,char*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;

int FUNC_4(struct dss_device *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 FUNC_0("set fck to %lu\n", VAR_1);

 VAR_2 = FUNC_3(VAR_0->dss_clk, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_0->dss_clk_rate = FUNC_2(VAR_0->dss_clk);

 FUNC_1(VAR_0->dss_clk_rate != VAR_1, "clk rate mismatch: %lu != %lu",
    VAR_0->dss_clk_rate, VAR_1);

 return 0;
}
