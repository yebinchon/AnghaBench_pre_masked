
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int string; } ;
typedef TYPE_1__ token_t ;
typedef int source_t ;
typedef int fielddef_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int) ;

int FUNC_3(source_t *VAR_2, fielddef_t *VAR_3, void *VAR_4)
{
 token_t VAR_5;

 if (!FUNC_0(VAR_2, VAR_1, 0, &VAR_5)) return 0;

 FUNC_1(VAR_5.string);

 FUNC_2((char *) VAR_4, VAR_5.string, VAR_0-1);

 ((char *)VAR_4)[VAR_0-1] = '\0';

 return 1;
}
