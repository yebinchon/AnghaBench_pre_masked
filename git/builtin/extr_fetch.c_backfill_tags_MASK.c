
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {int remote; int cannot_reuse; } ;
struct ref {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct transport*,struct ref*) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct transport*,struct ref*) ;
 struct transport* VAR_5 ;
 struct transport* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct transport*) ;
 int FUNC_4 (struct transport*,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct transport *VAR_6, struct ref *VAR_7)
{
 int VAR_8;
 VAR_8 = VAR_6->cannot_reuse ||
  VAR_4 || VAR_3.nr;
 if (VAR_8) {
  VAR_5 = FUNC_2(VAR_6->remote, 0);
  VAR_6 = VAR_5;
 }

 FUNC_4(VAR_6, VAR_2, ((void*)0));
 FUNC_4(VAR_6, VAR_1, "0");
 FUNC_4(VAR_6, VAR_0, ((void*)0));
 if (!FUNC_1(VAR_6, VAR_7))
  FUNC_0(VAR_6, VAR_7);

 if (VAR_5) {
  FUNC_3(VAR_5);
  VAR_5 = ((void*)0);
 }
}
