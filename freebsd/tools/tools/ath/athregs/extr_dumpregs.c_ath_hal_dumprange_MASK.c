
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int FILE ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,scalar_t__,int,...) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_1, u_int VAR_2, u_int VAR_3)
{
 u_int VAR_4;

 for (VAR_4 = VAR_2; VAR_4+16 <= VAR_3; VAR_4 += 5*4)
  FUNC_1(VAR_1,
   "%04x %08x  %04x %08x  %04x %08x  %04x %08x  %04x %08x\n"
   , VAR_4, FUNC_0(VAR_0, VAR_4)
   , VAR_4+4, FUNC_0(VAR_0, VAR_4+4)
   , VAR_4+8, FUNC_0(VAR_0, VAR_4+8)
   , VAR_4+12, FUNC_0(VAR_0, VAR_4+12)
   , VAR_4+16, FUNC_0(VAR_0, VAR_4+16)
  );
 switch (VAR_3-VAR_4) {
 case 16:
  FUNC_1(VAR_1
   , "%04x %08x  %04x %08x  %04x %08x  %04x %08x\n"
   , VAR_4, FUNC_0(VAR_0, VAR_4)
   , VAR_4+4, FUNC_0(VAR_0, VAR_4+4)
   , VAR_4+8, FUNC_0(VAR_0, VAR_4+8)
   , VAR_4+12, FUNC_0(VAR_0, VAR_4+12)
  );
  break;
 case 12:
  FUNC_1(VAR_1, "%04x %08x  %04x %08x  %04x %08x\n"
   , VAR_4, FUNC_0(VAR_0, VAR_4)
   , VAR_4+4, FUNC_0(VAR_0, VAR_4+4)
   , VAR_4+8, FUNC_0(VAR_0, VAR_4+8)
  );
  break;
 case 8:
  FUNC_1(VAR_1, "%04x %08x  %04x %08x\n"
   , VAR_4, FUNC_0(VAR_0, VAR_4)
   , VAR_4+4, FUNC_0(VAR_0, VAR_4+4)
  );
  break;
 case 4:
  FUNC_1(VAR_1, "%04x %08x\n"
   , VAR_4, FUNC_0(VAR_0, VAR_4)
  );
  break;
 }
}
