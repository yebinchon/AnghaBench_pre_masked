
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct vadc_prescale_ratio {int den; int num; } ;
struct vadc_linear_graph {int dummy; } ;
typedef int s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct vadc_linear_graph const*,int ,int,int*) ;

__attribute__((used)) static int FUNC_2(const struct vadc_linear_graph *VAR_1,
        const struct vadc_prescale_ratio *VAR_2,
        bool VAR_3,
        u16 VAR_4, int *VAR_5)
{
 s64 VAR_6 = 0;
 u64 VAR_7;

 FUNC_1(VAR_1, VAR_4, VAR_3, &VAR_6);

 if (VAR_6 > 0) {
  VAR_7 = VAR_6 * VAR_2->den;
  FUNC_0(VAR_7, VAR_2->num * 2);
  VAR_6 = VAR_7;
 } else {
  VAR_6 = 0;
 }

 VAR_6 -= VAR_0;
 *VAR_5 = VAR_6;

 return 0;
}
