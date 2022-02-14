
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct edid {int dummy; } ;


 int FUNC_0 (int *,int ,char**) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct edid *VAR_1, char VAR_2[13])
{
 char *VAR_3 = ((void*)0);
 int VAR_4;

 if (!VAR_1 || !VAR_2)
  return 0;

 FUNC_0((u8 *)VAR_1, VAR_0, &VAR_3);
 for (VAR_4 = 0; VAR_3 && VAR_4 < 13; VAR_4++) {
  if (VAR_3[VAR_4] == 0x0a)
   break;

  VAR_2[VAR_4] = VAR_3[VAR_4];
 }

 return VAR_4;
}
