
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vadc_prescale_ratio {int dummy; } ;
struct vadc_linear_graph {int dummy; } ;
typedef int s64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (struct vadc_linear_graph const*,int ,int,int *) ;

__attribute__((used)) static int FUNC_4(const struct vadc_linear_graph *VAR_1,
     const struct vadc_prescale_ratio *VAR_2,
     bool VAR_3, u16 VAR_4,
     int *VAR_5)
{
 s64 VAR_6 = 0;
 int VAR_7;

 FUNC_3(VAR_1, VAR_4, VAR_3, &VAR_6);

 if (VAR_3)
  VAR_6 = FUNC_1(VAR_6, 1000);

 VAR_7 = FUNC_2(VAR_0,
      FUNC_0(VAR_0),
      VAR_6, VAR_5);
 if (VAR_7)
  return VAR_7;

 *VAR_5 *= 1000;

 return 0;
}
