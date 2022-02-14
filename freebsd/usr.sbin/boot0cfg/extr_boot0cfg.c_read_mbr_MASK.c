
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int ssize_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,char const*) ;
 int FUNC_5 (int,char*,char const*) ;
 int FUNC_6 (int,int ,int ) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (int,int *,int) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_4, u_int8_t **VAR_5, int VAR_6)
{
    u_int8_t VAR_7[VAR_0];
    int VAR_8, VAR_9;
    int VAR_10;
    ssize_t VAR_11;

    if ((VAR_9 = FUNC_9(VAR_4, VAR_2)) == -1)
        FUNC_4(1, "open %s", VAR_4);
    if ((VAR_11 = FUNC_10(VAR_9, VAR_7, VAR_0)) == -1)
        FUNC_4(1, "read %s", VAR_4);
    if (VAR_11 != VAR_0)
        FUNC_5(1, "%s: short read", VAR_4);
    if (FUNC_3(VAR_7 + VAR_1) != 0xaa55)
        FUNC_5(1, "%s: bad magic", VAR_4);

    if (! (VAR_10 = FUNC_0(VAR_7))) {
 if (VAR_6)
     FUNC_5(1, "%s: unknown or incompatible boot code", VAR_4);
    } else if (FUNC_1(VAR_7) == 0x101) {
 VAR_8 = 1024;
 if ((*VAR_5 = FUNC_7(VAR_8)) == ((void*)0))
     FUNC_5(1, "%s: unable to allocate read buffer", VAR_4);
 if (FUNC_6(VAR_9, 0, VAR_3) == -1 ||
     (VAR_11 = FUNC_10(VAR_9, *VAR_5, VAR_8)) == -1)
     FUNC_4(1, "%s", VAR_4);
 if (VAR_11 != VAR_8)
     FUNC_5(1, "%s: short read", VAR_4);
 FUNC_2(VAR_9);
 return (VAR_8);
    }
    if ((*VAR_5 = FUNC_7(sizeof(VAR_7))) == ((void*)0))
 FUNC_5(1, "%s: unable to allocate MBR buffer", VAR_4);
    FUNC_8(*VAR_5, VAR_7, sizeof(VAR_7));
    FUNC_2(VAR_9);

    return sizeof(VAR_7);
}
