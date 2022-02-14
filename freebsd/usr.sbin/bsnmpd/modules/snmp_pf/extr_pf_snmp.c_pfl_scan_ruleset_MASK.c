
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct pfl_entry {scalar_t__ index; int * pkts; int * bytes; int evals; int name; } ;
struct TYPE_2__ {char* label; int * packets; int * bytes; int evaluations; int action; } ;
struct pfioc_rule {scalar_t__ nr; TYPE_1__ rule; int anchor; } ;
typedef int pr ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct pfl_entry*,int ) ;
 int FUNC_1 (struct pfioc_rule*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,struct pfioc_rule*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char const*,int) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_11)
{
 struct pfioc_rule VAR_12;
 struct pfl_entry *VAR_13;
 u_int32_t VAR_14, VAR_15;

 FUNC_1(&VAR_12, sizeof(VAR_12));
 FUNC_6(VAR_12.anchor, VAR_11, sizeof(VAR_12.anchor));
 VAR_12.rule.action = VAR_5;
 if (FUNC_2(VAR_6, VAR_1, &VAR_12)) {
  FUNC_7(VAR_3, "pfl_scan_ruleset: ioctl(DIOCGETRULES): %s",
      FUNC_4(VAR_7));
  goto err;
 }

 for (VAR_14 = VAR_12.nr, VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  VAR_12.nr = VAR_15;
  if (FUNC_2(VAR_6, VAR_0, &VAR_12)) {
   FUNC_7(VAR_3, "pfl_scan_ruleset: ioctl(DIOCGETRULE):"
       " %s", FUNC_4(VAR_7));
   goto err;
  }

  if (VAR_12.rule.label[0]) {
   VAR_13 = (struct pfl_entry *)FUNC_3(sizeof(*VAR_13));
   if (VAR_13 == ((void*)0))
    goto err;

   FUNC_6(VAR_13->name, VAR_11, sizeof(VAR_13->name));
   if (VAR_11[0])
    FUNC_5(VAR_13->name, "/", sizeof(VAR_13->name));
   FUNC_5(VAR_13->name, VAR_12.rule.label, sizeof(VAR_13->name));

   VAR_13->evals = VAR_12.rule.evaluations;
   VAR_13->bytes[VAR_2] = VAR_12.rule.bytes[VAR_2];
   VAR_13->bytes[VAR_4] = VAR_12.rule.bytes[VAR_4];
   VAR_13->pkts[VAR_2] = VAR_12.rule.packets[VAR_2];
   VAR_13->pkts[VAR_4] = VAR_12.rule.packets[VAR_4];
   VAR_13->index = ++VAR_10;

   FUNC_0(&VAR_9, VAR_13, VAR_8);
  }
 }

 return (0);

err:
 return (-1);
}
