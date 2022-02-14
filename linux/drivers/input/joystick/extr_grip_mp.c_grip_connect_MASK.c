
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grip_mp {TYPE_1__** port; struct gameport* gameport; } ;
struct gameport_driver {int dummy; } ;
struct gameport {int dummy; } ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct gameport*,struct gameport_driver*,int ) ;
 int FUNC_2 (struct gameport*,struct grip_mp*) ;
 int FUNC_3 (struct gameport*,int ) ;
 int FUNC_4 (struct gameport*,int) ;
 int VAR_4 ;
 int FUNC_5 (struct grip_mp*) ;
 struct grip_mp* FUNC_6 (int,int ) ;
 int FUNC_7 (struct grip_mp*) ;

__attribute__((used)) static int FUNC_8(struct gameport *VAR_5, struct gameport_driver *VAR_6)
{
 struct grip_mp *VAR_7;
 int VAR_8;

 if (!(VAR_7 = FUNC_6(sizeof(struct grip_mp), VAR_3)))
  return -VAR_1;

 VAR_7->gameport = VAR_5;

 FUNC_2(VAR_5, VAR_7);

 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_2);
 if (VAR_8)
  goto fail1;

 FUNC_3(VAR_5, VAR_4);
 FUNC_4(VAR_5, 20);

 if (!FUNC_7(VAR_7)) {
  VAR_8 = -VAR_0;
  goto fail2;
 }

 if (!VAR_7->port[0]->mode && !VAR_7->port[1]->mode && !VAR_7->port[2]->mode && !VAR_7->port[3]->mode) {

  VAR_8 = -VAR_0;
  goto fail2;
 }

 return 0;

fail2: FUNC_0(VAR_5);
fail1: FUNC_2(VAR_5, ((void*)0));
 FUNC_5(VAR_7);
 return VAR_8;
}
