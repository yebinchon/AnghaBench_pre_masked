
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct mbuf {int dummy; } ;
struct cbcp_header {int length; int id; int code; } ;
struct cbcp_data {scalar_t__ length; } ;
struct TYPE_4__ {int id; } ;
struct cbcp {TYPE_3__* p; TYPE_1__ fsm; } ;
struct TYPE_6__ {int link; TYPE_2__* dl; } ;
struct TYPE_5__ {int bundle; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,struct mbuf*,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,char*,struct mbuf*) ;
 struct mbuf* FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,struct cbcp_data*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct cbcp *VAR_3, u_char VAR_4, struct cbcp_data *VAR_5)
{
  struct cbcp_header *VAR_6;
  struct mbuf *VAR_7;

  VAR_7 = FUNC_5(sizeof *VAR_6 + VAR_5->length, VAR_1);
  VAR_6 = (struct cbcp_header *)FUNC_1(VAR_7);
  VAR_6->code = VAR_4;
  VAR_6->id = VAR_3->fsm.id;
  VAR_6->length = FUNC_2(sizeof *VAR_6 + VAR_5->length);
  FUNC_6(FUNC_1(VAR_7) + sizeof *VAR_6, VAR_5, VAR_5->length);
  FUNC_4(VAR_0, "cbcp_Output", VAR_7);
  FUNC_3(&VAR_3->p->link, VAR_7, VAR_3->p->dl->bundle,
                  FUNC_0(&VAR_3->p->link) - 1, VAR_2);
}
