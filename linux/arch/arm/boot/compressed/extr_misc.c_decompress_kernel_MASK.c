
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__,unsigned char*,int (*) (char*)) ;
 int FUNC_2 (char*) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char* VAR_5 ;
 int FUNC_3 (char*) ;

void
FUNC_4(unsigned long VAR_6, unsigned long VAR_7,
  unsigned long VAR_8,
  int VAR_9)
{
 int VAR_10;

 VAR_5 = (unsigned char *)VAR_6;
 VAR_2 = VAR_7;
 VAR_1 = VAR_8;
 VAR_0 = VAR_9;

 FUNC_0();

 FUNC_3("Uncompressing Linux...");
 VAR_10 = FUNC_1(VAR_3, VAR_4 - VAR_3,
       VAR_5, FUNC_2);
 if (VAR_10)
  FUNC_2("decompressor returned an error");
 else
  FUNC_3(" done, booting the kernel.\n");
}
