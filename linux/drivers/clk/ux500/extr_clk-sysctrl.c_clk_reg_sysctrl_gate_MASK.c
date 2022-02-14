
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (struct device*,char const*,char const**,int,int *,int*,int*,int ,unsigned long,unsigned long,int *) ;
 int VAR_0 ;

struct clk *FUNC_1(struct device *VAR_1,
    const char *VAR_2,
    const char *VAR_3,
    u16 VAR_4,
    u8 VAR_5,
    u8 VAR_6,
    unsigned long VAR_7,
    unsigned long VAR_8)
{
 const char **VAR_9 = (VAR_3 ? &VAR_3 : ((void*)0));
 u8 VAR_10 = (VAR_3 ? 1 : 0);

 return FUNC_0(VAR_1, VAR_2, VAR_9, VAR_10,
   &VAR_4, &VAR_5, &VAR_6, 0, VAR_7,
   VAR_8, &VAR_0);
}
