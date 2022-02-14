
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct x86_topo_layer TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int topo_layers ;
struct topo_node {int dummy; } ;
struct x86_topo_layer {int type; int subtype; int id_shift; } ;
struct TYPE_5__ {void* id_shift; scalar_t__ present; } ;
struct TYPE_4__ {int cpu_present; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_3__*,int) ;
 TYPE_2__* VAR_10 ;
 void* VAR_11 ;
 TYPE_1__* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_3 (char*,int,...) ;
 struct topo_node* FUNC_4 (struct topo_node*,int,int,int) ;
 struct topo_node* FUNC_5 (struct topo_node*,int,int,int) ;
 int FUNC_6 (struct topo_node*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct topo_node*) ;
 struct topo_node VAR_19 ;

void
FUNC_10(void)
{
 static int VAR_20 = 0;
 struct x86_topo_layer {
  int type;
  int subtype;
  int id_shift;
 } VAR_21[VAR_2 + 4];
 struct topo_node *VAR_22;
 struct topo_node *VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;

 if (VAR_20)
  return;

 FUNC_0(&VAR_14);

 if (VAR_16 <= 1)
  ;
 else if (VAR_13 == VAR_0)
  FUNC_7();
 else if (VAR_13 == VAR_1)
  FUNC_8();

 FUNC_1(VAR_18 >= VAR_11,
     ("bug in APIC topology discovery"));

 VAR_25 = 0;
 FUNC_2(VAR_21, sizeof(VAR_21));

 VAR_21[VAR_25].type = VAR_6;
 VAR_21[VAR_25].id_shift = VAR_18;
 if (VAR_9)
  FUNC_3("Package ID shift: %u\n", VAR_21[VAR_25].id_shift);
 VAR_25++;

 if (VAR_18 > VAR_17 && VAR_17 != 0) {
  VAR_21[VAR_25].type = VAR_5;
  VAR_21[VAR_25].id_shift = VAR_17;
  if (VAR_9)
   FUNC_3("Node ID shift: %u\n",
       VAR_21[VAR_25].id_shift);
  VAR_25++;
 }






 for (VAR_27 = VAR_2 - 1; VAR_27 >= 0; --VAR_27) {
  if (VAR_10[VAR_27].present) {
   if (VAR_17 != 0)
    FUNC_1(VAR_10[VAR_27].id_shift <= VAR_17,
     ("bug in APIC topology discovery"));
   FUNC_1(VAR_10[VAR_27].id_shift <= VAR_18,
    ("bug in APIC topology discovery"));
   FUNC_1(VAR_10[VAR_27].id_shift >= VAR_11,
    ("bug in APIC topology discovery"));

   VAR_21[VAR_25].type = VAR_3;
   VAR_21[VAR_25].subtype = VAR_27 + 1;
   VAR_21[VAR_25].id_shift = VAR_10[VAR_27].id_shift;
   if (VAR_9)
    FUNC_3("L%u cache ID shift: %u\n",
        VAR_21[VAR_25].subtype,
        VAR_21[VAR_25].id_shift);
   VAR_25++;
  }
 }

 if (VAR_18 > VAR_11) {
  VAR_21[VAR_25].type = VAR_4;
  VAR_21[VAR_25].id_shift = VAR_11;
  if (VAR_9)
   FUNC_3("Core ID shift: %u\n",
       VAR_21[VAR_25].id_shift);
  VAR_25++;
 }

 VAR_21[VAR_25].type = VAR_7;
 VAR_21[VAR_25].id_shift = 0;
 VAR_25++;

 FUNC_6(&VAR_19);
 for (VAR_27 = 0; VAR_27 <= VAR_15; ++VAR_27) {
  if (!VAR_12[VAR_27].cpu_present)
   continue;

  VAR_22 = &VAR_19;
  for (VAR_24 = 0; VAR_24 < VAR_25; ++VAR_24) {
   VAR_26 = VAR_27 >> VAR_21[VAR_24].id_shift;
   VAR_22 = FUNC_4(VAR_22, VAR_26,
       VAR_21[VAR_24].type,
       VAR_21[VAR_24].subtype);
  }
 }

 VAR_22 = &VAR_19;
 for (VAR_24 = 0; VAR_24 < VAR_25; ++VAR_24) {
  VAR_26 = VAR_8 >> VAR_21[VAR_24].id_shift;
  VAR_23 = FUNC_5(VAR_22, VAR_26,
      VAR_21[VAR_24].type,
      VAR_21[VAR_24].subtype);
  FUNC_9(VAR_23);
  VAR_22 = VAR_23;
 }

 VAR_20 = 1;
}
