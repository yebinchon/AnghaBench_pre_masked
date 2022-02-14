
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int nla_len; } ;



int FUNC_0(const struct nlattr *VAR_0, int VAR_1)
{
 return VAR_1 >= sizeof(*VAR_0) &&
        VAR_0->nla_len >= sizeof(*VAR_0) &&
        VAR_0->nla_len <= VAR_1;
}
