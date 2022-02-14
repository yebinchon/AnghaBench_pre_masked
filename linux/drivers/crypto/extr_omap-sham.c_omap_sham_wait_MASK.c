
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_sham_dev {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct omap_sham_dev*,int) ;
 scalar_t__ FUNC_1 (unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct omap_sham_dev *VAR_3, u32 VAR_4, u32 VAR_5)
{
 unsigned long VAR_6 = VAR_2 + VAR_0;

 while (!(FUNC_0(VAR_3, VAR_4) & VAR_5)) {
  if (FUNC_1(VAR_6))
   return -VAR_1;
 }

 return 0;
}
