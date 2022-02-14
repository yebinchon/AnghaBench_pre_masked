
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned int,unsigned long long) ;
 scalar_t__ FUNC_5 (int,char*,size_t) ;

void
FUNC_6(char *VAR_4, off_t VAR_5, int VAR_6)
{
 off_t VAR_7;
 ssize_t VAR_8;

 if (VAR_6 <= 0 || VAR_5 == 0)
  return;

 if (VAR_5 > VAR_2) {
  FUNC_2("fsx flaw: overflow in save_buffer\n");
  FUNC_0(67);
 }
 if (VAR_3) {
  off_t VAR_9 = FUNC_1(VAR_6, (off_t)0, VAR_0);
  if (VAR_9 == (off_t)-1)
   FUNC_3("save_buffer: lseek eof");
  else if (VAR_5 > VAR_9) {
   FUNC_4("save_buffer: .fsxgood file too short... will save 0x%llx bytes instead of 0x%llx\n", (unsigned long long)VAR_9,
        (unsigned long long)VAR_5);
   VAR_5 = VAR_9;
  }
 }

 VAR_7 = FUNC_1(VAR_6, (off_t)0, VAR_1);
 if (VAR_7 == (off_t)-1)
  FUNC_3("save_buffer: lseek 0");

 VAR_8 = FUNC_5(VAR_6, VAR_4, (size_t)VAR_5);
 if (VAR_8 != VAR_5) {
  if (VAR_8 == -1)
   FUNC_3("save_buffer write");
  else
   FUNC_4("save_buffer: short write, 0x%x bytes instead of 0x%llx\n",
        (unsigned)VAR_8,
        (unsigned long long)VAR_5);
 }
}
