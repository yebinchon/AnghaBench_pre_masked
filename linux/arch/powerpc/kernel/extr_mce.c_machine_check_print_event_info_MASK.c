
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_12__ {size_t link_error_type; scalar_t__ effective_address; int effective_address_provided; } ;
struct TYPE_18__ {size_t ra_error_type; scalar_t__ effective_address; int effective_address_provided; } ;
struct TYPE_17__ {size_t user_error_type; scalar_t__ effective_address; int effective_address_provided; } ;
struct TYPE_16__ {size_t tlb_error_type; scalar_t__ effective_address; int effective_address_provided; } ;
struct TYPE_15__ {size_t erat_error_type; scalar_t__ effective_address; int effective_address_provided; } ;
struct TYPE_14__ {size_t slb_error_type; scalar_t__ effective_address; int effective_address_provided; } ;
struct TYPE_13__ {size_t ue_error_type; scalar_t__ physical_address; int physical_address_provided; scalar_t__ effective_address; int effective_address_provided; } ;
struct TYPE_19__ {TYPE_1__ link_error; TYPE_7__ ra_error; TYPE_6__ user_error; TYPE_5__ tlb_error; TYPE_4__ erat_error; TYPE_3__ slb_error; TYPE_2__ ue_error; } ;
struct machine_check_event {scalar_t__ version; int severity; int initiator; int error_type; scalar_t__ disposition; size_t error_class; int cpu; scalar_t__ srr0; TYPE_8__ u; } ;
struct TYPE_20__ {int mce_faulty_slbs; } ;
struct TYPE_11__ {int comm; int pid; } ;


 size_t FUNC_0 (char const**) ;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_10__* VAR_5 ;
 TYPE_9__* VAR_6 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,char const*,int ,char const*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,scalar_t__) ;

