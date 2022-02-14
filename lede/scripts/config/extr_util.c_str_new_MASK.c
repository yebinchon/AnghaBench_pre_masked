
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gstr {int len; int s; scalar_t__ max_width; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;

struct gstr FUNC_2(void)
{
 struct gstr VAR_0;
 VAR_0.s = FUNC_1(sizeof(char) * 64);
 VAR_0.len = 64;
 VAR_0.max_width = 0;
 FUNC_0(VAR_0.s, "\0");
 return VAR_0;
}
