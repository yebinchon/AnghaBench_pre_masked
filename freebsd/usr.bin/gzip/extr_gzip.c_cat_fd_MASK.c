
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ,...) ;

__attribute__((used)) static off_t
FUNC_4(unsigned char * VAR_2, size_t VAR_3, off_t *VAR_4, int VAR_5)
{
 char VAR_6[VAR_0];
 off_t VAR_7;
 ssize_t VAR_8;

 VAR_7 = VAR_3;
 VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_8 == -1 || (size_t)VAR_8 != VAR_3) {
  FUNC_1("write to stdout");
  return -1;
 }
 for (;;) {
  ssize_t VAR_9;

  VAR_9 = FUNC_2(VAR_5, VAR_6, sizeof VAR_6);
  if (VAR_9 == 0)
   break;
  if (VAR_9 < 0) {
   FUNC_1("read from fd %d", VAR_5);
   break;
  }
  FUNC_0(VAR_9);

  if (FUNC_3(VAR_1, VAR_6, VAR_9) != VAR_9) {
   FUNC_1("write to stdout");
   break;
  }
  VAR_7 += VAR_9;
 }

 if (VAR_4)
  *VAR_4 = VAR_7;
 return (VAR_7);
}
