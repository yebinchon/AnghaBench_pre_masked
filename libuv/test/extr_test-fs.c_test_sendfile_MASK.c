
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uv_fs_cb ;
struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;
struct TYPE_7__ {scalar_t__ result; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,int,int) ;
 TYPE_1__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,TYPE_1__*,scalar_t__,int *) ;
 int FUNC_8 (int *,TYPE_1__*,char*,int,int,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int *,scalar_t__,scalar_t__,int ,int,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(void (*VAR_12)(int), uv_fs_cb VAR_13, off_t VAR_14) {
  int VAR_15, VAR_16;
  struct stat VAR_17, VAR_18;

  VAR_7 = FUNC_6();


  FUNC_5("test_file");
  FUNC_5("test_file2");

  VAR_15 = FUNC_3("test_file", VAR_2 | VAR_0, VAR_4 | VAR_3);
  FUNC_0(VAR_15 != -1);

  if (VAR_12 != ((void*)0))
    VAR_12(VAR_15);

  VAR_16 = FUNC_2(VAR_15);
  FUNC_0(VAR_16 == 0);


  VAR_16 = FUNC_8(((void*)0), &VAR_8, "test_file", VAR_1, 0, ((void*)0));
  FUNC_0(VAR_16 >= 0);
  FUNC_0(VAR_8 >= 0);
  FUNC_9(&VAR_8);

  VAR_16 = FUNC_8(((void*)0), &VAR_9, "test_file2", VAR_2 | VAR_0,
      VAR_4 | VAR_3, ((void*)0));
  FUNC_0(VAR_16 >= 0);
  FUNC_0(VAR_9 >= 0);
  FUNC_9(&VAR_9);

  VAR_16 = FUNC_10(VAR_7, &VAR_11, VAR_9, VAR_8,
      0, 131072, VAR_13);
  FUNC_0(VAR_16 == 0);
  FUNC_11(VAR_7, VAR_5);

  FUNC_0(VAR_10 == 1);

  VAR_16 = FUNC_7(((void*)0), &VAR_6, VAR_8, ((void*)0));
  FUNC_0(VAR_16 == 0);
  FUNC_9(&VAR_6);
  VAR_16 = FUNC_7(((void*)0), &VAR_6, VAR_9, ((void*)0));
  FUNC_0(VAR_16 == 0);
  FUNC_9(&VAR_6);

  FUNC_0(0 == FUNC_4("test_file", &VAR_17));
  FUNC_0(0 == FUNC_4("test_file2", &VAR_18));
  FUNC_0(VAR_17 == VAR_18);
  FUNC_0(VAR_18 == VAR_14);


  FUNC_5("test_file");
  FUNC_5("test_file2");

  FUNC_1();
  return 0;
}
