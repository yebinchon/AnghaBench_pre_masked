
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jailparam {int jp_flags; scalar_t__ jp_valuelen; int jp_ctltype; int * jp_name; int * jp_value; } ;
struct cfjail {int flags; int njp; struct jailparam* jp; int * intparams; int jid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct jailparam*) ;
 struct jailparam* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cfjail*) ;
 int * VAR_7 ;
 int FUNC_5 (struct cfjail*,char*,int *) ;
 int FUNC_6 (struct jailparam*,int) ;
 scalar_t__ FUNC_7 (struct jailparam*,int,int ) ;
 scalar_t__ FUNC_8 (struct jailparam*,int *,int) ;
 scalar_t__ FUNC_9 (struct jailparam*,char*) ;
 int FUNC_10 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_13(struct cfjail *VAR_8, int VAR_9)
{
 struct jailparam *VAR_10, *VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_8->flags & VAR_4)
  return 0;
 VAR_8->flags |= VAR_4;
 VAR_13 = 0;
 for (VAR_10 = VAR_8->jp; VAR_10 < VAR_8->jp + VAR_8->njp; VAR_10++)
  if (FUNC_0(VAR_10) && FUNC_11(VAR_10->jp_name, "jid"))
   VAR_13++;
 if (VAR_13 == 0)
  return 0;
 VAR_12 = VAR_11 = FUNC_1(++VAR_13 * sizeof(struct jailparam));
 if (FUNC_9(VAR_12, "jid") < 0 ||
     FUNC_8(VAR_12, &VAR_8->jid, sizeof VAR_8->jid) < 0) {
  FUNC_5(VAR_8, "%s", VAR_7);
  FUNC_3(1);
 }
 for (VAR_10 = VAR_8->jp; VAR_10 < VAR_8->jp + VAR_8->njp; VAR_10++)
  if (FUNC_0(VAR_10) && FUNC_11(VAR_10->jp_name, "jid")) {
   *++VAR_12 = *VAR_10;
   VAR_12->jp_value = ((void*)0);
  }
 VAR_14 = 0;
 if (FUNC_7(VAR_11, VAR_13,
     FUNC_2(VAR_8->intparams[VAR_2]) ? VAR_3 : 0) > 0) {
  VAR_12 = VAR_11 + 1;
  for (VAR_10 = VAR_8->jp; VAR_12 < VAR_11 + VAR_13; VAR_10++) {
   if (FUNC_0(VAR_10) && FUNC_11(VAR_10->jp_name, "jid")) {
    if (!((VAR_10->jp_flags & (VAR_5 | VAR_6)) &&
        VAR_10->jp_valuelen == 0 &&
        *(int *)VAR_10->jp_value) &&
        !(VAR_12->jp_valuelen == VAR_10->jp_valuelen &&
        !((VAR_10->jp_ctltype & VAR_0) ==
        VAR_1 ? FUNC_12(VAR_12->jp_value,
        VAR_10->jp_value, VAR_10->jp_valuelen) :
        FUNC_10(VAR_12->jp_value, VAR_10->jp_value,
        VAR_10->jp_valuelen)))) {
     if (VAR_9) {
      FUNC_5(VAR_8, "%s cannot be "
          "changed after creation",
          VAR_10->jp_name);
      FUNC_4(VAR_8);
      VAR_14 = -1;
     } else
      VAR_14 = 1;
     break;
    }
    VAR_12++;
   }
  }
 }
 for (VAR_12 = VAR_11 + 1; VAR_12 < VAR_11 + VAR_13; VAR_12++)
  VAR_12->jp_name = ((void*)0);
 FUNC_6(VAR_11, VAR_13);
 return VAR_14;
}
