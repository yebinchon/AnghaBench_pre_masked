
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zram {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zram*,int ) ;
 scalar_t__ FUNC_1 (struct zram*,int ,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct zram *VAR_2, u32 VAR_3)
{
 return FUNC_0(VAR_2, VAR_3) ||
   FUNC_1(VAR_2, VAR_3, VAR_0) ||
   FUNC_1(VAR_2, VAR_3, VAR_1);
}
