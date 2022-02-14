
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_cvp_conf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct altera_cvp_conf*,int ,int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct altera_cvp_conf *VAR_2, u32 VAR_3,
      u32 VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_5 / 10;
 if (VAR_5 % 10)
  VAR_6++;

 do {
  FUNC_0(VAR_2, VAR_1, &VAR_7);
  if ((VAR_7 & VAR_3) == VAR_4)
   return 0;


  FUNC_1(10, 11);
 } while (--VAR_6);

 return -VAR_0;
}
