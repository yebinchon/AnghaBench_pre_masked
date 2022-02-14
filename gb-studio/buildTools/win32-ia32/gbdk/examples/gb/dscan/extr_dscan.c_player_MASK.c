
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT16 ;
typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int) ;
 int * VAR_15 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int,scalar_t__,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int* VAR_23 ;
 scalar_t__* VAR_24 ;
 int * VAR_25 ;
 int FUNC_16 () ;

void FUNC_17()
{
  UBYTE VAR_26;
  UBYTE VAR_27;
  UINT16 VAR_28;

  VAR_26 = FUNC_8();

  if( VAR_26 & VAR_10 ) {
    if( VAR_18 == VAR_2 ) {

      VAR_28 = VAR_5;
      FUNC_16();
      VAR_28 |= ((UINT16)VAR_5 << 8);
      FUNC_7(VAR_28);
      FUNC_1();
      FUNC_5();
      FUNC_4();
      FUNC_6();
      FUNC_2();
      FUNC_3();
      FUNC_0( 500 );
    } else {
      FUNC_14();
      FUNC_16();
      VAR_26 = FUNC_8();
      while( !(VAR_26 & VAR_10) ) {
        VAR_26 = FUNC_8();
        if( VAR_26 & VAR_6 ) {
          if(VAR_19 > 0)
            VAR_19--;
          FUNC_13( VAR_19 );
          FUNC_16();
        } else if( VAR_26 & VAR_11 ) {
          if(VAR_19 < 8)
            VAR_19++;
          FUNC_13( VAR_19 );
          FUNC_16();
        } else if( VAR_26 & VAR_7 ) {
          while( FUNC_8() & VAR_7 ) {
            if(VAR_21 > 0)
              VAR_21--;
            FUNC_15( VAR_21 );
            FUNC_0( 250 );
          }
          FUNC_15( VAR_20 );
        } else if( VAR_26 & VAR_8 ) {
          while( FUNC_8() & VAR_8 ) {
            if(VAR_21 < 99)
              VAR_21++;
            FUNC_15( VAR_21 );
            FUNC_0( 250 );
          }
          FUNC_15( VAR_20 );
        } else if( VAR_26 & VAR_9 ) {
          VAR_27 = VAR_17;
          VAR_17 = VAR_16;
          VAR_16 = VAR_27;
          FUNC_16();
        }
      }
      FUNC_16();
      FUNC_1();
      FUNC_0( 500 );
    }
    return;
  }


  if( VAR_18 > 1 ) {
    if( VAR_18 < VAR_2 ) {
      FUNC_11( 0, VAR_18*2+VAR_0 );
      FUNC_10( 0, VAR_15[VAR_18*2+VAR_0] );
      FUNC_11( 1, VAR_18*2+VAR_1 );
      FUNC_10( 1, VAR_15[VAR_18*2+VAR_1] );
      VAR_18++;
    } else {
      FUNC_11( 0, VAR_4 );
      FUNC_11( 1, VAR_4 );
      FUNC_12();
    }
    return;
  }


  if( (VAR_26&VAR_7)&&(VAR_22>VAR_14) ) {
    VAR_22--;
    FUNC_9( 0, VAR_22, VAR_3 ); FUNC_9( 1, VAR_22+8, VAR_3 );
  } else if( (VAR_26&VAR_8)&&(VAR_22<VAR_12) ) {
    VAR_22++;
    FUNC_9( 0, VAR_22, VAR_3 ); FUNC_9( 1, VAR_22+8, VAR_3 );
  }

  if( VAR_26 & VAR_16 ) {
    if( VAR_18 == 0 ) {
      VAR_18 = 1;
      for( VAR_27=0; VAR_27<VAR_13; VAR_27++ ) {
        if( VAR_23[VAR_27] == 0 ) {
          VAR_23[VAR_27] = 1; VAR_24[VAR_27] = VAR_22-4; VAR_25[VAR_27] = VAR_3;
          break;
        }
      }
    }
  } else if( VAR_26 & VAR_17 ) {
    if( VAR_18 == 0 ) {
      VAR_18 = 1;
      for( VAR_27=0; VAR_27<VAR_13; VAR_27++ ) {
        if( VAR_23[VAR_27] == 0 ) {
          VAR_23[VAR_27] = 1; VAR_24[VAR_27] = VAR_22+12; VAR_25[VAR_27] = VAR_3;
          break;
        }
      }
    }
  } else if( VAR_18 == 1 ) {
    VAR_18 = 0;
  }
}
