
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int unreliability; int ready; int flags; int status; int fd; } ;


 int * VAR_0 ;

void FUNC_0 (struct connection *VAR_1) {
  VAR_0[0] = VAR_1->fd;
  VAR_0[1] = VAR_1->status;
  VAR_0[2] = VAR_1->flags;
  VAR_0[3] = VAR_1->ready;
  VAR_0[4] = VAR_1->unreliability;
  VAR_0 += 5;
}
