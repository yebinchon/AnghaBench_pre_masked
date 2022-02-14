
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int name; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*,unsigned int) ;
 struct clk* FUNC_6 (struct device_node*,int ) ;
 struct device_node* FUNC_7 (int *,int *,char*) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (char*,unsigned int,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(unsigned int VAR_0)
{
 struct device_node *VAR_1;
 struct clk *VAR_2;
 unsigned long VAR_3, VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9;


 VAR_1 = FUNC_7(((void*)0), ((void*)0), "fsl,mpc5121-diu");
 if (!VAR_1) {
  FUNC_10("Could not find DIU device tree node.\n");
  return;
 }
 VAR_2 = FUNC_6(VAR_1, 0);
 if (FUNC_0(VAR_2)) {

  VAR_2 = FUNC_3(VAR_1->name, "ipg");
 }
 FUNC_8(VAR_1);
 if (FUNC_0(VAR_2)) {
  FUNC_10("Could not lookup DIU clock.\n");
  return;
 }
 if (FUNC_4(VAR_2)) {
  FUNC_10("Could not enable DIU clock.\n");
  return;
 }






 FUNC_9("DIU pixclock in ps - %u\n", VAR_0);
 VAR_0 = (1000000000 / VAR_0) * 1000;
 FUNC_9("DIU pixclock freq  - %u\n", VAR_0);
 VAR_3 = VAR_0 / 20;
 FUNC_9("DIU deviation      - %lu\n", VAR_3);
 VAR_4 = VAR_0 - VAR_3;
 VAR_5 = VAR_0 + VAR_3;
 FUNC_9("DIU minpixclock    - %lu\n", VAR_4);
 FUNC_9("DIU maxpixclock    - %lu\n", VAR_5);
 for (VAR_6 = 0; VAR_6 <= VAR_3; VAR_6 += VAR_0 / 64) {
  VAR_7 = VAR_0 - VAR_6;
  FUNC_9("DIU checking clock - %lu\n", VAR_7);
  FUNC_5(VAR_2, VAR_7);
  VAR_8 = FUNC_2(VAR_2);
  VAR_9 = FUNC_1(VAR_0 - VAR_8);
  if (VAR_9 < VAR_3)
   break;
  if (!VAR_6)
   continue;
  VAR_7 = VAR_0 + VAR_6;
  FUNC_9("DIU checking clock - %lu\n", VAR_7);
  FUNC_5(VAR_2, VAR_7);
  VAR_8 = FUNC_2(VAR_2);
  VAR_9 = FUNC_1(VAR_0 - VAR_8);
  if (VAR_9 < VAR_3)
   break;
 }
 if (VAR_6 <= VAR_3) {
  FUNC_9("DIU clock accepted - %lu\n", VAR_7);
  FUNC_9("DIU pixclock want %u, got %lu, delta %lu, eps %lu\n",
    VAR_0, VAR_8, VAR_9, VAR_3);
  return;
 }
 FUNC_11("DIU pixclock auto search unsuccessful\n");







 FUNC_11("DIU pixclock best effort fallback (backend's choice)\n");
 FUNC_5(VAR_2, VAR_0);
 VAR_8 = FUNC_2(VAR_2);
 VAR_9 = FUNC_1(VAR_0 - VAR_8);
 FUNC_9("DIU pixclock want %u, got %lu, delta %lu, eps %lu\n",
   VAR_0, VAR_8, VAR_9, VAR_3);
}
