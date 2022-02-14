
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_info {int users; } ;
struct ti_sci_handle {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ti_sci_handle const*) ;
 int FUNC_1 (struct ti_sci_handle const*) ;
 int FUNC_2 (int) ;
 struct ti_sci_info* FUNC_3 (struct ti_sci_handle const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

int FUNC_6(const struct ti_sci_handle *VAR_2)
{
 struct ti_sci_info *VAR_3;

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2);
 FUNC_4(&VAR_1);
 if (!FUNC_2(!VAR_3->users))
  VAR_3->users--;
 FUNC_5(&VAR_1);

 return 0;
}
