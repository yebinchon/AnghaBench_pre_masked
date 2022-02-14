
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysbuf ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char*,char*,...) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char FUNC_7 (char) ;

__attribute__((used)) static void
FUNC_8(char *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3;
 char VAR_4[1024];

 VAR_2 = FUNC_5(FUNC_0(VAR_0));
 VAR_1 = FUNC_5(VAR_2);

 FUNC_4(VAR_4, sizeof(VAR_4),




     "objcopy -I binary -O elf64-x86-64-freebsd -B i386 %s %s.o\n",

     VAR_0, VAR_2);
 FUNC_3("%s", VAR_4);
 FUNC_6(VAR_4);

 VAR_3 = VAR_0;
 while (*VAR_3) {
  if (*VAR_3 == '/' || *VAR_3 == '.')
   *VAR_3 = '_';
  VAR_3++;
 }
 VAR_3 = VAR_1;
 while (*VAR_3) {
  if (*VAR_3 == '/' || *VAR_3 == '.')
   *VAR_3 = '_';
  else
   *VAR_3 = FUNC_7(*VAR_3);
  VAR_3++;
 }

 FUNC_4(VAR_4, sizeof(VAR_4),
     "objcopy --redefine-sym _binary_%s_start=%s_start "
     "--strip-symbol _binary_%s_size "
     "--redefine-sym _binary_%s_end=%s_end %s.o %s.o\n",
     VAR_0, VAR_1, VAR_0, VAR_0,
     VAR_1, VAR_2, VAR_2);
 VAR_3 = VAR_4;
 FUNC_3("%s", VAR_4);
 FUNC_6(VAR_4);

 FUNC_4(VAR_4, sizeof(VAR_4),
     "ld -Bshareable -d -warn-common -o %s.ko %s.o\n",
     VAR_2, VAR_2);
 FUNC_3("%s", VAR_4);
 FUNC_6(VAR_4);

 FUNC_2(VAR_1);

 FUNC_1(0);
}
