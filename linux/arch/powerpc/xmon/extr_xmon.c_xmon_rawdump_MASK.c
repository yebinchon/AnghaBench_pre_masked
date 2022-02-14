
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 size_t VAR_1 ;
 long FUNC_0 (unsigned long,unsigned char*,long) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2 (unsigned long VAR_2, long VAR_3)
{
 long VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned char VAR_8[16];

 for (VAR_4 = VAR_3; VAR_4 > 0;) {
  VAR_6 = VAR_4 < 16? VAR_4: 16;
  VAR_7 = FUNC_0(VAR_2, VAR_8, VAR_6);
  VAR_2 += VAR_7;
  for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
   if (VAR_5 < VAR_7)
    FUNC_1("%.2x", VAR_8[VAR_5]);
   else
    FUNC_1("%s", VAR_0[VAR_1]);
  }
  VAR_4 -= VAR_6;
  if (VAR_7 < VAR_6)
   break;
 }
 FUNC_1("\n");
}
