
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WSClient ;


 int VAR_0 ;
 unsigned short FUNC_0 (unsigned short) ;
 int FUNC_1 (char*,unsigned short*,int) ;
 scalar_t__ FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (int *,int ,char*,unsigned int) ;

__attribute__((used)) static int
FUNC_4 (WSClient * VAR_1, unsigned short VAR_2, const char *VAR_3)
{
  unsigned int VAR_4;
  unsigned short VAR_5;
  char VAR_6[128] = { 0 };

  VAR_4 = 2;
  VAR_5 = FUNC_0 (VAR_2);
  FUNC_1 (VAR_6, &VAR_5, 2);
  if (VAR_3)
    VAR_4 += FUNC_2 (VAR_6 + 2, sizeof VAR_6 - 4, "%s", VAR_3);

  return FUNC_3 (VAR_1, VAR_0, VAR_6, VAR_4);
}
