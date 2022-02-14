
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; int path; } ;
typedef TYPE_1__ uv_fs_t ;
struct stat {int st_size; int st_mode; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int) ;
 char* FUNC_7 (char*,int) ;

__attribute__((used)) static ssize_t FUNC_8(uv_fs_t* VAR_3) {
  ssize_t VAR_4;
  ssize_t VAR_5;
  char* VAR_6;
  char* VAR_7;





  struct stat VAR_8;
  int VAR_9;
  VAR_9 = FUNC_1(VAR_3->path, &VAR_8);
  if (VAR_9 != 0)
    return -1;
  if (!FUNC_0(VAR_8.st_mode)) {
    VAR_2 = VAR_0;
    return -1;
  }

  VAR_4 = VAR_8.st_size;



  if (VAR_4 == 0)
    VAR_4 = FUNC_5(VAR_3->path);


  VAR_6 = FUNC_6(VAR_4);

  if (VAR_6 == ((void*)0)) {
    VAR_2 = VAR_1;
    return -1;
  }




  VAR_5 = FUNC_3(VAR_3->path, VAR_6, VAR_4);


  if (VAR_5 == -1) {
    FUNC_4(VAR_6);
    return -1;
  }


  if (VAR_5 == VAR_4) {
    VAR_7 = FUNC_7(VAR_6, VAR_5 + 1);

    if (VAR_7 == ((void*)0)) {
      FUNC_4(VAR_6);
      return -1;
    }

    VAR_6 = VAR_7;
  }

  VAR_6[VAR_5] = '\0';
  VAR_3->ptr = VAR_6;

  return 0;
}
