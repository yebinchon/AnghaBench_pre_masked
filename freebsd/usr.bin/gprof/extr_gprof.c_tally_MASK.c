
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rawarc {int raw_count; int raw_selfpc; int raw_frompc; } ;
struct TYPE_5__ {char* name; int ncall; } ;
typedef TYPE_1__ nltype ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*,char*,int ) ;

void
FUNC_4(struct rawarc *VAR_5)
{
    nltype *VAR_6;
    nltype *VAR_7;

    VAR_6 = FUNC_1( VAR_5 -> raw_frompc );
    VAR_7 = FUNC_1( VAR_5 -> raw_selfpc );
    if ( VAR_6 == 0 || VAR_7 == 0 )
 return;
    if ( VAR_2
  && FUNC_2( VAR_3 , VAR_6 -> name )
  && FUNC_2( VAR_4 , VAR_7 -> name ) ) {
 return;
    }
    VAR_7 -> ncall += VAR_5 -> raw_count;






    FUNC_0( VAR_6 , VAR_7 , VAR_5 -> raw_count );
}
