
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void FUNC_1(u64 VAR_7)
{
 FUNC_0(" FMD CTRL2 %#16llx\n", VAR_7);

 FUNC_0("  AAD1 offset %llu length %llu bytes\n",
     VAR_7 & VAR_2,
     (VAR_7 & VAR_0) >> VAR_1);
 FUNC_0("  AAD2 offset %llu\n",
     (VAR_7 & VAR_3) >> VAR_4);
 FUNC_0("  Payload offset %llu\n",
     (VAR_7 & VAR_5) >> VAR_6);
}
