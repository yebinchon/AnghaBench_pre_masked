
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
 int FUNC_2 (struct device*) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,struct ti_sci_handle const**) ;
 struct ti_sci_handle** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct ti_sci_handle const**) ;
 struct ti_sci_handle* FUNC_6 (int ,char const*) ;

const struct ti_sci_handle *FUNC_7(struct device *VAR_3,
             const char *VAR_4)
{
 const struct ti_sci_handle *VAR_5;
 const struct ti_sci_handle **VAR_6;

 VAR_6 = FUNC_4(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_6(FUNC_2(VAR_3), VAR_4);

 if (!FUNC_1(VAR_5)) {
  *VAR_6 = VAR_5;
  FUNC_3(VAR_3, VAR_6);
 } else {
  FUNC_5(VAR_6);
 }

 return VAR_5;
}
