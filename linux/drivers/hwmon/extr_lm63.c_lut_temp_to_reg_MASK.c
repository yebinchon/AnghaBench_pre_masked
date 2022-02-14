
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {scalar_t__ lut_temp_highres; scalar_t__ temp2_offset; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (long,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct lm63_data *VAR_0, long VAR_1)
{
 VAR_1 -= VAR_0->temp2_offset;
 if (VAR_0->lut_temp_highres)
  return FUNC_0(FUNC_1(VAR_1, 0, 127500), 500);
 else
  return FUNC_0(FUNC_1(VAR_1, 0, 127000), 1000);
}
