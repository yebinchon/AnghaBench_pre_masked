
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int testfile ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 int FUNC_7 (TYPE_1__*,char) ;
 int FUNC_8 (TYPE_1__*,char*,int *) ;
 int FUNC_9 (TYPE_1__*,char*) ;
 char** VAR_4 ;
 scalar_t__ FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 size_t FUNC_13 (char const*) ;
 int FUNC_14 (char*,char const*,int) ;

void FUNC_15(void)
{
 git_buf VAR_5 = VAR_1, VAR_6 = VAR_1;
 char VAR_7[16], VAR_8 = '0';
 char **VAR_9;
 const char *VAR_10 = "alternate";
 size_t VAR_11 = FUNC_13(VAR_10);

 FUNC_14(VAR_7, VAR_10, sizeof(VAR_7));
 FUNC_2(VAR_10, VAR_7);

 for (VAR_9 = VAR_4; *VAR_9 != ((void*)0); VAR_9++) {





  if (FUNC_10(*VAR_9, 0777) != 0 && VAR_3 != VAR_0) {
   *VAR_9 = "";
   continue;
  }

  FUNC_4(FUNC_8(&VAR_5, *VAR_9, ((void*)0)));




  VAR_7[VAR_11] = VAR_8++;
  FUNC_4(FUNC_6(&VAR_5, VAR_5.ptr, VAR_7));
  FUNC_3(VAR_5.ptr, "find me");
  FUNC_7(&VAR_5, '/');


  FUNC_1(
   VAR_2, FUNC_9(&VAR_6, VAR_7));


  FUNC_0(VAR_5.ptr, 0, VAR_7, &VAR_6);
  FUNC_0(VAR_5.ptr, -1, VAR_7, &VAR_6);
  FUNC_0(VAR_5.ptr, 1, VAR_7, &VAR_6);


  FUNC_4(FUNC_6(&VAR_5, VAR_5.ptr, VAR_7));
  (void)FUNC_12(VAR_5.ptr);
  (void)FUNC_11(*VAR_9);
 }

 FUNC_5(&VAR_5);
 FUNC_5(&VAR_6);
}
