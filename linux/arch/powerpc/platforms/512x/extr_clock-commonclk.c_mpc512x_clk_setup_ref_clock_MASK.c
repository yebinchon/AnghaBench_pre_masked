
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int scfr1; } ;


 int FUNC_0 (struct clk*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,int,int) ;
 int FUNC_6 (char*,int) ;
 struct clk* FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (char*,int,int) ;

__attribute__((used)) static void FUNC_9(struct device_node *VAR_3, int VAR_4,
     int *VAR_5, int *VAR_6,
     int *VAR_7)
{
 struct clk *VAR_8;
 int VAR_9;


 *VAR_5 = FUNC_3();
 *VAR_5 *= 2;
 *VAR_6 = FUNC_4();
 *VAR_7 = FUNC_2(&VAR_1->scfr1, 23, 3);


 VAR_8 = FUNC_7(VAR_3, "osc");
 if (!FUNC_0(VAR_8)) {
  VAR_2[VAR_0] = FUNC_5("ref", "osc", 1, 1);
  VAR_9 = FUNC_1(VAR_2[VAR_0]);
  VAR_9 *= *VAR_5;
  VAR_9 /= *VAR_6;
  VAR_9 /= 2;
  VAR_9 /= *VAR_7;
  if (VAR_4 && VAR_9 != VAR_4)
   FUNC_8("calc rate %d != OF spec %d\n",
    VAR_9, VAR_4);
 } else {
  VAR_9 = VAR_4;
  VAR_9 *= *VAR_7;
  VAR_9 *= 2;
  VAR_9 *= *VAR_6;
  VAR_9 /= *VAR_5;
  VAR_2[VAR_0] = FUNC_6("ref", VAR_9);
 }
}
