
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pickup_name; scalar_t__ icon; } ;
typedef TYPE_1__ gitem_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2( int VAR_4 ) {
 gitem_t *VAR_5;

 VAR_5 = &VAR_1[VAR_4];

 if ( VAR_5->icon && VAR_2 < VAR_0 ) {
  VAR_3[VAR_2++] = FUNC_1( VAR_5->icon );
 }

 FUNC_0( VAR_5->pickup_name );
}
