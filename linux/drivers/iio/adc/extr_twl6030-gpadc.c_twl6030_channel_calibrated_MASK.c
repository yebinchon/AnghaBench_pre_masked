
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6030_ideal_code {int code2; } ;
struct twl6030_gpadc_platform_data {struct twl6030_ideal_code* ideal; int nchannels; } ;


 int FUNC_0 (struct twl6030_ideal_code const*,int,int ) ;

__attribute__((used)) static int FUNC_1(const struct twl6030_gpadc_platform_data
  *VAR_0, int VAR_1)
{
 const struct twl6030_ideal_code *VAR_2 = VAR_0->ideal;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0->nchannels);

 return VAR_0->ideal[VAR_3].code2;
}
