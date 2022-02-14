
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {int tv_usec; scalar_t__ tv_sec; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static double
FUNC_1(void)
{
 double VAR_2;

 FUNC_0(&VAR_1, ((void*)0));
 VAR_2 = (VAR_1 - VAR_0) / 1e6;
 VAR_2 += (VAR_1 - VAR_0);

 return (VAR_2);
}
