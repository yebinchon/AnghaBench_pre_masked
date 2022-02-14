
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {scalar_t__ timeout_adjusted; int timeout_d; int timeout_c; int timeout_b; int timeout_a; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,int,int,int,char*) ;
 struct tpm_chip* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct tpm_chip *VAR_3 = FUNC_2(VAR_0);

 return FUNC_1(VAR_2, "%d %d %d %d [%s]\n",
         FUNC_0(VAR_3->timeout_a),
         FUNC_0(VAR_3->timeout_b),
         FUNC_0(VAR_3->timeout_c),
         FUNC_0(VAR_3->timeout_d),
         VAR_3->timeout_adjusted
         ? "adjusted" : "original");
}
