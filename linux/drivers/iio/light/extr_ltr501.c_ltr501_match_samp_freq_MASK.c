
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltr501_samp_table {int freq_val; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct ltr501_samp_table *VAR_1,
        int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = VAR_3 * 1000000 + VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_1[VAR_5].freq_val == VAR_6)
   return VAR_5;
 }

 return -VAR_0;
}
