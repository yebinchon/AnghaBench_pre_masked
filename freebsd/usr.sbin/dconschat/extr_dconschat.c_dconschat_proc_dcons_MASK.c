
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcons_state {int flags; struct dcons_port* port; } ;
struct dcons_port {scalar_t__ infd; int outfd; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dcons_state*) ;
 int FUNC_2 (struct dcons_state*,int,char*,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct dcons_state *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 char VAR_7[VAR_2];
 struct dcons_port *VAR_8;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6) {

  return VAR_6;
 }
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 ++) {
  VAR_8 = &VAR_3->port[VAR_4];
  if (VAR_8->infd < 0)
   continue;
  while ((VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_7,
      sizeof(VAR_7))) > 0) {
   FUNC_3(VAR_8->outfd, VAR_7, VAR_5);
   if ((VAR_6 = FUNC_1(VAR_3)))
    return (VAR_6);
  }
  if ((VAR_3->flags & VAR_1) != 0 && VAR_5 <= 0)
   FUNC_0(0);
 }
 return 0;
}
