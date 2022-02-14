
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pushurl_nr; int url_nr; void** url; void** pushurl; } ;


 int FUNC_0 (TYPE_1__*,void*) ;
 void* FUNC_1 (void*,int *) ;
 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  int VAR_5;
  if (!VAR_0[VAR_3])
   continue;
  for (VAR_4 = 0; VAR_4 < VAR_0[VAR_3]->pushurl_nr; VAR_4++) {
   VAR_0[VAR_3]->pushurl[VAR_4] = FUNC_1(VAR_0[VAR_3]->pushurl[VAR_4], &VAR_2);
  }
  VAR_5 = VAR_0[VAR_3]->pushurl_nr == 0;
  for (VAR_4 = 0; VAR_4 < VAR_0[VAR_3]->url_nr; VAR_4++) {
   if (VAR_5)
    FUNC_0(VAR_0[VAR_3], VAR_0[VAR_3]->url[VAR_4]);
   VAR_0[VAR_3]->url[VAR_4] = FUNC_1(VAR_0[VAR_3]->url[VAR_4], &VAR_2);
  }
 }
}
