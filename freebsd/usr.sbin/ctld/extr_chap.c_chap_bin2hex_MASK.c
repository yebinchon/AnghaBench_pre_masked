
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 unsigned char* FUNC_1 (size_t) ;
 int FUNC_2 (unsigned char*,char*,...) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0, size_t VAR_1)
{
 unsigned char *VAR_2, *VAR_3, VAR_4;
 size_t VAR_5;
 size_t VAR_6;

 VAR_5 = VAR_1 * 2 + 3;
 VAR_2 = FUNC_1(VAR_5);
 if (VAR_2 == ((void*)0))
  FUNC_0(1, "malloc");

 VAR_3 = VAR_2;
 VAR_3 += FUNC_2(VAR_3, "0x");
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = VAR_0[VAR_6];
  VAR_3 += FUNC_2(VAR_3, "%02x", VAR_4);
 }

 return (VAR_2);
}
