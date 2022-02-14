
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void
FUNC_3(u_char *VAR_0, int VAR_1)
{
 if (VAR_1 < 6) {
  FUNC_1("\tWrong length for BAR tuple\n");
  return;
 }
 FUNC_1("\tBAR %d: size = ", *VAR_0 & 7);
 FUNC_0(FUNC_2(VAR_0 + 2));
 FUNC_1(", %s%s%s%s\n",
        (*VAR_0 & 0x10) ? "I/O" : "Memory",
        (*VAR_0 & 0x20) ? ", Prefetch" : "",
        (*VAR_0 & 0x40) ? ", Cacheable" : "",
        (*VAR_0 & 0x80) ? ", <1Mb" : "");
}
