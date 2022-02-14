
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cf {float f; double c; } ;


 int FUNC_0 (int) ;
 double VAR_0 ;
 float FUNC_1 (float) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, float VAR_2, union cf VAR_3)
{
 double VAR_4;

 VAR_4 = FUNC_1(VAR_2 - VAR_3.f) / VAR_2;
 FUNC_0(VAR_4 <= VAR_0);
 if (VAR_4 > VAR_0) {
  FUNC_2("Error in %s\n", VAR_1);
  FUNC_2("Got      0x%08x %12g\n", VAR_3.c, VAR_3.f);
  VAR_3.f = VAR_2;
  FUNC_2("Expected 0x%08x %12g (%.15lg)\n", VAR_3.c, VAR_3.f, VAR_2);
  FUNC_2("Epsilon=%lg, rather than %g\n", VAR_4, VAR_0);
 }
}
