
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int generation; int hash; int PID; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (int ,struct udp_target*) ;
 int FUNC_5 (int ,struct udp_target*,int ) ;
 int VAR_1 ;
 int FUNC_6 (int,char*,int ) ;

void FUNC_7 (struct udp_target *VAR_2) {
  static int VAR_3[7];
  int VAR_4 = FUNC_2 (&VAR_0, &VAR_2->PID, 12);
  if (VAR_4 < 0) {
    FUNC_3 (VAR_3, &VAR_0, 12);
    FUNC_3 (VAR_3 + 3, &VAR_2->PID, 12);
  } else {
    FUNC_3 (VAR_3, &VAR_2->PID, 12);
    FUNC_3 (VAR_3 + 3, &VAR_0, 12);
  }
  VAR_3[6] = VAR_2->generation;
  if (VAR_2->hash) {
    FUNC_6 (2, "delete: hash = %lld\n", VAR_2->hash);
    VAR_1 = FUNC_4 (VAR_1, VAR_2);
  }
  VAR_2->hash = FUNC_0 (VAR_3, 28);
  FUNC_6 (2, "insert: hash = %lld\n", VAR_2->hash);
  VAR_1 = FUNC_5 (VAR_1, VAR_2, FUNC_1 ());
}
