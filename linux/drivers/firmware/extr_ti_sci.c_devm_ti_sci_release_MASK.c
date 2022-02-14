
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_handle {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct ti_sci_handle const*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, void *VAR_1)
{
 const struct ti_sci_handle **VAR_2 = VAR_1;
 const struct ti_sci_handle *VAR_3 = *VAR_2;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  FUNC_0(VAR_0, "failed to put handle %d\n", VAR_4);
}
