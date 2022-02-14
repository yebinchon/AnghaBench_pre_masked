
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_hdr {unsigned long long base_version; scalar_t__ mgmt_class; unsigned long long class_version; int attr_mod; scalar_t__ attr_id; int tid; scalar_t__ class_specific; scalar_t__ status; int method; } ;


 scalar_t__ VAR_0 ;
 unsigned long long FUNC_0 (scalar_t__) ;
 unsigned long long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (unsigned long long) ;
 int FUNC_6 (unsigned long long) ;
 int FUNC_7 (char*,unsigned long long,...) ;

__attribute__((used)) static void FUNC_8(struct ib_mad_hdr *VAR_1)
{
 FUNC_7("MAD version....0x%01x\n", VAR_1->base_version);
 FUNC_7("Class..........0x%01x (%s)\n", VAR_1->mgmt_class,
        FUNC_3(VAR_1->mgmt_class));
 FUNC_7("Class version..0x%01x\n", VAR_1->class_version);
 FUNC_7("Method.........0x%01x (%s)\n", VAR_1->method,
        FUNC_4(VAR_1->mgmt_class, VAR_1->method));
 FUNC_7("Status.........0x%02x\n", FUNC_0(VAR_1->status));
 if (VAR_1->status)
  FUNC_6(FUNC_0(VAR_1->status));
 FUNC_7("Class specific.0x%02x\n", FUNC_0(VAR_1->class_specific));
 FUNC_7("Trans ID.......0x%llx\n",
  (unsigned long long)FUNC_2(VAR_1->tid));
 if (VAR_1->mgmt_class == VAR_0)
  FUNC_7("Attr ID........0x%02x (%s)\n",
         FUNC_0(VAR_1->attr_id),
         FUNC_5(FUNC_0(VAR_1->attr_id)));
 else
  FUNC_7("Attr ID........0x%02x\n",
         FUNC_0(VAR_1->attr_id));
 FUNC_7("Attr modifier..0x%04x\n", FUNC_1(VAR_1->attr_mod));
}
