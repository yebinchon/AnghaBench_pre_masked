
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * id; } ;
typedef TYPE_1__ git_oid ;


 char* FUNC_0 (char*,int ) ;

void FUNC_1(char *VAR_0, const git_oid *VAR_1)
{
 size_t VAR_2;

 VAR_0 = FUNC_0(VAR_0, VAR_1->id[0]);
 *VAR_0++ = '/';
 for (VAR_2 = 1; VAR_2 < sizeof(VAR_1->id); VAR_2++)
  VAR_0 = FUNC_0(VAR_0, VAR_1->id[VAR_2]);
}
