
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct slcompress {int last_recv; int last_xmit; int flags; struct cstate* last_cs; struct cstate* tstate; } ;
struct cstate {size_t cs_id; struct cstate* cs_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct slcompress*,char,int) ;

void
FUNC_1(struct slcompress *VAR_1, int VAR_2)
{
  register u_int VAR_3;
  register struct cstate *VAR_4 = VAR_1->tstate;

  FUNC_0(VAR_1, '\0', sizeof *VAR_1);
  for (VAR_3 = VAR_2; VAR_3 > 0; --VAR_3) {
    VAR_4[VAR_3].cs_id = VAR_3;
    VAR_4[VAR_3].cs_next = &VAR_4[VAR_3 - 1];
  }
  VAR_4[0].cs_next = &VAR_4[VAR_2];
  VAR_4[0].cs_id = 0;
  VAR_1->last_cs = &VAR_4[0];
  VAR_1->last_recv = 255;
  VAR_1->last_xmit = 255;
  VAR_1->flags = VAR_0;
}
