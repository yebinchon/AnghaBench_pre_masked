
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void**,int,int) ;
 char* FUNC_4 (char**,char*) ;
 void* FUNC_5 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_6(char *VAR_2)
{
 uint8_t VAR_3[VAR_0];
 char *VAR_4;
 long VAR_5;
 int VAR_6;

 FUNC_3(VAR_3, 0x00, VAR_0);
 VAR_6 = 0;
 while ((VAR_4 = FUNC_4(&VAR_2, ":")) != ((void*)0) && VAR_6 < VAR_0) {
  VAR_1 = 0;
  VAR_5 = FUNC_5(VAR_4, (char **)((void*)0), 16);
  if (VAR_5 == 0 && VAR_1 != 0)
   FUNC_1(1, "Failed to parse Ethernet address given: %s\n", VAR_4);
  if (VAR_5 < 0x00 || VAR_5 > 0xff)
   FUNC_1(1, "Failed to parse Ethernet address given: %lx\n", VAR_5);
  VAR_3[VAR_6++] = FUNC_5(VAR_4, (char **)((void*)0), 16);
 }

 if (VAR_6 != VAR_0)
  FUNC_1(1, "Failed to parse Ethernet address given\n");

 FUNC_0(VAR_3);
 FUNC_2(0);
}
