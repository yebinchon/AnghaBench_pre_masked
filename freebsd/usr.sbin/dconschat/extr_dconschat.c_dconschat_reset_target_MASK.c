
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_state {scalar_t__ reset; } ;
struct dcons_port {int outfd; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct dcons_state*,void*,int,scalar_t__) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_5(struct dcons_state *VAR_1, struct dcons_port *VAR_2)
{
 char VAR_3[VAR_0];
 if (VAR_1->reset == 0)
  return;

 FUNC_2(VAR_3, VAR_0,
     "\r\n[dconschat reset target(addr=0x%jx)...]\r\n",
     (intmax_t)VAR_1->reset);
 FUNC_4(VAR_2->outfd, VAR_3, FUNC_3(VAR_3));
 FUNC_0(&VAR_3[0], VAR_0);
 FUNC_1(VAR_1, (void *)VAR_3, VAR_0, VAR_1->reset);
}
