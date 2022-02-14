
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {char* url; TYPE_1__* smart_options; int family; } ;
struct refspec {int dummy; } ;
struct TYPE_2__ {int * cas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_10 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*) ;
 int VAR_11 ;
 int FUNC_8 (int ,char*,char*) ;
 int FUNC_9 (int *) ;
 int VAR_12 ;
 char* FUNC_10 (int ) ;
 char* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (char*,char*,int ) ;
 int FUNC_13 (struct transport*) ;
 int FUNC_14 (int ,struct transport*,struct refspec*,int,unsigned int*) ;
 int FUNC_15 (struct transport*,int ,char*) ;
 int FUNC_16 (struct transport*,scalar_t__,int ) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int FUNC_17(struct transport *VAR_18, struct refspec *VAR_19,
        int VAR_20)
{
 int VAR_21;
 unsigned int VAR_22;

 FUNC_16(VAR_18, VAR_17, VAR_12);
 VAR_18->family = VAR_11;

 if (VAR_13)
  FUNC_15(VAR_18,
         VAR_8, VAR_13);
 FUNC_15(VAR_18, VAR_9, VAR_16 ? "yes" : ((void*)0));

 if (!FUNC_9(&VAR_10)) {
  if (!VAR_18->smart_options)
   FUNC_6("underlying transport does not support --%s option",
       VAR_0);
  VAR_18->smart_options->cas = &VAR_10;
 }

 if (VAR_17 > 0)
  FUNC_8(VAR_14, FUNC_0("Pushing to %s\n"), VAR_18->url);
 FUNC_11("push", "transport_push", VAR_15);
 VAR_21 = FUNC_14(VAR_15, VAR_18,
        VAR_19, VAR_20, &VAR_22);
 FUNC_12("push", "transport_push", VAR_15);
 if (VAR_21 != 0) {
  FUNC_8(VAR_14, "%s", FUNC_10(VAR_1));
  FUNC_7(FUNC_0("failed to push some refs to '%s'"), VAR_18->url);
  FUNC_8(VAR_14, "%s", FUNC_10(VAR_2));
 }

 VAR_21 |= FUNC_13(VAR_18);
 if (!VAR_21)
  return 0;

 if (VAR_22 & VAR_6) {
  FUNC_2();
 } else if (VAR_22 & VAR_7) {
  FUNC_1();
 } else if (VAR_22 & VAR_3) {
  FUNC_3();
 } else if (VAR_22 & VAR_4) {
  FUNC_4();
 } else if (VAR_22 & VAR_5) {
  FUNC_5();
 }

 return 1;
}
