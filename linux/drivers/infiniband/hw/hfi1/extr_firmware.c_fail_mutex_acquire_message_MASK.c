
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;


 int FUNC_0 (struct hfi1_devdata*,char*,char const*) ;

__attribute__((used)) static void FUNC_1(struct hfi1_devdata *VAR_0,
           const char *VAR_1)
{
 FUNC_0(VAR_0,
     "%s: hardware mutex stuck - suggest rebooting the machine\n",
     VAR_1);
}
