
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char*,char*,int *) ;
 TYPE_1__** VAR_3 ;

void FUNC_3(void)
{
 int VAR_4;
 FUNC_1(&VAR_2);

 FUNC_2("tar.tgz.command", "gzip -cn", ((void*)0));
 FUNC_2("tar.tgz.remote", "true", ((void*)0));
 FUNC_2("tar.tar.gz.command", "gzip -cn", ((void*)0));
 FUNC_2("tar.tar.gz.remote", "true", ((void*)0));
 FUNC_0(VAR_0, ((void*)0));
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {

  if (VAR_3[VAR_4]->data)
   FUNC_1(VAR_3[VAR_4]);
 }
}
