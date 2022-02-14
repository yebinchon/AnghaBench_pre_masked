
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mode; int delay; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5 ( PIA *VAR_0, char * VAR_1 )

{ int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 FUNC_4(VAR_0);

 VAR_8 = VAR_0->mode; VAR_9 = VAR_0->delay;
 VAR_0->mode = 0; VAR_0->delay = 6;

 FUNC_2(VAR_0);

 FUNC_1(4,0);
 for (VAR_2=0;VAR_2<64;VAR_2++) {
     FUNC_1(6,8);
     FUNC_1(6,0xc);
     VAR_5 = 0x100;
     for (VAR_4=0;VAR_4<9;VAR_4++) {
  VAR_7 = (((VAR_2 + 0x180) & VAR_5) != 0) * 2;
  FUNC_1(6,VAR_7+0xc);
  FUNC_1(6,VAR_7+0xd);
  FUNC_1(6,VAR_7+0xc);
  VAR_5 = (VAR_5 >> 1);
     }
     for (VAR_3=0;VAR_3<2;VAR_3++) {
  VAR_6 = 0;
  for (VAR_4=0;VAR_4<8;VAR_4++) {
      FUNC_1(6,0xc);
      FUNC_1(6,0xd);
      FUNC_1(6,0xc);
      VAR_7 = FUNC_0(0);
      VAR_6 = 2*VAR_6 + (VAR_7 == 0x84);
  }
  VAR_1[2*VAR_2+1-VAR_3] = VAR_6;
     }
 }
 FUNC_1(6,8);
 FUNC_1(6,0);
 FUNC_1(5,8);

 FUNC_3(VAR_0);

        if (VAR_8 >= 2) {
                FUNC_2(VAR_0);
                FUNC_1(7,3);
                FUNC_1(4,8);
                FUNC_3(VAR_0);
        }

 VAR_0->mode = VAR_8; VAR_0->delay = VAR_9;
}
