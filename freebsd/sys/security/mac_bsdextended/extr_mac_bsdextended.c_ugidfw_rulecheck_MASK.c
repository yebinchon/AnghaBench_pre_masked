
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vnode {TYPE_3__* v_mount; } ;
struct vattr {scalar_t__ va_uid; scalar_t__ va_gid; int va_mode; int va_type; } ;
struct ucred {scalar_t__ cr_uid; scalar_t__ cr_ruid; scalar_t__ cr_svuid; scalar_t__ cr_rgid; scalar_t__ cr_svgid; int cr_ngroups; scalar_t__* cr_groups; TYPE_1__* cr_prison; } ;
struct TYPE_9__ {int mbo_flags; scalar_t__ mbo_uid_max; scalar_t__ mbo_uid_min; int mbo_neg; scalar_t__ mbo_gid_max; scalar_t__ mbo_gid_min; int mbo_type; int mbo_fsid; } ;
struct TYPE_10__ {int mbs_flags; scalar_t__ mbs_uid_max; scalar_t__ mbs_uid_min; int mbs_neg; scalar_t__ mbs_gid_max; scalar_t__ mbs_gid_min; scalar_t__ mbs_prison; } ;
struct mac_bsdextended_rule {int mbr_mode; TYPE_4__ mbr_object; TYPE_5__ mbr_subject; } ;
struct TYPE_7__ {int f_fsid; } ;
struct TYPE_8__ {TYPE_2__ mnt_stat; } ;
struct TYPE_6__ {scalar_t__ pr_id; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;







 scalar_t__ FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__,struct ucred*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct ucred*,int ) ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;

__attribute__((used)) static int
FUNC_5(struct mac_bsdextended_rule *VAR_38,
    struct ucred *VAR_39, struct vnode *VAR_40, struct vattr *VAR_41, int VAR_42)
{
 int VAR_43, VAR_44, VAR_45;
 int VAR_46;




 FUNC_3(&VAR_37, VAR_3);
 if (VAR_38->mbr_subject.mbs_flags & VAR_26) {
  VAR_44 = ((VAR_39->cr_uid <= VAR_38->mbr_subject.mbs_uid_max &&
      VAR_39->cr_uid >= VAR_38->mbr_subject.mbs_uid_min) ||
      (VAR_39->cr_ruid <= VAR_38->mbr_subject.mbs_uid_max &&
      VAR_39->cr_ruid >= VAR_38->mbr_subject.mbs_uid_min) ||
      (VAR_39->cr_svuid <= VAR_38->mbr_subject.mbs_uid_max &&
      VAR_39->cr_svuid >= VAR_38->mbr_subject.mbs_uid_min));
  if (VAR_38->mbr_subject.mbs_neg & VAR_26)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }

 if (VAR_38->mbr_subject.mbs_flags & VAR_24) {
  VAR_44 = ((VAR_39->cr_rgid <= VAR_38->mbr_subject.mbs_gid_max &&
      VAR_39->cr_rgid >= VAR_38->mbr_subject.mbs_gid_min) ||
      (VAR_39->cr_svgid <= VAR_38->mbr_subject.mbs_gid_max &&
      VAR_39->cr_svgid >= VAR_38->mbr_subject.mbs_gid_min));
  if (!VAR_44) {
   for (VAR_46 = 0; VAR_46 < VAR_39->cr_ngroups; VAR_46++) {
    if (VAR_39->cr_groups[VAR_46]
        <= VAR_38->mbr_subject.mbs_gid_max &&
        VAR_39->cr_groups[VAR_46]
        >= VAR_38->mbr_subject.mbs_gid_min) {
     VAR_44 = 1;
     break;
    }
   }
  }
  if (VAR_38->mbr_subject.mbs_neg & VAR_24)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }

 if (VAR_38->mbr_subject.mbs_flags & VAR_25) {
  VAR_44 =
      (VAR_39->cr_prison->pr_id == VAR_38->mbr_subject.mbs_prison);
  if (VAR_38->mbr_subject.mbs_neg & VAR_25)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }




 if (VAR_38->mbr_object.mbo_flags & VAR_22) {
  VAR_44 = (VAR_41->va_uid <= VAR_38->mbr_object.mbo_uid_max &&
      VAR_41->va_uid >= VAR_38->mbr_object.mbo_uid_min);
  if (VAR_38->mbr_object.mbo_neg & VAR_22)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }

