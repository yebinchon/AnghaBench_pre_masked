
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* id; } ;
typedef TYPE_1__ git_oid ;


 size_t VAR_0 ;
 char* FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,size_t) ;
 int * VAR_1 ;

void FUNC_2(char *VAR_2, size_t VAR_3, const git_oid *VAR_4)
{
 size_t VAR_5, VAR_6;

 if (!VAR_4) {
  FUNC_1(VAR_2, 0, VAR_3);
  return;
 }
 if (VAR_3 > VAR_0) {
  FUNC_1(&VAR_2[VAR_0], 0, VAR_3 - VAR_0);
  VAR_3 = VAR_0;
 }

 VAR_6 = VAR_3 / 2;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  VAR_2 = FUNC_0(VAR_2, VAR_4->id[VAR_5]);

 if (VAR_3 & 1)
  *VAR_2++ = VAR_1[VAR_4->id[VAR_5] >> 4];
}
