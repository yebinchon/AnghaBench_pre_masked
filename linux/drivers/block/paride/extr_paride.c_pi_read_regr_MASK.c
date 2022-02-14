
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* proto; } ;
struct TYPE_5__ {int (* read_regr ) (TYPE_2__*,int,int) ;} ;
typedef TYPE_2__ PIA ;


 int FUNC_0 (TYPE_2__*,int,int) ;

int FUNC_1(PIA * VAR_0, int VAR_1, int VAR_2)
{
 return VAR_0->proto->read_regr(VAR_0, VAR_1, VAR_2);
}
