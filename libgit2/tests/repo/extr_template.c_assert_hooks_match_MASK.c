
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int mode_t ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,char*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char const*,char const*) ;
 int FUNC_8 (int ,struct stat*) ;

__attribute__((used)) static void FUNC_9(
 const char *VAR_3,
 const char *VAR_4,
 const char *VAR_5,
 bool VAR_6)
{
 git_buf VAR_7 = VAR_0;
 git_buf VAR_8 = VAR_0;
 struct stat VAR_9, VAR_10;

 FUNC_5(FUNC_7(&VAR_7, VAR_3, VAR_5));
 FUNC_5(FUNC_8(VAR_7.ptr, &VAR_9));

 FUNC_5(FUNC_7(&VAR_8, VAR_4, VAR_5));
 FUNC_5(FUNC_8(VAR_8.ptr, &VAR_10));

 FUNC_3(VAR_9.st_size == VAR_10.st_size);

 if (FUNC_1(VAR_9.st_mode) != VAR_1) {
  mode_t VAR_11 =
   FUNC_1(VAR_9.st_mode) |
   (FUNC_2(VAR_9.st_mode) & ~VAR_2);

  if (!VAR_6) {
   FUNC_0(VAR_11);
   FUNC_0(VAR_10.st_mode);
  }

  FUNC_4(VAR_11, VAR_10.st_mode, "%07o");
 }

 FUNC_6(&VAR_7);
 FUNC_6(&VAR_8);
}
