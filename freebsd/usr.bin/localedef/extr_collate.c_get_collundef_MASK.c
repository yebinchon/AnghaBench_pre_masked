
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* name; int * ref; } ;
typedef TYPE_1__ collundef_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int VAR_2 ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static collundef_t *
FUNC_8(char *VAR_3)
{
 collundef_t VAR_4;
 collundef_t *VAR_5;
 int VAR_6;

 VAR_4.name = VAR_3;
 if ((VAR_5 = FUNC_0(VAR_1, &VAR_1, &VAR_4)) == ((void*)0)) {
  if (((VAR_5 = FUNC_3(1, sizeof(*VAR_5))) == ((void*)0)) ||
      ((VAR_5->name = FUNC_7(VAR_3)) == ((void*)0))) {
   FUNC_4(VAR_2,"out of memory");
   FUNC_5(VAR_5);
   return (((void*)0));
  }
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   VAR_5->ref[VAR_6] = FUNC_6();
  }
  FUNC_1(VAR_1, &VAR_1, VAR_5);
 }
 FUNC_2(VAR_3);
 return (VAR_5);
}
