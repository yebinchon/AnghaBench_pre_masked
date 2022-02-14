
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct uverbs_attr_bundle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct uverbs_attr_bundle*,int ) ;

__attribute__((used)) static u64 FUNC_1(struct uverbs_attr_bundle *VAR_4,
         u32 VAR_5, bool VAR_6)
{
 u64 VAR_7 = VAR_5;

 if (FUNC_0(VAR_4, VAR_3))
  VAR_7 |= VAR_0;

 if (VAR_6 && FUNC_0(VAR_4,
           VAR_2))
  VAR_7 |= VAR_1;

 return VAR_7;
}
