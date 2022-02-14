
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* uintmax_t ;
struct procstat {int dummy; } ;
struct kinfo_vmentry {int kve_protection; char const* kve_resident; char const* kve_private_resident; char const* kve_ref_count; char const* kve_shadow_count; int kve_flags; int kve_type; char const* kve_path; scalar_t__ kve_end; scalar_t__ kve_start; } ;
struct kinfo_proc {char const* ki_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct kinfo_vmentry*) ;
 struct kinfo_vmentry* FUNC_1 (struct procstat*,struct kinfo_proc*,int*) ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

void
FUNC_9(struct procstat *VAR_11, struct kinfo_proc *VAR_12)
{
 struct kinfo_vmentry *VAR_13, *VAR_14;
 int VAR_15;
 int VAR_16, VAR_17;
 const char *VAR_18, *VAR_19;

 VAR_15 = 2*sizeof(void *) + 2;
 if ((VAR_10 & VAR_9) == 0)
  FUNC_5("{T:/%5s %*s %*s %3s %4s %4s %3s %3s %-5s %-2s %-s}\n",
      "PID", VAR_15, "START", VAR_15, "END", "PRT", "RES",
      "PRES", "REF", "SHD", "FLAG", "TP", "PATH");

 FUNC_5("{ek:process_id/%d}", VAR_12->ki_pid);

 VAR_13 = FUNC_1(VAR_11, VAR_12, &VAR_17);
 if (VAR_13 == ((void*)0))
  return;
 FUNC_8("vm");
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  FUNC_7("vm");
  VAR_14 = &VAR_13[VAR_16];
  FUNC_5("{dk:process_id/%5d} ", VAR_12->ki_pid);
  FUNC_5("{d:kve_start/%#*jx} ", VAR_15,
      (uintmax_t)VAR_14->kve_start);
  FUNC_5("{d:kve_end/%#*jx} ", VAR_15,
      (uintmax_t)VAR_14->kve_end);
  FUNC_5("{e:kve_start/%#jx}", (uintmax_t)VAR_14->kve_start);
  FUNC_5("{e:kve_end/%#jx}", (uintmax_t)VAR_14->kve_end);
  FUNC_5("{d:read/%s}", VAR_14->kve_protection & VAR_7 ?
      "r" : "-");
  FUNC_5("{d:write/%s}", VAR_14->kve_protection & VAR_8 ?
      "w" : "-");
  FUNC_5("{d:exec/%s} ", VAR_14->kve_protection & VAR_6 ?
      "x" : "-");
  FUNC_6("kve_protection");
  FUNC_5("{en:read/%s}", VAR_14->kve_protection & VAR_7 ?
      "true" : "false");
  FUNC_5("{en:write/%s}", VAR_14->kve_protection & VAR_8 ?
      "true" : "false");
  FUNC_5("{en:exec/%s}", VAR_14->kve_protection & VAR_6 ?
      "true" : "false");
  FUNC_2("kve_protection");
  FUNC_5("{:kve_resident/%4d/%d} ", VAR_14->kve_resident);
  FUNC_5("{:kve_private_resident/%4d/%d} ",
      VAR_14->kve_private_resident);
  FUNC_5("{:kve_ref_count/%3d/%d} ", VAR_14->kve_ref_count);
  FUNC_5("{:kve_shadow_count/%3d/%d} ", VAR_14->kve_shadow_count);
  FUNC_5("{d:copy_on_write/%-1s}", VAR_14->kve_flags &
      VAR_0 ? "C" : "-");
  FUNC_5("{d:need_copy/%-1s}", VAR_14->kve_flags &
      VAR_3 ? "N" : "-");
  FUNC_5("{d:super_pages/%-1s}", VAR_14->kve_flags &
      VAR_4 ? "S" : "-");
  FUNC_5("{d:grows_down/%-1s}", VAR_14->kve_flags &
      VAR_2 ? "U" : VAR_14->kve_flags &
      VAR_1 ? "D" : "-");
  FUNC_5("{d:wired/%-1s} ", VAR_14->kve_flags &
      VAR_5 ? "W" : "-");
  FUNC_6("kve_flags");
  FUNC_5("{en:copy_on_write/%s}", VAR_14->kve_flags &
      VAR_0 ? "true" : "false");
  FUNC_5("{en:needs_copy/%s}", VAR_14->kve_flags &
      VAR_3 ? "true" : "false");
  FUNC_5("{en:super_pages/%s}", VAR_14->kve_flags &
      VAR_4 ? "true" : "false");
  FUNC_5("{en:grows_up/%s}", VAR_14->kve_flags &
      VAR_2 ? "true" : "false");
  FUNC_5("{en:grows_down/%s}", VAR_14->kve_flags &
      VAR_1 ? "true" : "false");
  FUNC_5("{en:wired/%s}", VAR_14->kve_flags &
      VAR_5 ? "true" : "false");
  FUNC_2("kve_flags");
  switch (VAR_14->kve_type) {
  case 133:
   VAR_18 = "--";
   VAR_19 = "none";
   break;
  case 136:
   VAR_18 = "df";
   VAR_19 = "default";
   break;
  case 128:
   VAR_18 = "vn";
   VAR_19 = "vnode";
   break;
  case 130:
   VAR_18 = "sw";
   VAR_19 = "swap";
   break;
  case 135:
   VAR_18 = "dv";
   VAR_19 = "device";
   break;
  case 132:
   VAR_18 = "ph";
   VAR_19 = "physical";
   break;
  case 137:
   VAR_18 = "dd";
   VAR_19 = "dead";
   break;
  case 131:
   VAR_18 = "sg";
   VAR_19 = "scatter/gather";
   break;
  case 134:
   VAR_18 = "md";
   VAR_19 = "managed_device";
   break;
  case 129:
  default:
   VAR_18 = "??";
   VAR_19 = "unknown";
   break;
  }
  FUNC_5("{d:kve_type/%-2s} ", VAR_18);
  FUNC_5("{e:kve_type/%s}", VAR_19);
  FUNC_5("{:kve_path/%-s/%s}\n", VAR_14->kve_path);
  FUNC_3("vm");
 }
 FUNC_4("vm");
 FUNC_0(VAR_13);
}
