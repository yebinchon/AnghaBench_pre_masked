
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_sci_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ti_sci_handle const*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct ti_sci_handle *VAR_4, u32 VAR_5,
    u32 VAR_6, bool VAR_7,
    bool VAR_8, bool VAR_9)
{
 u32 VAR_10 = 0;

 VAR_10 |= VAR_7 ? VAR_2 : 0;
 VAR_10 |= VAR_8 ? VAR_1 : 0;
 VAR_10 |= VAR_9 ? VAR_3 : 0;

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_10,
          VAR_0);
}
