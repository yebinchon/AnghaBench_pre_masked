
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_timer_t ;
typedef int uv_loop_t ;
typedef int uv_fs_event_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int * const,int *) ;
 int FUNC_4 (int *,int ,char*,int ) ;
 int FUNC_5 (int * const,int ) ;
 int FUNC_6 (int * const,int *) ;
 int FUNC_7 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_8(uv_loop_t* const VAR_5, int VAR_6) {
  uv_timer_t VAR_7;
  uv_fs_event_t VAR_8;
  int VAR_9;


  FUNC_2("watch_file");
  FUNC_1("watch_file");

  VAR_9 = FUNC_3(VAR_5, &VAR_8);
  FUNC_0(VAR_9 == 0);


  VAR_9 = FUNC_4(&VAR_8,
                        VAR_2,
                        VAR_6 == 1 ? "." : "watch_file",
                        0);
  FUNC_0(VAR_9 == 0);

  VAR_9 = FUNC_6(VAR_5, &VAR_7);
  FUNC_0(VAR_9 == 0);

  VAR_9 = FUNC_7(&VAR_7, VAR_3, 100, 0);
  FUNC_0(VAR_9 == 0);

  FUNC_0(VAR_4 == 0);
  FUNC_0(VAR_1 == 0);

  FUNC_5(VAR_5, VAR_0);

  FUNC_0(VAR_4 == 1);
  FUNC_0(VAR_1 == 1);


  FUNC_2("watch_file");
  VAR_1 = 0;
  VAR_4 = 0;
  FUNC_5(VAR_5, VAR_0);
}