void FUNC_5(struct machine_check_event *VAR_7,
        bool VAR_8, bool VAR_9)
{
 const char *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14;
 uint64_t VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = 0;
 char VAR_18[50];
 char VAR_19[50];
 static const char *VAR_20[] = {
  "Indeterminate",
  "Instruction fetch",
  "Page table walk ifetch",
  "Load/Store",
  "Page table walk Load/Store",
 };
 static const char *VAR_21[] = {
  "Indeterminate",
  "Parity",
  "Multihit",
 };
 static const char *VAR_22[] = {
  "Indeterminate",
  "Parity",
  "Multihit",
 };
 static const char *VAR_23[] = {
  "Indeterminate",
  "Parity",
  "Multihit",
 };
 static const char *VAR_24[] = {
  "Indeterminate",
  "tlbie(l) invalid",
 };
 static const char *VAR_25[] = {
  "Indeterminate",
  "Instruction fetch (bad)",
  "Instruction fetch (foreign)",
  "Page table walk ifetch (bad)",
  "Page table walk ifetch (foreign)",
  "Load (bad)",
  "Store (bad)",
  "Page table walk Load/Store (bad)",
  "Page table walk Load/Store (foreign)",
  "Load/Store (foreign)",
 };
 static const char *VAR_26[] = {
  "Indeterminate",
  "Instruction fetch (timeout)",
  "Page table walk ifetch (timeout)",
  "Load (timeout)",
  "Store (timeout)",
  "Page table walk Load/Store (timeout)",
 };
 static const char *VAR_27[] = {
  "Unknown",
  "Hardware error",
  "Probable Hardware error (some chance of software cause)",
  "Software error",
  "Probable Software error (some chance of hardware cause)",
 };


 if (VAR_7->version != VAR_4) {
  FUNC_1("Machine Check Exception, Unknown event version %d !\n",
         VAR_7->version);
  return;
 }
 switch (VAR_7->severity) {
 case 130:
  VAR_10 = VAR_1;
  VAR_11 = "Harmless";
  break;
 case 128:
  VAR_10 = VAR_2;
  VAR_11 = "Warning";
  break;
 case 129:
  VAR_10 = VAR_0;
  VAR_11 = "Severe";
  break;
 case 131:
 default:
  VAR_10 = VAR_0;
  VAR_11 = "Fatal";
  break;
 }

 switch(VAR_7->initiator) {
 case 137:
  VAR_14 = "CPU";
  break;
 case 134:
  VAR_14 = "PCI";
  break;
 case 136:
  VAR_14 = "ISA";
  break;
 case 135:
  VAR_14 = "Memory";
  break;
 case 133:
  VAR_14 = "Power Management";
  break;
 case 132:
 default:
  VAR_14 = "Unknown";
  break;
 }

 switch (VAR_7->error_type) {
 case 140:
  VAR_13 = "UE";
  VAR_12 = VAR_7->u.ue_error.ue_error_type <
   FUNC_0(VAR_20) ?
   VAR_20[VAR_7->u.ue_error.ue_error_type]
   : "Unknown";
  if (VAR_7->u.ue_error.effective_address_provided)
   VAR_15 = VAR_7->u.ue_error.effective_address;
  if (VAR_7->u.ue_error.physical_address_provided)
   VAR_16 = VAR_7->u.ue_error.physical_address;
  break;
 case 142:
  VAR_13 = "SLB";
  VAR_12 = VAR_7->u.slb_error.slb_error_type <
   FUNC_0(VAR_21) ?
   VAR_21[VAR_7->u.slb_error.slb_error_type]
   : "Unknown";
  if (VAR_7->u.slb_error.effective_address_provided)
   VAR_15 = VAR_7->u.slb_error.effective_address;
  break;
 case 146:
  VAR_13 = "ERAT";
  VAR_12 = VAR_7->u.erat_error.erat_error_type <
   FUNC_0(VAR_22) ?
   VAR_22[VAR_7->u.erat_error.erat_error_type]
   : "Unknown";
  if (VAR_7->u.erat_error.effective_address_provided)
   VAR_15 = VAR_7->u.erat_error.effective_address;
  break;
 case 141:
  VAR_13 = "TLB";
  VAR_12 = VAR_7->u.tlb_error.tlb_error_type <
   FUNC_0(VAR_23) ?
   VAR_23[VAR_7->u.tlb_error.tlb_error_type]
   : "Unknown";
  if (VAR_7->u.tlb_error.effective_address_provided)
   VAR_15 = VAR_7->u.tlb_error.effective_address;
  break;
 case 138:
  VAR_13 = "User";
  VAR_12 = VAR_7->u.user_error.user_error_type <
   FUNC_0(VAR_24) ?
   VAR_24[VAR_7->u.user_error.user_error_type]
   : "Unknown";
  if (VAR_7->u.user_error.effective_address_provided)
   VAR_15 = VAR_7->u.user_error.effective_address;
  break;
 case 143:
  VAR_13 = "Real address";
  VAR_12 = VAR_7->u.ra_error.ra_error_type <
   FUNC_0(VAR_25) ?
   VAR_25[VAR_7->u.ra_error.ra_error_type]
   : "Unknown";
  if (VAR_7->u.ra_error.effective_address_provided)
   VAR_15 = VAR_7->u.ra_error.effective_address;
  break;
 case 144:
  VAR_13 = "Link";
  VAR_12 = VAR_7->u.link_error.link_error_type <
   FUNC_0(VAR_26) ?
   VAR_26[VAR_7->u.link_error.link_error_type]
   : "Unknown";
  if (VAR_7->u.link_error.effective_address_provided)
   VAR_15 = VAR_7->u.link_error.effective_address;
  break;
 case 147:
  VAR_13 = "D-Cache";
  VAR_12 = "Unknown";
  break;
 case 145:
  VAR_13 = "I-Cache";
  VAR_12 = "Unknown";
  break;
 default:
 case 139:
  VAR_13 = "Unknown";
  VAR_12 = "";
  break;
 }

 VAR_18[0] = VAR_19[0] = '\0';
 if (VAR_15 && VAR_7->srr0 != VAR_15) {

  VAR_17 = FUNC_4(VAR_18, "DAR: %016llx ", VAR_15);
  if (VAR_16)
   FUNC_4(VAR_18 + VAR_17, "paddr: %016llx ", VAR_16);
 } else if (VAR_16) {
  FUNC_4(VAR_19, " paddr: %016llx", VAR_16);
 }

 FUNC_2("%sMCE: CPU%d: machine check (%s) %s %s %s %s[%s]\n",
  VAR_10, VAR_7->cpu, VAR_11, VAR_9 ? "Guest" : "Host",
  VAR_13, VAR_12, VAR_18,
  VAR_7->disposition == VAR_3 ?
  "Recovered" : "Not recovered");

 if (VAR_9 || VAR_8) {
  FUNC_2("%sMCE: CPU%d: PID: %d Comm: %s %sNIP: [%016llx]%s\n",
   VAR_10, VAR_7->cpu, VAR_5->pid, VAR_5->comm,
   VAR_9 ? "Guest " : "", VAR_7->srr0, VAR_19);
 } else {
  FUNC_2("%sMCE: CPU%d: NIP: [%016llx] %pS%s\n",
   VAR_10, VAR_7->cpu, VAR_7->srr0, (void *)VAR_7->srr0, VAR_19);
 }

 FUNC_2("%sMCE: CPU%d: Initiator %s\n", VAR_10, VAR_7->cpu, VAR_14);

 VAR_12 = VAR_7->error_class < FUNC_0(VAR_27) ?
  VAR_27[VAR_7->error_class] : "Unknown";
 FUNC_2("%sMCE: CPU%d: %s\n", VAR_10, VAR_7->cpu, VAR_12);






}
