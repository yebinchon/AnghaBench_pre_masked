
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct transport {int dummy; } ;
struct ref_states {int queried; int tracked; TYPE_1__* remote; } ;
struct ref {int dummy; } ;
struct TYPE_3__ {scalar_t__ url_nr; int ** url; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,struct ref_states*) ;
 int FUNC_3 (struct ref const*,struct ref_states*) ;
 int FUNC_4 (struct ref const*,struct ref_states*) ;
 int FUNC_5 (struct ref_states*) ;
 int FUNC_6 (struct ref const*,struct ref_states*) ;
 int FUNC_7 () ;
 TYPE_1__* FUNC_8 (char const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct transport*) ;
 struct transport* FUNC_11 (TYPE_1__*,int *) ;
 struct ref* FUNC_12 (struct transport*,int *) ;

__attribute__((used)) static int FUNC_13(const char *VAR_4,
     struct ref_states *VAR_5,
     int VAR_6)
{
 struct transport *VAR_7;
 const struct ref *VAR_8;

 VAR_5->remote = FUNC_8(VAR_4);
 if (!VAR_5->remote)
  return FUNC_1(FUNC_0("No such remote: '%s'"), VAR_4);

 FUNC_7();

 if (VAR_6) {
  VAR_7 = FUNC_11(VAR_5->remote, VAR_5->remote->url_nr > 0 ?
   VAR_5->remote->url[0] : ((void*)0));
  VAR_8 = FUNC_12(VAR_7, ((void*)0));
  FUNC_10(VAR_7);

  VAR_5->queried = 1;
  if (VAR_6 & VAR_2)
   FUNC_6(VAR_8, VAR_5);
  if (VAR_6 & VAR_0)
   FUNC_3(VAR_8, VAR_5);
  if (VAR_6 & VAR_1)
   FUNC_4(VAR_8, VAR_5);
 } else {
  FUNC_2(VAR_3, VAR_5);
  FUNC_9(&VAR_5->tracked);
  FUNC_5(VAR_5);
 }

 return 0;
}
