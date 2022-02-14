
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {size_t teamCount; TYPE_1__* teamList; } ;
struct TYPE_3__ {char const* teamName; char const* imageName; int cinematic; char const** teamMembers; void* teamIcon_Name; void* teamIcon_Metal; void* teamIcon; } ;


 char* FUNC_0 (char**,int ) ;
 int FUNC_1 (char*,...) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char**,char const**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_4 (char const*) ;
 TYPE_2__ VAR_4 ;
 char const* FUNC_5 (char*,char const*) ;

__attribute__((used)) static qboolean FUNC_6(char **VAR_5) {
  char *VAR_6;
  const char *VAR_7;
 int VAR_8;

  VAR_6 = FUNC_0(VAR_5, VAR_3);

  if (VAR_6[0] != '{') {
    return VAR_2;
  }

  while ( 1 ) {

    VAR_6 = FUNC_0(VAR_5, VAR_3);

    if (FUNC_2(VAR_6, "}") == 0) {
      return VAR_3;
    }

    if (!VAR_6[0]) {
      return VAR_2;
    }

    if (VAR_6[0] == '{') {
      if (VAR_4.teamCount == VAR_0) {
        VAR_4.teamCount--;
        FUNC_1("Too many teams, last team replaced!\n");
      }


      if (!FUNC_3(VAR_5, &VAR_4.teamList[VAR_4.teamCount].teamName) || !FUNC_3(VAR_5, &VAR_7)) {
        return VAR_2;
      }


   VAR_4.teamList[VAR_4.teamCount].imageName = VAR_7;
     VAR_4.teamList[VAR_4.teamCount].teamIcon = FUNC_4(VAR_4.teamList[VAR_4.teamCount].imageName);
    VAR_4.teamList[VAR_4.teamCount].teamIcon_Metal = FUNC_4(FUNC_5("%s_metal",VAR_4.teamList[VAR_4.teamCount].imageName));
   VAR_4.teamList[VAR_4.teamCount].teamIcon_Name = FUNC_4(FUNC_5("%s_name", VAR_4.teamList[VAR_4.teamCount].imageName));

   VAR_4.teamList[VAR_4.teamCount].cinematic = -1;

   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    VAR_4.teamList[VAR_4.teamCount].teamMembers[VAR_8] = ((void*)0);
    if (!FUNC_3(VAR_5, &VAR_4.teamList[VAR_4.teamCount].teamMembers[VAR_8])) {
     return VAR_2;
    }
   }

      FUNC_1("Loaded team %s with team icon %s.\n", VAR_4.teamList[VAR_4.teamCount].teamName, VAR_7);
      VAR_4.teamCount++;

      VAR_6 = FUNC_0(VAR_5, VAR_3);
      if (VAR_6[0] != '}') {
        return VAR_2;
      }
    }
  }

  return VAR_2;
}
