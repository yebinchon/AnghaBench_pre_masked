
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_prefix {scalar_t__ ndpr_pltime; scalar_t__ ndpr_vltime; void* ndpr_expire; void* ndpr_preferred; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct nd_prefix *VAR_2)
{
 if (VAR_2->ndpr_pltime == VAR_0)
  VAR_2->ndpr_preferred = 0;
 else
  VAR_2->ndpr_preferred = VAR_1 + VAR_2->ndpr_pltime;
 if (VAR_2->ndpr_vltime == VAR_0)
  VAR_2->ndpr_expire = 0;
 else
  VAR_2->ndpr_expire = VAR_1 + VAR_2->ndpr_vltime;

 return 0;
}
