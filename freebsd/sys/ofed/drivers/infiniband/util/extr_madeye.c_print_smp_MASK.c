
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {int * return_path; int * initial_path; int * data; scalar_t__ dr_dlid; scalar_t__ dr_slid; int mkey; int attr_mod; scalar_t__ attr_id; int tid; int hop_cnt; int hop_ptr; scalar_t__ status; int method; int mgmt_class; int class_version; int base_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void FUNC_8(struct ib_smp *VAR_3)
{
 int VAR_4;

 FUNC_7("MAD version....0x%01x\n", VAR_3->base_version);
 FUNC_7("Class..........0x%01x (%s)\n", VAR_3->mgmt_class,
        FUNC_3(VAR_3->mgmt_class));
 FUNC_7("Class version..0x%01x\n", VAR_3->class_version);
 FUNC_7("Method.........0x%01x (%s)\n", VAR_3->method,
        FUNC_4(VAR_3->mgmt_class, VAR_3->method));
 FUNC_7("Status.........0x%02x\n", FUNC_0(VAR_3->status));
 if (VAR_3->status)
  FUNC_6(FUNC_0(VAR_3->status));
 FUNC_7("Hop pointer....0x%01x\n", VAR_3->hop_ptr);
 FUNC_7("Hop counter....0x%01x\n", VAR_3->hop_cnt);
 FUNC_7("Trans ID.......0x%llx\n",
  (unsigned long long)FUNC_2(VAR_3->tid));
 FUNC_7("Attr ID........0x%02x (%s)\n", FUNC_0(VAR_3->attr_id),
  FUNC_5(VAR_3->attr_id));
 FUNC_7("Attr modifier..0x%04x\n", FUNC_1(VAR_3->attr_mod));

 FUNC_7("Mkey...........0x%llx\n",
  (unsigned long long)FUNC_2(VAR_3->mkey));
 FUNC_7("DR SLID........0x%02x\n", FUNC_0(VAR_3->dr_slid));
 FUNC_7("DR DLID........0x%02x", FUNC_0(VAR_3->dr_dlid));

 if (VAR_2) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_4 % 16 == 0)
    FUNC_7("\nSMP Data.......");
   FUNC_7("%01x ", VAR_3->data[VAR_4]);
  }
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   if (VAR_4 % 16 == 0)
    FUNC_7("\nInitial path...");
   FUNC_7("%01x ", VAR_3->initial_path[VAR_4]);
  }
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   if (VAR_4 % 16 == 0)
    FUNC_7("\nReturn path....");
   FUNC_7("%01x ", VAR_3->return_path[VAR_4]);
  }
 }
 FUNC_7("\n");
}
