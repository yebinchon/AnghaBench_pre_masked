
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*) ;
 char* FUNC_3 (char*,unsigned char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static int
FUNC_5(char *VAR_3, unsigned char *VAR_4, char *VAR_5)
{
 char *VAR_6;
 char *VAR_7;
 char *VAR_8;
 int VAR_9, VAR_10;

 VAR_6 = ((void*)0);
 VAR_10 = 0;
 VAR_9 = 0;

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6 == ((void*)0)) {
  VAR_9 = VAR_1;
  goto out;
 }

 VAR_7 = VAR_6;
 while (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_4(VAR_7, '\n');
  if (VAR_8 != ((void*)0)) {
   *VAR_8 = '\0';
   VAR_8++;
  }
  if (VAR_7[0] == '\n' || VAR_7[0] == '\0') {
   VAR_7 = VAR_8;
   continue;
  }
  if ((VAR_9 = FUNC_1(VAR_7, VAR_5)))
   FUNC_2("mac_veriexec_parser: Warning: Failed to parse"
          " entry with rc:%d, entry:\"%s\"\n", VAR_9, VAR_7);
  else
   VAR_10++;

  VAR_7 = VAR_8;
 }
 VAR_9 = 0;

out:
 if (VAR_6 != ((void*)0))
  FUNC_0(VAR_6, VAR_2);

 if (VAR_10 == 0)
  VAR_9 = VAR_0;

 return (VAR_9);
}
