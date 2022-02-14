
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int) ;
 int VAR_1 ;
 void* FUNC_1 (int ,char*,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,int,char const*,unsigned int) ;
 struct clk* FUNC_4 (struct device*,int,char const*,unsigned int) ;
 int FUNC_5 (struct device*,int,char const*,unsigned int,int) ;

__attribute__((used)) static struct clk *FUNC_6(struct device *VAR_2, int VAR_3, bool VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 void *VAR_7 = ((void*)0);
 const char *VAR_8;
 struct clk *VAR_9;

 if (VAR_3 >= 0) {
  VAR_6 = 0x4501 + (0x1000 * VAR_3);
  VAR_8 = VAR_7 = FUNC_1(VAR_1, "%d", VAR_3);
  if (!VAR_8)
   return FUNC_0(-VAR_0);
 } else {
  VAR_6 = 0x500;
  VAR_8 = "_l2";
 }

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_8, VAR_6);
 if (VAR_5) {
  VAR_9 = FUNC_0(VAR_5);
  goto err;
 }

 VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_8, VAR_6, VAR_4);
 if (VAR_5) {
  VAR_9 = FUNC_0(VAR_5);
  goto err;
 }

 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_8, VAR_6);
err:
 FUNC_2(VAR_7);
 return VAR_9;
}
