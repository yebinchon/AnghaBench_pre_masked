
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int servernode_t ;
struct TYPE_2__ {scalar_t__ numqueriedservers; scalar_t__ currentping; scalar_t__* numservers; int serverlist; scalar_t__ refreshservers; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_2( void )
{
 if (!VAR_1.refreshservers)

  return;

 VAR_1.refreshservers = VAR_2;


 if (VAR_1.numqueriedservers >= 0)
 {
  VAR_1.currentping = *VAR_1.numservers;
  VAR_1.numqueriedservers = *VAR_1.numservers;
 }


 FUNC_1( VAR_1.serverlist, *VAR_1.numservers, sizeof( servernode_t ), VAR_0);

 FUNC_0();
}
