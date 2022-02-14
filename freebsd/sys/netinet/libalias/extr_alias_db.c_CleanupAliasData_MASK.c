
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {scalar_t__ cleanupIndex; int * linkTableOut; } ;
struct alias_link {int dummy; } ;


 int FUNC_0 (struct alias_link*) ;
 int FUNC_1 (struct libalias*) ;
 int VAR_0 ;
 struct alias_link* FUNC_2 (int *) ;
 struct alias_link* FUNC_3 (struct alias_link*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct libalias *VAR_2)
{
 struct alias_link *VAR_3;
 int VAR_4;

 FUNC_1(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_2(&VAR_2->linkTableOut[VAR_4]);
  while (VAR_3 != ((void*)0)) {
   struct alias_link *VAR_5 = FUNC_3(VAR_3, VAR_1);
   FUNC_0(VAR_3);
   VAR_3 = VAR_5;
  }
 }

 VAR_2->cleanupIndex = 0;
}
