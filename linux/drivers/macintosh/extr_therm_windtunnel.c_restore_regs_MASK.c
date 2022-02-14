
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int r0; int fan; int r25; int r23; int r20; int r1; TYPE_1__* of_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int,int ,int) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_2( void )
{
 FUNC_0( &VAR_2.of_dev->dev, &VAR_1 );
 FUNC_0( &VAR_2.of_dev->dev, &VAR_0 );

 FUNC_1( VAR_2.fan, 0x01, VAR_2.r1, 1 );
 FUNC_1( VAR_2.fan, 0x20, VAR_2.r20, 1 );
 FUNC_1( VAR_2.fan, 0x23, VAR_2.r23, 1 );
 FUNC_1( VAR_2.fan, 0x25, VAR_2.r25, 1 );
 FUNC_1( VAR_2.fan, 0x00, VAR_2.r0, 1 );
}
