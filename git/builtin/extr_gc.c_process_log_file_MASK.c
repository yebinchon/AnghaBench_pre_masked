
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_5__ {int tempfile; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_2 ;
 char* FUNC_9 (int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(void)
{
 struct stat VAR_3;
 if (FUNC_4(FUNC_5(&VAR_1), &VAR_3)) {






  int VAR_4 = VAR_0;
  FUNC_3(VAR_2, FUNC_0("Failed to fstat %s: %s"),
   FUNC_6(VAR_1.tempfile),
   FUNC_9(VAR_4));
  FUNC_2(VAR_2);
  FUNC_1(&VAR_1);
  VAR_0 = VAR_4;
 } else if (VAR_3.st_size) {

  FUNC_1(&VAR_1);
 } else {

  FUNC_10(FUNC_7("gc.log"));
  FUNC_8(&VAR_1);
 }
}
