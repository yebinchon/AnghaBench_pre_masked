
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned int,unsigned long,char*) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3, VAR_4, VAR_5;
 char *VAR_6;


 unsigned char *VAR_7;
 char VAR_8[VAR_0];


 VAR_4 = VAR_2;
    do
    {


  VAR_7 = (unsigned char *)VAR_8;

  FUNC_0("%08x:", VAR_1);
  VAR_5 = (VAR_4 > VAR_0)?VAR_0:VAR_4;
                if((VAR_1 & 0xF0000000) == 0x20000000) {
   for(VAR_3 = 0; VAR_3 < VAR_5; VAR_3 ++) {
    VAR_8[VAR_3] = *(char *)(VAR_1+VAR_3);
   }
  } else {
   FUNC_1(VAR_1, VAR_5, VAR_8);
  }
  for (VAR_3=0; VAR_3<VAR_5; VAR_3++)
  {






    FUNC_0(" %02x", *VAR_7++);

   VAR_1++;
  }
  FUNC_0("    ");
  VAR_6 = VAR_8;
  for (VAR_3=0; VAR_3<VAR_5; VAR_3++) {
   if ((*VAR_6 < 0x20) || (*VAR_6 > 0x7e))
    FUNC_0(".");
   else
    FUNC_0("%c", *VAR_6);
   VAR_6++;
  }
  FUNC_0("\n");
  VAR_4 -= VAR_5;
 } while (VAR_4 > 0);
 return 0;
}
