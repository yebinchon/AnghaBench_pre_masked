
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arasan_cf_dev {scalar_t__ vbase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct arasan_cf_dev *VAR_2, u32 VAR_3, bool VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_2->vbase + VAR_0);

 if (VAR_4) {
  FUNC_1(VAR_3, VAR_2->vbase + VAR_1);
  FUNC_1(VAR_5 | VAR_3, VAR_2->vbase + VAR_0);
 } else
  FUNC_1(VAR_5 & ~VAR_3, VAR_2->vbase + VAR_0);
}
