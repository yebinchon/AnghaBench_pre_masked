
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct push_cas_option {int nr; int use_tracking_for_rest; } ;



int FUNC_0(const struct push_cas_option *VAR_0)
{
 return !VAR_0->use_tracking_for_rest && !VAR_0->nr;
}
