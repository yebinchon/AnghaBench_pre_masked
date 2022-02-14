
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_5__ {char const* name; scalar_t__ wc; } ;
typedef TYPE_1__ charmap_t ;


 int * FUNC_0 (int ,int *,TYPE_1__*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, wchar_t VAR_3, int VAR_4)
{
 charmap_t VAR_5;
 charmap_t *VAR_6 = ((void*)0);

 VAR_5.wc = VAR_3;
 VAR_5.name = VAR_2;





 if ((VAR_3 != (wchar_t)-1) && ((FUNC_0(VAR_1, &VAR_1, &VAR_5)) == ((void*)0))) {
  if ((VAR_6 = FUNC_2(1, sizeof (*VAR_6))) == ((void*)0)) {
   FUNC_3("out of memory");
   return;
  }
  VAR_6->wc = VAR_3;
  FUNC_1(VAR_1, &VAR_1, VAR_6);
 }

 if (VAR_2) {
  if (FUNC_0(VAR_0, &VAR_0, &VAR_5) != ((void*)0)) {
   if (VAR_4) {
    FUNC_3("duplicate character definition");
   }
   return;
  }
  if ((VAR_6 == ((void*)0)) && ((VAR_6 = FUNC_2(1, sizeof (*VAR_6))) == ((void*)0))) {
   FUNC_3("out of memory");
   return;
  }
  VAR_6->wc = VAR_3;
  VAR_6->name = VAR_2;

  FUNC_1(VAR_0, &VAR_0, VAR_6);
 }
}
