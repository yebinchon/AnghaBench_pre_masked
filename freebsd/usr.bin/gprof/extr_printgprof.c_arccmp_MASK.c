
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cycleno; int ncall; } ;
typedef TYPE_1__ nltype ;
struct TYPE_7__ {double arc_time; double arc_childtime; scalar_t__ arc_count; TYPE_1__* arc_childp; TYPE_1__* arc_parentp; } ;
typedef TYPE_2__ arctype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(arctype *VAR_5, arctype *VAR_6)
{
    nltype *VAR_7 = VAR_5 -> arc_parentp;
    nltype *VAR_8 = VAR_5 -> arc_childp;
    nltype *VAR_9 = VAR_6 -> arc_parentp;
    nltype *VAR_10 = VAR_6 -> arc_childp;
    double VAR_11;
    double VAR_12;
    if ( VAR_7 == VAR_8 ) {

 return VAR_2;
    }
    if ( VAR_9 == VAR_10 ) {

 return VAR_1;
    }
    if ( VAR_7 -> cycleno != 0 && VAR_8 -> cycleno != 0 &&
 VAR_7 -> cycleno == VAR_8 -> cycleno ) {

 if ( VAR_9 -> cycleno != 0 && VAR_10 -> cycleno != 0 &&
     VAR_9 -> cycleno == VAR_10 -> cycleno ) {

     if ( VAR_5 -> arc_count < VAR_6 -> arc_count ) {
  return VAR_2;
     }
     if ( VAR_5 -> arc_count > VAR_6 -> arc_count ) {
  return VAR_1;
     }
     return VAR_0;
 } else {

     return VAR_2;
 }
    } else {

 if ( VAR_9 -> cycleno != 0 && VAR_10 -> cycleno != 0 &&
     VAR_9 -> cycleno == VAR_10 -> cycleno ) {

     return VAR_1;
 } else {

     VAR_11 = VAR_5 -> arc_time + VAR_5 -> arc_childtime;
     VAR_12 = VAR_6 -> arc_time + VAR_6 -> arc_childtime;
     if ( VAR_11 < VAR_12 )
  return VAR_2;
     if ( VAR_11 > VAR_12 )
  return VAR_1;
     if ( VAR_5 -> arc_count < VAR_6 -> arc_count )
  return VAR_2;
     if ( VAR_5 -> arc_count > VAR_6 -> arc_count )
  return VAR_1;
     return VAR_0;
 }
    }
}
