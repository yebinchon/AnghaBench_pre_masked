
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rescale {int numerator; int denominator; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
       struct rescale *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3 = 1;
 u32 VAR_4 = 1;
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, "sense-resistor-micro-ohms",
           &VAR_2);
 if (VAR_6) {
  FUNC_0(VAR_0, "failed to read the sense resistance: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_1(VAR_0, "sense-gain-mult", &VAR_3);
 FUNC_1(VAR_0, "sense-gain-div", &VAR_4);






 VAR_5 = FUNC_2(VAR_2, 1000000);
 VAR_1->numerator = 1000000 / VAR_5;
 VAR_1->denominator = VAR_2 / VAR_5;

 VAR_5 = FUNC_2(VAR_1->numerator, VAR_3);
 VAR_1->numerator /= VAR_5;
 VAR_1->denominator *= VAR_3 / VAR_5;

 VAR_5 = FUNC_2(VAR_1->denominator, VAR_4);
 VAR_1->numerator *= VAR_4 / VAR_5;
 VAR_1->denominator /= VAR_5;

 return 0;
}
