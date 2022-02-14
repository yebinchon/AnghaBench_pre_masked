
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
typedef scalar_t__ UINT64 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,char**,int) ;

__attribute__((used)) static UINT64
FUNC_5(char *VAR_1, UINT64 VAR_2)
{
 char VAR_3[16], *VAR_4;
 UINT64 VAR_5;

 VAR_5 = VAR_2;
 FUNC_2("DEBUG");
 if (VAR_1 != ((void*)0)) {
  FUNC_2("%s", VAR_1);
 }
 FUNC_2("(default: 0x%jx ", (uintmax_t)VAR_5);
 FUNC_2(" / %ju) >>", (uintmax_t)VAR_5);
 FUNC_1(VAR_0);

 FUNC_0(VAR_3, sizeof VAR_3);
 while (1) {
  if (FUNC_3(0, VAR_3, sizeof VAR_3) == 0) {
   continue;
  }
  if (VAR_3[0] == '\n') {
   break;
  }
  if (VAR_3[0] == '0' && VAR_3[1] == 'x') {
   VAR_5 = FUNC_4(VAR_3, &VAR_4, 16);
  } else {
   VAR_5 = FUNC_4(VAR_3, &VAR_4, 10);
  }
  break;
 }
 return (VAR_5);
}
