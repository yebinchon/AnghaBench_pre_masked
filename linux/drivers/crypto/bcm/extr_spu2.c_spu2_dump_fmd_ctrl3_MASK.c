
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(u64 VAR_3)
{
 FUNC_0(" FMD CTRL3 %#16llx\n", VAR_3);

 FUNC_0("  Payload length %llu bytes\n", VAR_3 & VAR_0);
 FUNC_0("  TLS length %llu bytes\n",
     (VAR_3 & VAR_1) >> VAR_2);
}
