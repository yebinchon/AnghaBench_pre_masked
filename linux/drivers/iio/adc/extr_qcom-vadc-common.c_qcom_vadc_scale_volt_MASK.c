
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vadc_prescale_ratio {int den; int num; } ;
struct vadc_linear_graph {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct vadc_linear_graph const*,int ,int,int*) ;

__attribute__((used)) static int FUNC_2(const struct vadc_linear_graph *VAR_0,
    const struct vadc_prescale_ratio *VAR_1,
    bool VAR_2, u16 VAR_3,
    int *VAR_4)
{
 s64 VAR_5 = 0, VAR_6 = 0;

 FUNC_1(VAR_0, VAR_3, VAR_2, &VAR_5);

 VAR_5 = VAR_5 * VAR_1->den;
 VAR_6 = FUNC_0(VAR_5, VAR_1->num);
 *VAR_4 = VAR_6;

 return 0;
}
