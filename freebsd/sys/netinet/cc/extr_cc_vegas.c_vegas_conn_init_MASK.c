
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vegas {int slow_start_toggle; } ;
struct cc_var {struct vegas* cc_data; } ;



__attribute__((used)) static void
FUNC_0(struct cc_var *VAR_0)
{
 struct vegas *VAR_1;

 VAR_1 = VAR_0->cc_data;
 VAR_1->slow_start_toggle = 1;
}
