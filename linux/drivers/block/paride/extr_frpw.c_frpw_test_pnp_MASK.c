
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int delay; int saved_r0; int saved_r2; } ;
typedef TYPE_1__ PIA ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7 ( PIA *VAR_0 )



{ int VAR_1, VAR_2, VAR_3;






 VAR_1 = VAR_0->delay;
 VAR_0->delay = 10;

 VAR_0->saved_r0 = FUNC_1();
        VAR_0->saved_r2 = FUNC_3();

 FUNC_6(4); FUNC_5(4); FUNC_6(6); FUNC_6(7);
 VAR_2 = FUNC_2() & 0xff; FUNC_6(4); VAR_3 = FUNC_2() & 0xff;
 FUNC_6(0xc); FUNC_6(0xe); FUNC_6(4);

 VAR_0->delay = VAR_1;
        FUNC_5(VAR_0->saved_r0);
        FUNC_6(VAR_0->saved_r2);

 return ((~VAR_2&0x40) && (VAR_3&0x40));
}
