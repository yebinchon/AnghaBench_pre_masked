
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; } ;
typedef int git_filemode_t ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char const*,char const*) ;
 int FUNC_8 (int ,struct stat*) ;

__attribute__((used)) static void FUNC_9(
 const char *VAR_2, const char *VAR_3,
 git_filemode_t VAR_4, bool VAR_5, bool VAR_6)
{
 git_buf VAR_7 = VAR_0;
 struct stat VAR_8;

 FUNC_5(FUNC_7(&VAR_7, VAR_2, VAR_3));
 FUNC_5(FUNC_8(VAR_7.ptr, &VAR_8));
 FUNC_6(&VAR_7);

 if (!VAR_6) {
  FUNC_0(VAR_4);
  FUNC_0(VAR_8.st_mode);
  VAR_5 = 0;
 }

 if (VAR_1 != 0)
  FUNC_3(VAR_5, (VAR_8.st_mode & VAR_1) != 0);

 FUNC_3(
  FUNC_2(VAR_4), FUNC_2(VAR_8.st_mode));

 FUNC_4(
  FUNC_1(VAR_4), FUNC_1(VAR_8.st_mode), "%07o");
}
