
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

__attribute__((used)) static void FUNC_4 (struct connection *VAR_1) {
  struct nb_iterator VAR_2;
  int VAR_3 = 0, VAR_4 = 4, VAR_5;
  FUNC_3 (&VAR_2, &VAR_1->In);
  while (VAR_3 * 4 < VAR_4) {
    FUNC_0 (FUNC_2 (&VAR_2, &VAR_5, 4) == 4);
    if (!VAR_3) {
      VAR_4 = VAR_5;
    }
    FUNC_1 (VAR_0, "%08x ", VAR_5);
    if (!(++VAR_3 & 7)) {
      FUNC_1 (VAR_0, "\n");
    }
  }
  FUNC_1 (VAR_0, "\n");
}
