
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef void* wchar_t ;
struct TYPE_7__ {void* wc; int * ref; } ;
typedef TYPE_1__ collchar_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int VAR_2 ;

__attribute__((used)) static collchar_t *
FUNC_5(wchar_t VAR_3, int VAR_4)
{
 collchar_t VAR_5;
 collchar_t *VAR_6;
 int VAR_7;

 VAR_5.wc = VAR_3;
 VAR_6 = FUNC_0(VAR_1, &VAR_1, &VAR_5);
 if ((VAR_6 == ((void*)0)) && VAR_4) {
  if ((VAR_6 = FUNC_2(1, sizeof(*VAR_6))) == ((void*)0)) {
   FUNC_3(VAR_2, "out of memory");
   return (((void*)0));
  }
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   VAR_6->ref[VAR_7] = FUNC_4();
  }
  VAR_6->wc = VAR_3;
  FUNC_1(VAR_1, &VAR_1, VAR_6);
 }
 return (VAR_6);
}
