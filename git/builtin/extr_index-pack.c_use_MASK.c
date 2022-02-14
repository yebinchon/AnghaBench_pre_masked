
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(int VAR_6)
{
 if (VAR_6 > VAR_3)
  FUNC_2(FUNC_0("used more bytes than were available"));
 VAR_2 = FUNC_1(VAR_2, VAR_1 + VAR_4, VAR_6);
 VAR_3 -= VAR_6;
 VAR_4 += VAR_6;


 if (FUNC_3(VAR_0, VAR_6))
  FUNC_2(FUNC_0("pack too large for current definition of off_t"));
 VAR_0 += VAR_6;
 if (VAR_5 && VAR_0 > VAR_5)
  FUNC_2(FUNC_0("pack exceeds maximum allowed size"));
}
