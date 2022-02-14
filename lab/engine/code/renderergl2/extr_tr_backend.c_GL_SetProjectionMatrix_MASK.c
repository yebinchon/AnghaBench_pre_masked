
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mat4_t ;
struct TYPE_4__ {scalar_t__ vertFlipBuffer; } ;
struct TYPE_6__ {TYPE_1__ viewParms; } ;
struct TYPE_5__ {int modelviewProjection; int modelview; int * projection; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_2(mat4_t VAR_2)
{
 FUNC_0(VAR_2, VAR_1.projection);
 if ( VAR_0.viewParms.vertFlipBuffer ) {
  VAR_1.projection[ 1] = -VAR_1.projection[ 1];
  VAR_1.projection[ 5] = -VAR_1.projection[ 5];
  VAR_1.projection[ 9] = -VAR_1.projection[ 9];
  VAR_1.projection[13] = -VAR_1.projection[13];
 }
 FUNC_1(VAR_1.projection, VAR_1.modelview, VAR_1.modelviewProjection);
}
