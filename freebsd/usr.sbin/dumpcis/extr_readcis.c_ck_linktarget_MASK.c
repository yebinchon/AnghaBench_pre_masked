
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
typedef scalar_t__ off_t ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 scalar_t__ FUNC_1 (int,int ,int*) ;
 scalar_t__ FUNC_2 (int,scalar_t__,int ) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_3, off_t VAR_4, int VAR_5)
{
 char VAR_6[5];

 if (FUNC_1(VAR_3, VAR_1, &VAR_5) < 0)
  FUNC_0(1, "Setting flag to rad %s memory failed",
      VAR_5 ? "attribute" : "common");
 if (FUNC_2(VAR_3, VAR_4, VAR_2) < 0)
  FUNC_0(1, "Unable to seek to memory offset %ju",
      (uintmax_t)VAR_4);
 if (FUNC_3(VAR_3, VAR_6, 5) != 5)
  return (0);
 if (VAR_6[0] == VAR_0 &&
     VAR_6[1] == 0x3 &&
     VAR_6[2] == 'C' &&
     VAR_6[3] == 'I' &&
     VAR_6[4] == 'S')
  return (1);
 return (0);
}
