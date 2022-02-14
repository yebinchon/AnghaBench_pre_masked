
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {scalar_t__ ident; scalar_t__ udata; } ;
struct dcons_state {int to; int kq; } ;
struct dcons_port {scalar_t__ s; } ;


 int VAR_0 ;
 int FUNC_0 (struct dcons_state*,struct dcons_port*) ;
 int FUNC_1 (struct dcons_state*,struct dcons_port*) ;
 int FUNC_2 (int ,int *,int ,struct kevent*,int,int *) ;

__attribute__((used)) static int
FUNC_3(struct dcons_state *VAR_1)
{
 struct kevent VAR_2[VAR_0], *VAR_3;
 int VAR_4, VAR_5;
 struct dcons_port *VAR_6;

 VAR_5 = FUNC_2(VAR_1->kq, ((void*)0), 0, VAR_2, VAR_0, &VAR_1->to);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4 ++) {
  VAR_3 = &VAR_2[VAR_4];
  VAR_6 = (struct dcons_port *)VAR_3->udata;
  if (VAR_3->ident == VAR_6->s) {
   FUNC_0(VAR_1, VAR_6);
  } else {
   FUNC_1(VAR_1, VAR_6);
  }
 }
 return(0);
}
