
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_array_spec {int count; int * data; } ;
struct hdmi_context {struct device* dev; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 struct clk* FUNC_3 (struct device*,int ) ;

__attribute__((used)) static int FUNC_4(struct hdmi_context *VAR_0,
    const struct string_array_spec *VAR_1,
    struct clk **VAR_2)
{
 struct device *VAR_3 = VAR_0->dev;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->count; ++VAR_4) {
  struct clk *VAR_5 = FUNC_3(VAR_3, VAR_1->data[VAR_4]);

  if (FUNC_0(VAR_5)) {
   int VAR_6 = FUNC_1(VAR_5);

   FUNC_2(VAR_3, "Cannot get clock %s, %d\n",
    VAR_1->data[VAR_4], VAR_6);

   return VAR_6;
  }

  VAR_2[VAR_4] = VAR_5;
 }

 return 0;
}
