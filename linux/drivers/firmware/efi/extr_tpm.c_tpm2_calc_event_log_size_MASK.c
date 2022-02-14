
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcg_pcr_event2_head {int dummy; } ;


 int FUNC_0 (struct tcg_pcr_event2_head*,void*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int VAR_1, void *VAR_2)
{
 struct tcg_pcr_event2_head *VAR_3;
 int VAR_4, VAR_5 = 0;

 while (VAR_1 > 0) {
  VAR_3 = VAR_0 + VAR_5;
  VAR_4 = FUNC_0(VAR_3, VAR_2, 1);
  if (VAR_4 == 0)
   return -1;
  VAR_5 += VAR_4;
  VAR_1--;
 }

 return VAR_5;
}
