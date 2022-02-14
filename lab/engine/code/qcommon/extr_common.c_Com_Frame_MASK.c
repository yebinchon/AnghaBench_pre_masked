
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_24__ {int integer; } ;
struct TYPE_23__ {int integer; } ;
struct TYPE_22__ {int integer; } ;
struct TYPE_21__ {scalar_t__ integer; } ;
struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {int integer; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {void* modified; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ integer; void* modified; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,int,int,int,...) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (char*) ;
 int FUNC_18 () ;
 int VAR_0 ;
 TYPE_12__* VAR_1 ;
 TYPE_11__* VAR_2 ;
 TYPE_10__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_9__* VAR_6 ;
 TYPE_8__* VAR_7 ;
 TYPE_7__* VAR_8 ;
 TYPE_6__* VAR_9 ;
 TYPE_5__* VAR_10 ;
 TYPE_4__* VAR_11 ;
 TYPE_3__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 TYPE_1__* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

void FUNC_20( void ) {

 int VAR_19, VAR_20;
 int VAR_21, VAR_22;
 static int VAR_23 = 0, VAR_24 = 0;

 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;


 if ( FUNC_19 (VAR_0) ) {
  return;
 }

 VAR_25 =0;
 VAR_26 =0;
 VAR_27 =0;
 VAR_28 = 0;
 VAR_29 = 0;


 FUNC_9();




 if ( VAR_11->integer ) {
  VAR_25 = FUNC_18 ();
 }


 if(!VAR_13->integer)
 {
  if(VAR_3->integer)
   VAR_20 = FUNC_15();
  else
  {
   if(VAR_9->integer && VAR_7->integer > 0)
    VAR_20 = 1000 / VAR_7->integer;
   else if(VAR_14->integer && VAR_8->integer > 0)
    VAR_20 = 1000 / VAR_8->integer;
   else if(VAR_6->integer > 0)
    VAR_20 = 1000 / VAR_6->integer;
   else
    VAR_20 = 1;

   VAR_21 = VAR_5 - VAR_23;
   VAR_24 += VAR_21 - VAR_20;

   if(VAR_24 > VAR_20)
    VAR_24 = VAR_20;



   VAR_20 -= VAR_24;
  }
 }
 else
  VAR_20 = 1;

 do
 {
  if(VAR_12->integer)
  {
   VAR_22 = FUNC_16();

   VAR_21 = FUNC_8(VAR_20);

   if(VAR_22 < VAR_21)
    VAR_21 = VAR_22;
  }
  else
   VAR_21 = FUNC_8(VAR_20);

  if(VAR_2->integer || VAR_21 < 1)
   FUNC_13(0);
  else
   FUNC_13(VAR_21 - 1);
 } while(VAR_6->integer && FUNC_8(VAR_20));

 FUNC_11();

 VAR_23 = VAR_5;
 VAR_5 = FUNC_4();

 VAR_19 = VAR_5 - VAR_23;

 FUNC_2 ();

 if (VAR_1->modified)
 {
  FUNC_3();
  VAR_1->modified = VAR_15;
 }


 VAR_19 = FUNC_5(VAR_19);




 if ( VAR_11->integer ) {
  VAR_26 = FUNC_18 ();
 }

 FUNC_14( VAR_19 );





 if ( VAR_3->modified ) {

  FUNC_10( "dedicated", "0", 0 );
  VAR_3->modified = VAR_15;
  if ( !VAR_3->integer ) {
   FUNC_17( "dedicated set to 0" );
   FUNC_0();
  }
 }
 if ( VAR_11->integer ) {
  VAR_27 = FUNC_18 ();
 }
 FUNC_4();
 FUNC_2 ();





 if ( VAR_11->integer ) {
  VAR_28 = FUNC_18 ();
 }

 FUNC_1( VAR_19 );

 if ( VAR_11->integer ) {
  VAR_29 = FUNC_18 ();
 }
 FUNC_12();




 if ( VAR_11->integer ) {
  int VAR_30, VAR_31, VAR_32, VAR_33;

  VAR_30 = VAR_29 - VAR_26;
  VAR_31 = VAR_27 - VAR_26;
  VAR_32 = VAR_26 - VAR_25 + VAR_28 - VAR_27;
  VAR_33 = VAR_29 - VAR_28;
  VAR_31 -= VAR_18;
  VAR_33 -= VAR_17 + VAR_16;

  FUNC_6 ("frame:%i all:%3i sv:%3i ev:%3i cl:%3i gm:%3i rf:%3i bk:%3i\n",
      VAR_4, VAR_30, VAR_31, VAR_32, VAR_33, VAR_18, VAR_17, VAR_16 );
 }




 if ( VAR_10->integer ) {

  extern int VAR_34, VAR_35, VAR_36;
  extern int VAR_37;

  FUNC_6 ("%4i traces  (%ib %ip) %4i points\n", VAR_34,
   VAR_35, VAR_36, VAR_37);
  VAR_34 = 0;
  VAR_35 = 0;
  VAR_36 = 0;
  VAR_37 = 0;
 }

 FUNC_7( );

 VAR_4++;
}
