
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rescale {int denominator; int numerator; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
      struct rescale *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_1(VAR_0, "output-ohms",
           &VAR_1->denominator);
 if (VAR_2) {
  FUNC_0(VAR_0, "failed to read output-ohms: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0, "full-ohms",
           &VAR_1->numerator);
 if (VAR_2) {
  FUNC_0(VAR_0, "failed to read full-ohms: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_3 = FUNC_2(VAR_1->numerator, VAR_1->denominator);
 VAR_1->numerator /= VAR_3;
 VAR_1->denominator /= VAR_3;

 return 0;
}