 if (VAR_38->mbr_object.mbo_flags & VAR_10) {
  VAR_44 = (VAR_41->va_gid <= VAR_38->mbr_object.mbo_gid_max &&
      VAR_41->va_gid >= VAR_38->mbr_object.mbo_gid_min);
  if (VAR_38->mbr_object.mbo_neg & VAR_10)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }

 if (VAR_38->mbr_object.mbo_flags & VAR_9) {
  VAR_44 = (FUNC_0(&(VAR_40->v_mount->mnt_stat.f_fsid),
      &(VAR_38->mbr_object.mbo_fsid),
      sizeof(VAR_38->mbr_object.mbo_fsid)) == 0);
  if (VAR_38->mbr_object.mbo_neg & VAR_9)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }

 if (VAR_38->mbr_object.mbo_flags & VAR_13) {
  VAR_44 = (VAR_41->va_mode & VAR_34);
  if (VAR_38->mbr_object.mbo_neg & VAR_13)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }

 if (VAR_38->mbr_object.mbo_flags & VAR_12) {
  VAR_44 = (VAR_41->va_mode & VAR_33);
  if (VAR_38->mbr_object.mbo_neg & VAR_12)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }

 if (VAR_38->mbr_object.mbo_flags & VAR_23) {
  VAR_44 = (VAR_41->va_uid == VAR_39->cr_uid ||
      VAR_41->va_uid == VAR_39->cr_ruid ||
      VAR_41->va_uid == VAR_39->cr_svuid);
  if (VAR_38->mbr_object.mbo_neg & VAR_23)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }

 if (VAR_38->mbr_object.mbo_flags & VAR_11) {
  VAR_44 = (FUNC_1(VAR_41->va_gid, VAR_39) ||
      VAR_41->va_gid == VAR_39->cr_rgid ||
      VAR_41->va_gid == VAR_39->cr_svgid);
  if (VAR_38->mbr_object.mbo_neg & VAR_11)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }

 if (VAR_38->mbr_object.mbo_flags & VAR_16) {
  switch (VAR_41->va_type) {
  case 129:
   VAR_44 = (VAR_38->mbr_object.mbo_type & VAR_20);
   break;
  case 132:
   VAR_44 = (VAR_38->mbr_object.mbo_type & VAR_17);
   break;
  case 134:
   VAR_44 = (VAR_38->mbr_object.mbo_type & VAR_14);
   break;
  case 133:
   VAR_44 = (VAR_38->mbr_object.mbo_type & VAR_15);
   break;
  case 130:
   VAR_44 = (VAR_38->mbr_object.mbo_type & VAR_19);
   break;
  case 128:
   VAR_44 = (VAR_38->mbr_object.mbo_type & VAR_21);
   break;
  case 131:
   VAR_44 = (VAR_38->mbr_object.mbo_type & VAR_18);
   break;
  default:
   VAR_44 = 0;
  }
  if (VAR_38->mbr_object.mbo_neg & VAR_16)
   VAR_44 = !VAR_44;
  if (!VAR_44)
   return (0);
 }





 VAR_45 = 0;
 VAR_43 = VAR_38->mbr_mode;
 if ((VAR_42 & VAR_4) && (VAR_43 & VAR_4) == 0 &&
     FUNC_4(VAR_39, VAR_27) == 0)
  VAR_45 |= VAR_4;
 if ((VAR_42 & VAR_5) && (VAR_43 & VAR_5) == 0 &&
     FUNC_4(VAR_39, (VAR_41->va_type == 132) ? VAR_29 : VAR_28) == 0)
  VAR_45 |= VAR_5;
 if ((VAR_42 & VAR_6) && (VAR_43 & VAR_6) == 0 &&
     FUNC_4(VAR_39, VAR_30) == 0)
  VAR_45 |= VAR_6;
 if ((VAR_42 & VAR_7) && (VAR_43 & VAR_7) == 0 &&
     FUNC_4(VAR_39, VAR_31) == 0)
  VAR_45 |= VAR_7;
 if ((VAR_42 & VAR_8) && (VAR_43 & VAR_8) == 0 &&
     FUNC_4(VAR_39, VAR_32) == 0)
  VAR_45 |= VAR_8;



 if (((VAR_43 | VAR_45) & VAR_42) != VAR_42) {
  if (VAR_36)
   FUNC_2(VAR_2, "mac_bsdextended: %d:%d request %d"
       " on %d:%d failed. \n", VAR_39->cr_ruid,
       VAR_39->cr_rgid, VAR_42, VAR_41->va_uid,
       VAR_41->va_gid);
  return (VAR_0);
 }





 if (VAR_35)
  return (VAR_1);
 else
  return (0);
}
