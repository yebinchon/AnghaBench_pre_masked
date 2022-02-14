
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* uintmax_t ;
struct kinfo_vmobject {char const* kvo_ref_count; char const* kvo_shadow_count; int kvo_memattr; int kvo_type; char const* kvo_path; scalar_t__ kvo_inactive; scalar_t__ kvo_active; scalar_t__ kvo_resident; } ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct kinfo_vmobject *VAR_0)
{
 const char *VAR_1;

 FUNC_2("object");
 FUNC_1("{:resident/%5ju} ", (uintmax_t)VAR_0->kvo_resident);
 FUNC_1("{:active/%5ju} ", (uintmax_t)VAR_0->kvo_active);
 FUNC_1("{:inactive/%5ju} ", (uintmax_t)VAR_0->kvo_inactive);
 FUNC_1("{:refcount/%3d} ", VAR_0->kvo_ref_count);
 FUNC_1("{:shadowcount/%3d} ", VAR_0->kvo_shadow_count);
 switch (VAR_0->kvo_memattr) {

 case 134:
  VAR_1 = "UC";
  break;


 case 130:
  VAR_1 = "WC";
  break;


 case 128:
  VAR_1 = "WT";
  break;


 case 129:
  VAR_1 = "WP";
  break;


 case 131:
  VAR_1 = "WB";
  break;


 case 132:
  VAR_1 = "UC-";
  break;


 case 133:
  VAR_1 = "WB";
  break;


 case 136:
  VAR_1 = "NC";
  break;


 case 137:
  VAR_1 = "DEV";
  break;


 case 138:
  VAR_1 = "C";
  break;


 case 135:
  VAR_1 = "PRE";
  break;

 default:
  VAR_1 = "??";
  break;
 }
 FUNC_1("{:attribute/%-3s} ", VAR_1);
 switch (VAR_0->kvo_type) {
 case 144:
  VAR_1 = "--";
  break;
 case 147:
  VAR_1 = "df";
  break;
 case 139:
  VAR_1 = "vn";
  break;
 case 141:
  VAR_1 = "sw";
  break;
 case 146:
  VAR_1 = "dv";
  break;
 case 143:
  VAR_1 = "ph";
  break;
 case 148:
  VAR_1 = "dd";
  break;
 case 142:
  VAR_1 = "sg";
  break;
 case 145:
  VAR_1 = "md";
  break;
 case 140:
 default:
  VAR_1 = "??";
  break;
 }
 FUNC_1("{:type/%-2s} ", VAR_1);
 FUNC_1("{:path/%-s}\n", VAR_0->kvo_path);
 FUNC_0("object");
}
