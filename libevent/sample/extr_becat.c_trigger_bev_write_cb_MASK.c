
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int out; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bufferevent *VAR_1, void *VAR_2)
{
 struct context *VAR_3 = VAR_2;
 if (!VAR_3->out)
  return;
 FUNC_0(VAR_3->out, VAR_0, 0);
}
