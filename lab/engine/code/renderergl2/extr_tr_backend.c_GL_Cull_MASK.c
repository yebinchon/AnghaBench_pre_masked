
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vertFlipBuffer; } ;
struct TYPE_6__ {TYPE_1__ viewParms; } ;
struct TYPE_5__ {int faceCulling; scalar_t__ faceCullFront; } ;
typedef scalar_t__ GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3( int VAR_7 ) {
 if ( VAR_7 == VAR_1 )
 {
  if ( VAR_6.faceCulling != VAR_1 )
   FUNC_1( VAR_3 );
 }
 else
 {
  GLenum VAR_8;
  if ( VAR_5.viewParms.vertFlipBuffer )
   VAR_8 = (VAR_7 == VAR_0) ? VAR_2 : VAR_4;
  else
   VAR_8 = (VAR_7 == VAR_0) ? VAR_4 : VAR_2;

  if ( VAR_6.faceCulling != VAR_7 )
   FUNC_2( VAR_3 );

  if ( VAR_6.faceCullFront != VAR_8 )
  {
   FUNC_0( VAR_8 );
   VAR_6.faceCullFront = VAR_8;
  }
 }

 VAR_6.faceCulling = VAR_7;
}
