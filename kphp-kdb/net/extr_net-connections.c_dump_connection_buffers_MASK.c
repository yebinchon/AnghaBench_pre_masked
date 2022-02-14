
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int fd; int * Tmp; int Out; int In; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int,...) ;
 int VAR_0 ;

void FUNC_2 (struct connection *VAR_1) {
  FUNC_1 (VAR_0, "Dumping buffers of connection %d\nINPUT buffers of %d:\n", VAR_1->fd, VAR_1->fd);
  FUNC_0 (&VAR_1->In);
  FUNC_1 (VAR_0, "OUTPUT buffers of %d:\n", VAR_1->fd);
  FUNC_0 (&VAR_1->Out);
  if (VAR_1->Tmp) {
    FUNC_1 (VAR_0, "TEMP buffers of %d:\n", VAR_1->fd);
    FUNC_0 (VAR_1->Tmp);
  }
  FUNC_1 (VAR_0, "--- END (dumping buffers of connection %d) ---\n", VAR_1->fd);
}
