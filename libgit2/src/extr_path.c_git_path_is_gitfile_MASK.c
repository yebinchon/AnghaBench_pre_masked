
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t git_path_gitfile ;
typedef int git_path_fs ;
struct TYPE_3__ {char* file; size_t filelen; char* hash; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;



 size_t VAR_1 ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char const*,size_t,char const*,size_t) ;
 int FUNC_3 (char const*,size_t,char const*,size_t,char const*) ;

extern int FUNC_4(const char *VAR_3, size_t VAR_4, git_path_gitfile VAR_5, git_path_fs VAR_6)
{
 const char *VAR_7, *VAR_8;
 size_t VAR_9;

 if (!(VAR_5 >= VAR_1 && VAR_5 < FUNC_0(VAR_2))) {
  FUNC_1(VAR_0, "invalid gitfile for path validation");
  return -1;
 }

 VAR_7 = VAR_2[VAR_5].file;
 VAR_9 = VAR_2[VAR_5].filelen;
 VAR_8 = VAR_2[VAR_5].hash;

 switch (VAR_6) {
 case 130:
  return !FUNC_3(VAR_3, VAR_4, VAR_7, VAR_9, VAR_8) ||
         !FUNC_2(VAR_3, VAR_4, VAR_7, VAR_9);
 case 128:
  return !FUNC_3(VAR_3, VAR_4, VAR_7, VAR_9, VAR_8);
 case 129:
  return !FUNC_2(VAR_3, VAR_4, VAR_7, VAR_9);
 default:
  FUNC_1(VAR_0, "invalid filesystem for path validation");
  return -1;
 }
}
