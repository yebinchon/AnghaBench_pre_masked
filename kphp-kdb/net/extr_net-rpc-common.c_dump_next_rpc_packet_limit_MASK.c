
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nb_iterator {int dummy; } ;
struct connection {int In; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct nb_iterator*,int*,int) ;
 int FUNC_3 (struct nb_iterator*,int *) ;
 int VAR_0 ;

void FUNC_4 (struct connection *VAR_1, int VAR_2) {
  struct nb_iterator VAR_3;
  int VAR_4 = 0, VAR_5 = 4, VAR_6;
  FUNC_3 (&VAR_3, &VAR_1->In);
  while (VAR_4 * 4 < VAR_5 && VAR_4 < VAR_2) {
    FUNC_0 (FUNC_2 (&VAR_3, &VAR_6, 4) == 4);
    if (!VAR_4) {
      VAR_5 = VAR_6;
    }
    FUNC_1 (VAR_0, "%08x ", VAR_6);
    if (!(++VAR_4 & 7)) {
      FUNC_1 (VAR_0, "\n");
    }
  }
  FUNC_1 (VAR_0, "\n");
}
