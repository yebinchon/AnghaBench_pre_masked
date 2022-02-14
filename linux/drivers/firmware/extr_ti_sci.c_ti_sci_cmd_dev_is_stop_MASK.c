
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ti_sci_handle {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ti_sci_handle const*,int ,int *,int *,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(const struct ti_sci_handle *VAR_3, u32 VAR_4,
      bool *VAR_5, bool *VAR_6)
{
 int VAR_7;
 u8 VAR_8, VAR_9;

 if (!VAR_5 && !VAR_6)
  return -VAR_0;

 VAR_7 =
     FUNC_0(VAR_3, VAR_4, ((void*)0), ((void*)0), &VAR_8, &VAR_9);
 if (VAR_7)
  return VAR_7;

 if (VAR_5)
  *VAR_5 = (VAR_8 == VAR_2);
 if (VAR_6)
  *VAR_6 = (VAR_9 == VAR_1);

 return 0;
}
