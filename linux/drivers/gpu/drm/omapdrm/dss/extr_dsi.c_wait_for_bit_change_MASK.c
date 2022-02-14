
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_reg {int dummy; } ;
struct dsi_data {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct dsi_data*,struct dsi_reg const,int,int) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static inline bool FUNC_6(struct dsi_data *VAR_3,
           const struct dsi_reg VAR_4,
           int VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 ktime_t VAR_8;
 int VAR_9;


 VAR_9 = 100;
 while (VAR_9-- > 0) {
  if (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_5) == VAR_6)
   return 1;
 }


 VAR_7 = VAR_2 + FUNC_1(500);
 while (FUNC_5(VAR_2, VAR_7)) {
  if (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_5) == VAR_6)
   return 1;

  VAR_8 = FUNC_2(1000 * 1000);
  FUNC_4(VAR_1);
  FUNC_3(&VAR_8, VAR_0);
 }

 return 0;
}
