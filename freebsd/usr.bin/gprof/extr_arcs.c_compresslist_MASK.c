
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t size; struct TYPE_10__* next; TYPE_4__** list; } ;
typedef TYPE_3__ cltype ;
struct TYPE_11__ {int arc_cyclecnt; int arc_flags; int arc_count; TYPE_2__* arc_childp; TYPE_1__* arc_parentp; struct TYPE_11__* arc_next; } ;
typedef TYPE_4__ arctype ;
struct TYPE_9__ {int flags; int parentcnt; char* name; int npropcall; } ;
struct TYPE_8__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,char*,char const*,...) ;

void
FUNC_2(void)
{
    cltype *VAR_8;
    cltype **VAR_9;
    arctype **VAR_10;
    arctype **VAR_11;
    arctype *VAR_12;
    arctype *VAR_13;
    arctype *VAR_14;
    arctype *VAR_15;
    arctype *VAR_16;
    int VAR_17;
    int VAR_18;
    int VAR_19;




    VAR_17 = 0;
    VAR_18 = 0;
    VAR_19 = 0;
    for ( VAR_11 = &VAR_4 , VAR_12 = VAR_4 ; VAR_12 ; ) {
 if ( VAR_12 -> arc_cyclecnt == 0 ) {
     VAR_12 -> arc_flags &= ~VAR_3;
     *VAR_11 = VAR_12 -> arc_next;
     VAR_12 -> arc_next = 0;
     VAR_12 = *VAR_11;
     continue;
 }
 if ( VAR_12 -> arc_childp -> flags & VAR_2 ) {
     if ( VAR_12 -> arc_cyclecnt > VAR_17 ||
  ( VAR_12 -> arc_cyclecnt == VAR_17 &&
  VAR_12 -> arc_cyclecnt < VAR_14 -> arc_count ) ) {
  VAR_17 = VAR_12 -> arc_cyclecnt;
  VAR_14 = VAR_12;
     }
 } else if ( VAR_12 -> arc_childp -> parentcnt > 1 ) {
     if ( VAR_12 -> arc_cyclecnt > VAR_18 ||
  ( VAR_12 -> arc_cyclecnt == VAR_18 &&
  VAR_12 -> arc_cyclecnt < VAR_15 -> arc_count ) ) {
  VAR_18 = VAR_12 -> arc_cyclecnt;
  VAR_15 = VAR_12;
     }
 } else {
     if ( VAR_12 -> arc_cyclecnt > VAR_19 ||
  ( VAR_12 -> arc_cyclecnt == VAR_19 &&
  VAR_12 -> arc_cyclecnt < VAR_16 -> arc_count ) ) {
  VAR_19 = VAR_12 -> arc_cyclecnt;
  VAR_16 = VAR_12;
     }
 }
 VAR_11 = &VAR_12 -> arc_next;
 VAR_12 = VAR_12 -> arc_next;
    }
    if ( VAR_17 > 0 ) {



 VAR_13 = VAR_14;



    } else if ( VAR_18 > 0 ) {




 VAR_13 = VAR_15;



    } else {




 VAR_13 = VAR_16;



    }
    VAR_13 -> arc_flags |= VAR_1;
    VAR_13 -> arc_childp -> parentcnt -= 1;
    VAR_13 -> arc_childp -> npropcall -= VAR_13 -> arc_count;
    FUNC_1( "\t%s to %s with %ld calls\n" , VAR_13 -> arc_parentp -> name ,
 VAR_13 -> arc_childp -> name , VAR_13 -> arc_count );
    VAR_9 = &VAR_6;
    for ( VAR_8 = VAR_6 ; VAR_8 ; ) {
 VAR_11 = &VAR_8 -> list[ VAR_8 -> size ];
 for ( VAR_10 = VAR_8 -> list ; VAR_10 < VAR_11 ; VAR_10++ )
     if ( (*VAR_10) -> arc_flags & VAR_1 )
  break;
 if ( VAR_10 == VAR_11 ) {
     VAR_9 = &VAR_8 -> next;
     VAR_8 = VAR_8 -> next;
     continue;
 }
 for ( VAR_10 = VAR_8 -> list ; VAR_10 < VAR_11 ; VAR_10++ )
     (*VAR_10) -> arc_cyclecnt--;
 VAR_5--;
 *VAR_9 = VAR_8 -> next;
 VAR_8 = VAR_8 -> next;
 FUNC_0( VAR_8 );
    }
}
