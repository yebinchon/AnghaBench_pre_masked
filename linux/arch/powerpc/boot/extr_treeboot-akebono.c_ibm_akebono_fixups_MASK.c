
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 void* FUNC_1 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (void*,char*,int *,int) ;

__attribute__((used)) static void FUNC_5(void)
{
 void *VAR_4;
 u32 VAR_5;

 FUNC_0(0x0ULL, VAR_2);


 FUNC_3(VAR_1, 0x1);


 VAR_5 = FUNC_2(VAR_0) & ~0x2;
 FUNC_3(VAR_0, VAR_5);


 VAR_4 = FUNC_1("/plb/opb/ethernet");
 if (VAR_4 > 0) {
  if (VAR_3)
   FUNC_4(VAR_4, "local-mac-address",
    ((u8 *) &VAR_3) + 2 , 6);
 }
}
