
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int save_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 () ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int *) ;
 double VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5 (void) {
  int VAR_16;

  if (!(VAR_7 & VAR_0) && !VAR_5) {
    VAR_8.save_index = VAR_11;
  }

  VAR_15 = VAR_9;
  VAR_14 = 2.0;
  FUNC_3 (&VAR_6, &VAR_8, &VAR_10, &VAR_13);

  int VAR_17 = 0;

  for (VAR_16 = 0; ; VAR_16++) {
    if (!(VAR_16 & 255)) {
      FUNC_4 (1, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_4, VAR_12, VAR_3, VAR_1, VAR_2);
    }
    FUNC_0 (57);
    if (!FUNC_1 ()) {
      break;
    }
    if (VAR_17 && !--VAR_17) break;
  }
  FUNC_2 (&VAR_6);
}
