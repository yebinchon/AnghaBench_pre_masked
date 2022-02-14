
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int characterCount; int teamCount; int aliasCount; TYPE_3__* characterList; TYPE_2__* aliasList; TYPE_1__* teamList; } ;
struct TYPE_7__ {int reference; scalar_t__ active; int headImage; int * name; int base; } ;
struct TYPE_6__ {int * ai; int * name; } ;
struct TYPE_5__ {int ** teamMembers; int teamName; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 TYPE_4__ VAR_3 ;

__attribute__((used)) static int FUNC_4(void) {
 static int VAR_4 = 0;
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_8 = 0;
 if (!VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_3.characterCount; VAR_5++) {
   VAR_3.characterList[VAR_5].reference = 0;
   for (VAR_6 = 0; VAR_6 < VAR_3.teamCount; VAR_6++) {
     if (FUNC_3(VAR_3.characterList[VAR_5].base, VAR_3.teamList[VAR_6].teamName)) {
     VAR_3.characterList[VAR_5].reference |= (1<<VAR_6);
     }
   }
  }
  VAR_4 = 1;
 }

 VAR_9 = FUNC_2(FUNC_1("ui_teamName"));


 for (VAR_5 = 0; VAR_5 < VAR_3.characterCount; VAR_5++) {
  VAR_3.characterList[VAR_5].active = VAR_1;
  for(VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_3.teamList[VAR_9].teamMembers[VAR_6] != ((void*)0)) {
    if (VAR_3.characterList[VAR_5].reference&(1<<VAR_9)) {
     VAR_3.characterList[VAR_5].active = VAR_2;
     VAR_8++;
     break;
    }
   }
  }
 }


 for(VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  for(VAR_7 = 0; VAR_7 < VAR_3.aliasCount; VAR_7++) {
   if (VAR_3.aliasList[VAR_7].name != ((void*)0)) {
    if (FUNC_0(VAR_3.teamList[VAR_9].teamMembers[VAR_6], VAR_3.aliasList[VAR_7].name)==0) {
     for (VAR_5 = 0; VAR_5 < VAR_3.characterCount; VAR_5++) {
      if (VAR_3.characterList[VAR_5].headImage != -1 && VAR_3.characterList[VAR_5].reference&(1<<VAR_9) && FUNC_0(VAR_3.aliasList[VAR_7].ai, VAR_3.characterList[VAR_5].name)==0) {
       if (VAR_3.characterList[VAR_5].active == VAR_1) {
        VAR_3.characterList[VAR_5].active = VAR_2;
        VAR_8++;
       }
       break;
      }
     }
    }
   }
  }
 }
 return VAR_8;
}
