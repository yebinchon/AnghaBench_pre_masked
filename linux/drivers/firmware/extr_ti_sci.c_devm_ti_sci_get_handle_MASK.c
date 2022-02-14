
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct ti_sci_handle const* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ti_sci_handle const*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct ti_sci_handle const**) ;
 struct ti_sci_handle** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct ti_sci_handle const**) ;
 struct ti_sci_handle* FUNC_5 (struct device*) ;

const struct ti_sci_handle *FUNC_6(struct device *VAR_3)
{
 const struct ti_sci_handle **VAR_4;
 const struct ti_sci_handle *VAR_5;

 VAR_4 = FUNC_3(VAR_2, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_5(VAR_3);

 if (!FUNC_1(VAR_5)) {
  *VAR_4 = VAR_5;
  FUNC_2(VAR_3, VAR_4);
 } else {
  FUNC_4(VAR_4);
 }

 return VAR_5;
}
