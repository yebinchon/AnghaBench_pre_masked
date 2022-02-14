
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(int VAR_4)
{
 if (VAR_4 > VAR_1)
  FUNC_1("used more bytes than were available");
 VAR_1 -= VAR_4;
 VAR_3 += VAR_4;


 if (FUNC_2(VAR_0, VAR_4))
  FUNC_1("pack too large for current definition of off_t");
 VAR_0 += VAR_4;
 if (VAR_2 && VAR_0 > VAR_2)
  FUNC_1(FUNC_0("pack exceeds maximum allowed size"));
}
