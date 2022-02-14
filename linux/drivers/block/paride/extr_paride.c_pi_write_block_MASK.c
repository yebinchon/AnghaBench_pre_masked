
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* proto; } ;
struct TYPE_5__ {int (* write_block ) (TYPE_2__*,char*,int) ;} ;
typedef TYPE_2__ PIA ;


 int FUNC_0 (TYPE_2__*,char*,int) ;

void FUNC_1(PIA * VAR_0, char *VAR_1, int VAR_2)
{
 VAR_0->proto->write_block(VAR_0, VAR_1, VAR_2);
}
