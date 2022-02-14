
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (char*,unsigned long long,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

void
FUNC_6()
{
 ssize_t VAR_5;

 if (FUNC_1(VAR_1, (off_t)0, VAR_0) == (off_t)-1) {
  FUNC_3("writefileimage: lseek");
  FUNC_4(171);
 }
 VAR_5 = FUNC_5(VAR_1, VAR_3, VAR_2);
 if ((off_t)VAR_5 != VAR_2) {
  if (VAR_5 == -1)
   FUNC_3("writefileimage: write");
  else
   FUNC_2("short write: 0x%x bytes instead of 0x%llx\n",
       VAR_5, (unsigned long long)VAR_2);
  FUNC_4(172);
 }
 if (VAR_4 ? 0 : FUNC_0(VAR_1, VAR_2) == -1) {
  FUNC_2("ftruncate2: %llx\n", (unsigned long long)VAR_2);
  FUNC_3("writefileimage: ftruncate");
  FUNC_4(173);
 }
}
