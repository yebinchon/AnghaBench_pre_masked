
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mISDN_dsp_element {int num_args; TYPE_1__* args; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; char* def; int desc; } ;


 struct mISDN_dsp_element* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*,char*,char*,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct mISDN_dsp_element *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;
 char *VAR_5 = VAR_2;

 *VAR_2 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3->num_args; VAR_4++)
  VAR_5 += FUNC_1(VAR_5, "Name:        %s\n%s%s%sDescription: %s\n\n",
        VAR_3->args[VAR_4].name,
        VAR_3->args[VAR_4].def ? "Default:     " : "",
        VAR_3->args[VAR_4].def ? VAR_3->args[VAR_4].def : "",
        VAR_3->args[VAR_4].def ? "\n" : "",
        VAR_3->args[VAR_4].desc);

 return VAR_5 - VAR_2;
}
