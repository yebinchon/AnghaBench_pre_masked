
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,double,long,...) ;

void FUNC_2(double VAR_5, double VAR_6)
{
    long VAR_7, VAR_8;

    FUNC_0();
    asm("fcom %2\n"
        "fstsw %%ax\n"
        : "=a" (VAR_8)
        : "t" (VAR_5), "u" (VAR_6));
    FUNC_1("fcom(%f %f)=%04lx\n",
           VAR_5, VAR_6, VAR_8 & (0x4500 | VAR_3));
    FUNC_0();
    asm("fucom %2\n"
        "fstsw %%ax\n"
        : "=a" (VAR_8)
        : "t" (VAR_5), "u" (VAR_6));
    FUNC_1("fucom(%f %f)=%04lx\n",
           VAR_5, VAR_6, VAR_8 & (0x4500 | VAR_3));
    if (VAR_4) {

        FUNC_0();
        asm("fcomi %3, %2\n"
            "fstsw %%ax\n"
            "pushf\n"
            "pop %0\n"
            : "=r" (VAR_7), "=a" (VAR_8)
            : "t" (VAR_5), "u" (VAR_6));
        FUNC_1("fcomi(%f %f)=%04lx %02lx\n",
               VAR_5, VAR_6, VAR_8 & VAR_3, VAR_7 & (VAR_2 | VAR_1 | VAR_0));
        FUNC_0();
        asm("fucomi %3, %2\n"
            "fstsw %%ax\n"
            "pushf\n"
            "pop %0\n"
            : "=r" (VAR_7), "=a" (VAR_8)
            : "t" (VAR_5), "u" (VAR_6));
        FUNC_1("fucomi(%f %f)=%04lx %02lx\n",
               VAR_5, VAR_6, VAR_8 & VAR_3, VAR_7 & (VAR_2 | VAR_1 | VAR_0));
    }
    FUNC_0();
    asm volatile("fxam\n"
                 "fstsw %%ax\n"
                 : "=a" (VAR_8)
                 : "t" (VAR_5));
    FUNC_1("fxam(%f)=%04lx\n", VAR_5, VAR_8 & 0x4700);
    FUNC_0();
}
