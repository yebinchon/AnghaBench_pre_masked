
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1(u_char VAR_0, int VAR_1)
{
 static const char *VAR_2[] =
 {"Reserved", "1.0", "1.2", "1.3", "1.5", "2.0", "2.5", "3.0",
 "3.5", "4.0", "4.5", "5.0", "5.5", "6.0", "7.0", "8.0"};
 static const char *VAR_3[] =
 {"1 ns", "10 ns", "100 ns", "1 us", "10 us", "100 us",
 "1 ms", "10 ms"};
 static const char *VAR_4[] =
 {"None", "10", "100", "1,000", "10,000", "100,000",
 "1,000,000", "10,000,000"};

 FUNC_0("Speed = %s x %s", VAR_2[(VAR_0 >> 3) & 0xF], VAR_3[VAR_0 & 7]);
 if (VAR_1)
  FUNC_0(", scaled by %s", VAR_4[VAR_1 & 7]);
}
