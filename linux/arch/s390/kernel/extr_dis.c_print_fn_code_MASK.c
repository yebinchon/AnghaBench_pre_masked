
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,unsigned char*,unsigned long) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,...) ;

void FUNC_4(unsigned char *VAR_0, unsigned long VAR_1)
{
 char VAR_2[64], *VAR_3;
 int VAR_4, VAR_5;

 while (VAR_1) {
  VAR_3 = VAR_2;
  VAR_4 = FUNC_0(*VAR_0);
  if (VAR_4 > VAR_1)
   break;
  VAR_3 += FUNC_3(VAR_3, "%p: ", VAR_0);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   VAR_3 += FUNC_3(VAR_3, "%02x", VAR_0[VAR_5]);
  *VAR_3++ = '\t';
  if (VAR_5 < 4)
   *VAR_3++ = '\t';
  VAR_3 += FUNC_1(VAR_3, VAR_0, (unsigned long) VAR_0);
  *VAR_3++ = '\n';
  *VAR_3++ = 0;
  FUNC_2("%s", VAR_2);
  VAR_0 += VAR_4;
  VAR_1 -= VAR_4;
 }
}
