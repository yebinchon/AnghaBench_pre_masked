
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amd64_pvt {int ext_model; int model; int fam; int mc_node_id; int * ops; int stepping; } ;
struct amd64_family_type {char* ctl_name; int ops; } ;
struct TYPE_2__ {int x86_model; int x86; int x86_stepping; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*,int ) ;
 TYPE_1__ VAR_12 ;
 struct amd64_family_type* VAR_13 ;

__attribute__((used)) static struct amd64_family_type *FUNC_2(struct amd64_pvt *VAR_14)
{
 struct amd64_family_type *VAR_15 = ((void*)0);

 VAR_14->ext_model = VAR_12.x86_model >> 4;
 VAR_14->stepping = VAR_12.x86_stepping;
 VAR_14->model = VAR_12.x86_model;
 VAR_14->fam = VAR_12.x86;

 switch (VAR_14->fam) {
 case 0xf:
  VAR_15 = &VAR_13[VAR_10];
  VAR_14->ops = &VAR_13[VAR_10].ops;
  break;

 case 0x10:
  VAR_15 = &VAR_13[VAR_0];
  VAR_14->ops = &VAR_13[VAR_0].ops;
  break;

 case 0x15:
  if (VAR_14->model == 0x30) {
   VAR_15 = &VAR_13[VAR_2];
   VAR_14->ops = &VAR_13[VAR_2].ops;
   break;
  } else if (VAR_14->model == 0x60) {
   VAR_15 = &VAR_13[VAR_3];
   VAR_14->ops = &VAR_13[VAR_3].ops;
   break;
  }

  VAR_15 = &VAR_13[VAR_1];
  VAR_14->ops = &VAR_13[VAR_1].ops;
  break;

 case 0x16:
  if (VAR_14->model == 0x30) {
   VAR_15 = &VAR_13[VAR_5];
   VAR_14->ops = &VAR_13[VAR_5].ops;
   break;
  }
  VAR_15 = &VAR_13[VAR_4];
  VAR_14->ops = &VAR_13[VAR_4].ops;
  break;

 case 0x17:
  if (VAR_14->model >= 0x10 && VAR_14->model <= 0x2f) {
   VAR_15 = &VAR_13[VAR_7];
   VAR_14->ops = &VAR_13[VAR_7].ops;
   break;
  } else if (VAR_14->model >= 0x30 && VAR_14->model <= 0x3f) {
   VAR_15 = &VAR_13[VAR_8];
   VAR_14->ops = &VAR_13[VAR_8].ops;
   break;
  } else if (VAR_14->model >= 0x70 && VAR_14->model <= 0x7f) {
   VAR_15 = &VAR_13[VAR_9];
   VAR_14->ops = &VAR_13[VAR_9].ops;
   break;
  }

 case 0x18:
  VAR_15 = &VAR_13[VAR_6];
  VAR_14->ops = &VAR_13[VAR_6].ops;

  if (VAR_14->fam == 0x18)
   VAR_13[VAR_6].ctl_name = "F18h";
  break;

 default:
  FUNC_0("Unsupported family!\n");
  return ((void*)0);
 }

 FUNC_1("%s %sdetected (node %d).\n", VAR_15->ctl_name,
       (VAR_14->fam == 0xf ?
    (VAR_14->ext_model >= VAR_11 ? "revF or later "
            : "revE or earlier ")
     : ""), VAR_14->mc_node_id);
 return VAR_15;
}
