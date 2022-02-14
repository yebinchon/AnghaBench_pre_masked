
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct context {struct bufferevent* out; TYPE_2__* opts; } ;
struct bufferevent {int dummy; } ;
struct TYPE_3__ {int keep; int ssl; } ;
struct TYPE_4__ {TYPE_1__ extra; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bufferevent*,short,int ,int) ;

__attribute__((used)) static void FUNC_2(struct bufferevent *VAR_0, short VAR_1, void *VAR_2)
{
 struct context *VAR_3 = VAR_2;
 FUNC_0(VAR_0 == VAR_3->out);
 if (!FUNC_1(VAR_0, VAR_1, VAR_3->opts->extra.ssl, !VAR_3->opts->extra.keep))
  return;
 VAR_3->out = ((void*)0);
}
