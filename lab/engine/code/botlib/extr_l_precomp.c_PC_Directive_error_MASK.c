
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int string; } ;
typedef TYPE_1__ token_t ;
typedef int source_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(source_t *VAR_1)
{
 token_t VAR_2;

 FUNC_2(VAR_2.string, "");
 FUNC_0(VAR_1, &VAR_2);
 FUNC_1(VAR_1, "#error directive: %s", VAR_2.string);
 return VAR_0;
}
