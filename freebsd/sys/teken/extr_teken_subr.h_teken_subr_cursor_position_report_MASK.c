
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int teken_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int const*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,unsigned int,char*) ;

__attribute__((used)) static void
FUNC_2(const teken_t *VAR_0, unsigned int VAR_1)
{
 char VAR_2[18] = "\x1B[";
 ssize_t VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2 + 2);
 if (VAR_3 < 0)
  return;

 FUNC_0(VAR_0, VAR_2, VAR_3 + 2);
}
