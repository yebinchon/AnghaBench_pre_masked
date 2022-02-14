
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_uid; } ;
struct TYPE_3__ {int st_uid; } ;
typedef TYPE_1__ Process ;


 int VAR_0 ;
 int FUNC_0 (char*,struct stat*) ;
 int FUNC_1 (char*,int,char*,char const*,char*) ;

__attribute__((used)) static bool FUNC_2(Process* VAR_1, const char* VAR_2, char* VAR_3) {
   char VAR_4[VAR_0+1];
   VAR_4[VAR_0] = '\0';

   FUNC_1(VAR_4, VAR_0, "%s/%s", VAR_2, VAR_3);
   struct stat VAR_5;
   int VAR_6 = FUNC_0(VAR_4, &VAR_5);
   if (VAR_6 == -1)
      return 0;
   VAR_1->st_uid = VAR_5.st_uid;
   return 1;
}
