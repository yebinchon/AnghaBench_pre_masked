
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,unsigned char*,scalar_t__,char const*) ;
 scalar_t__ FUNC_3 (int ,unsigned char*,size_t) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, int VAR_1, size_t VAR_2)
{
 unsigned char VAR_3[8192];
 size_t VAR_4 = VAR_2;

 while (VAR_4 > 0) {
  size_t VAR_5 = VAR_4 > sizeof(VAR_3) ? sizeof(VAR_3) : VAR_4;
  ssize_t VAR_6 = FUNC_3(0, VAR_3, VAR_5);
  if (VAR_6 < 0)
   FUNC_1("Reading request failed");
  FUNC_2(VAR_1, VAR_3, VAR_6, VAR_0);
  VAR_4 -= VAR_6;
 }

 FUNC_0(VAR_1);
}
