
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int ssize_t ;
typedef int hdr ;


 int FUNC_0 (int,char const*,unsigned int) ;
 int FUNC_1 (char*,int,char*,unsigned int) ;

void FUNC_2(int VAR_0, int VAR_1, const char *VAR_2, ssize_t VAR_3, int VAR_4)
{
 const char *VAR_5 = VAR_2;

 while (VAR_3) {
  unsigned VAR_6;
  char VAR_7[5];

  VAR_6 = VAR_3;
  if (VAR_4 - 5 < VAR_6)
   VAR_6 = VAR_4 - 5;
  if (0 <= VAR_1) {
   FUNC_1(VAR_7, sizeof(VAR_7), "%04x", VAR_6 + 5);
   VAR_7[4] = VAR_1;
   FUNC_0(VAR_0, VAR_7, 5);
  } else {
   FUNC_1(VAR_7, sizeof(VAR_7), "%04x", VAR_6 + 4);
   FUNC_0(VAR_0, VAR_7, 4);
  }
  FUNC_0(VAR_0, VAR_5, VAR_6);
  VAR_5 += VAR_6;
  VAR_3 -= VAR_6;
 }
}
