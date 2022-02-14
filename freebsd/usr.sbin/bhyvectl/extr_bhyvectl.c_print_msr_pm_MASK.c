
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int,char,char) ;

__attribute__((used)) static inline void
FUNC_2(uint64_t VAR_0, int VAR_1, int VAR_2, int VAR_3)
{

 if (VAR_2 || VAR_3) {
  FUNC_1("%-20s[%d]\t\t%c%c\n", FUNC_0(VAR_0), VAR_1,
   VAR_2 ? 'R' : '-', VAR_3 ? 'W' : '-');
 }
}
