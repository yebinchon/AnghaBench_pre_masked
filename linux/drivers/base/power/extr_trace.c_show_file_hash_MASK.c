
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 unsigned int FUNC_0 (unsigned short,char const*,int ) ;
 int FUNC_1 (char*,char const*,unsigned short) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_3)
{
 int VAR_4;
 char *VAR_5;

 VAR_4 = 0;
 for (VAR_5 = VAR_2 ; VAR_5 < VAR_1 ;
   VAR_5 += 2 + sizeof(unsigned long)) {
  unsigned short VAR_6 = *(unsigned short *)VAR_5;
  const char *VAR_7 = *(const char **)(VAR_5 + 2);
  unsigned int VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_0);
  if (VAR_8 != VAR_3)
   continue;
  FUNC_1("  hash matches %s:%u\n", VAR_7, VAR_6);
  VAR_4++;
 }
 return VAR_4;
}
