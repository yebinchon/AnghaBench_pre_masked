
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mid_pwr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mid_pwr*,int) ;
 int FUNC_1 (struct mid_pwr*,int,int) ;
 int FUNC_2 (struct mid_pwr*,int ) ;

__attribute__((used)) static int FUNC_3(struct mid_pwr *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 int VAR_8;


 VAR_7 = FUNC_0(VAR_2, VAR_3);
 VAR_6 = (VAR_7 >> VAR_4) & 3;
 if (VAR_6 == VAR_5)
  return 0;


 FUNC_1(VAR_2, VAR_3, (VAR_7 & ~(3 << VAR_4)) | (VAR_5 << VAR_4));


 VAR_8 = FUNC_2(VAR_2, VAR_0);
 if (VAR_8)
  return VAR_8;


 VAR_7 = FUNC_0(VAR_2, VAR_3);
 VAR_6 = (VAR_7 >> VAR_4) & 3;
 if (VAR_6 != VAR_5)
  return -VAR_1;

 return 0;
}
