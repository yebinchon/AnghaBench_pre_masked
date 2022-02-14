
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ result; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,TYPE_1__*,scalar_t__,int *) ;
 int FUNC_5 (int *,TYPE_1__*,char*,int,int,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*,scalar_t__,int *,int,int,int *) ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static void FUNC_8(int VAR_9) {
  int VAR_10;


  FUNC_1("test_file");

  VAR_6 = FUNC_3();

  VAR_10 = FUNC_5(((void*)0), &VAR_7, "test_file",
      VAR_1 | VAR_0 | VAR_9, VAR_3 | VAR_2, ((void*)0));
  FUNC_0(VAR_10 >= 0);
  FUNC_0(VAR_7 >= 0);
  FUNC_6(&VAR_7);

  VAR_5 = FUNC_2(((void*)0), 0);
  VAR_10 = FUNC_7(((void*)0), &VAR_8, VAR_7, &VAR_5, 1, -1, ((void*)0));
  FUNC_0(VAR_10 == 0);
  FUNC_0(VAR_8.result == 0);
  FUNC_6(&VAR_8);

  VAR_10 = FUNC_4(((void*)0), &VAR_4, VAR_7, ((void*)0));
  FUNC_0(VAR_10 == 0);
  FUNC_0(VAR_4.result == 0);
  FUNC_6(&VAR_4);

  FUNC_1("test_file");
}
