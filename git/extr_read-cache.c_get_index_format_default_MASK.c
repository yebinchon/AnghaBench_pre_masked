
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int index_version; } ;
struct repository {TYPE_1__ settings; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct repository*) ;
 unsigned int FUNC_3 (char*,char**,int) ;
 int FUNC_4 (int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_5(struct repository *VAR_3)
{
 char *VAR_4 = FUNC_1("GIT_INDEX_VERSION");
 char *VAR_5;
 unsigned int VAR_6 = VAR_0;

 if (!VAR_4) {
  FUNC_2(VAR_3);

  if (VAR_3->settings.index_version >= 0)
   VAR_6 = VAR_3->settings.index_version;
  if (VAR_6 < VAR_1 || VAR_2 < VAR_6) {
   FUNC_4(FUNC_0("index.version set, but the value is invalid.\n"
      "Using version %i"), VAR_0);
   return VAR_0;
  }
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_4, &VAR_5, 10);
 if (*VAR_5 ||
     VAR_6 < VAR_1 || VAR_2 < VAR_6) {
  FUNC_4(FUNC_0("GIT_INDEX_VERSION set, but the value is invalid.\n"
     "Using version %i"), VAR_0);
  VAR_6 = VAR_0;
 }
 return VAR_6;
}
