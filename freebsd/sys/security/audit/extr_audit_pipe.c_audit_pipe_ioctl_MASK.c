
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct auditpipe_ioctl_preselect {int aip_mask; int aip_auid; } ;
struct audit_pipe {int ap_qbyteslen; int ap_qoffset; int ap_preselect_mode; int ap_drops; int ap_reads; int ap_inserts; void* ap_preselect_naflags; void* ap_preselect_flags; int ap_qlimit; int ap_qlen; int ap_sigio; int ap_flags; } ;
typedef scalar_t__ caddr_t ;
typedef void* au_mask_t ;
typedef int au_id_t ;
 int VAR_0 ;
 int FUNC_0 (struct audit_pipe*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct audit_pipe*) ;
 int FUNC_2 (struct audit_pipe*) ;
 int FUNC_3 (struct audit_pipe*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int FUNC_4 (struct audit_pipe*) ;
 int FUNC_5 (struct audit_pipe*,int ) ;
 int FUNC_6 (struct audit_pipe*) ;
 int FUNC_7 (struct audit_pipe*,int ,int *) ;
 int FUNC_8 (struct audit_pipe*,int ,int ) ;
 int FUNC_9 (void**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,int *) ;

__attribute__((used)) static int
FUNC_12(struct cdev *VAR_8, u_long VAR_9, caddr_t VAR_10, int VAR_11,
    struct thread *VAR_12)
{
 struct auditpipe_ioctl_preselect *VAR_13;
 struct audit_pipe *VAR_14;
 au_mask_t *VAR_15;
 int VAR_16, VAR_17;
 au_id_t VAR_18;

 VAR_16 = FUNC_9((void **)&VAR_14);
 if (VAR_16 != 0)
  return (VAR_16);






 switch (VAR_9) {
 case 130:
  FUNC_0(VAR_14);
  if (*(int *)VAR_10)
   VAR_14->ap_flags |= VAR_1;
  else
   VAR_14->ap_flags &= ~VAR_1;
  FUNC_3(VAR_14);
  VAR_16 = 0;
  break;

 case 129:
  FUNC_0(VAR_14);
  *(int *)VAR_10 = VAR_14->ap_qbyteslen - VAR_14->ap_qoffset;
  FUNC_3(VAR_14);
  VAR_16 = 0;
  break;

 case 132:
  FUNC_0(VAR_14);
  if (*(int *)VAR_10)
   VAR_14->ap_flags |= VAR_0;
  else
   VAR_14->ap_flags &= ~VAR_0;
  FUNC_3(VAR_14);
  VAR_16 = 0;
  break;

 case 128:
  VAR_16 = FUNC_11(*(int *)VAR_10, &VAR_14->ap_sigio);
  break;

 case 131:
  *(int *)VAR_10 = FUNC_10(&VAR_14->ap_sigio);
  VAR_16 = 0;
  break;

 case 145:
  *(u_int *)VAR_10 = VAR_14->ap_qlen;
  VAR_16 = 0;
  break;

 case 144:
  *(u_int *)VAR_10 = VAR_14->ap_qlimit;
  VAR_16 = 0;
  break;

 case 133:

  if (*(u_int *)VAR_10 >= VAR_3 &&
      *(u_int *)VAR_10 <= VAR_2) {
   VAR_14->ap_qlimit = *(u_int *)VAR_10;
   VAR_16 = 0;
  } else
   VAR_16 = VAR_5;
  break;

 case 142:
  *(u_int *)VAR_10 = VAR_3;
  VAR_16 = 0;
  break;

 case 143:
  *(u_int *)VAR_10 = VAR_2;
  VAR_16 = 0;
  break;

 case 148:
  FUNC_0(VAR_14);
  VAR_15 = (au_mask_t *)VAR_10;
  *VAR_15 = VAR_14->ap_preselect_flags;
  FUNC_3(VAR_14);
  VAR_16 = 0;
  break;

 case 136:
  FUNC_0(VAR_14);
  VAR_15 = (au_mask_t *)VAR_10;
  VAR_14->ap_preselect_flags = *VAR_15;
  FUNC_3(VAR_14);
  VAR_16 = 0;
  break;

 case 146:
  FUNC_0(VAR_14);
  VAR_15 = (au_mask_t *)VAR_10;
  *VAR_15 = VAR_14->ap_preselect_naflags;
  FUNC_3(VAR_14);
  VAR_16 = 0;
  break;

 case 134:
  FUNC_0(VAR_14);
  VAR_15 = (au_mask_t *)VAR_10;
  VAR_14->ap_preselect_naflags = *VAR_15;
  FUNC_3(VAR_14);
  VAR_16 = 0;
  break;

 case 149:
  VAR_13 = (struct auditpipe_ioctl_preselect *)VAR_10;
  VAR_16 = FUNC_7(VAR_14, VAR_13->aip_auid,
      &VAR_13->aip_mask);
  break;

 case 137:
  VAR_13 = (struct auditpipe_ioctl_preselect *)VAR_10;
  FUNC_8(VAR_14, VAR_13->aip_auid, VAR_13->aip_mask);
  VAR_16 = 0;
  break;

 case 155:
  VAR_18 = *(au_id_t *)VAR_10;
  VAR_16 = FUNC_5(VAR_14, VAR_18);
  break;

 case 153:
  FUNC_6(VAR_14);
  VAR_16 = 0;
  break;

 case 147:
  FUNC_0(VAR_14);
  *(int *)VAR_10 = VAR_14->ap_preselect_mode;
  FUNC_3(VAR_14);
  VAR_16 = 0;
  break;

 case 135:
  VAR_17 = *(int *)VAR_10;
  switch (VAR_17) {
  case 138:
  case 139:
   FUNC_0(VAR_14);
   VAR_14->ap_preselect_mode = VAR_17;
   FUNC_3(VAR_14);
   VAR_16 = 0;
   break;

  default:
   VAR_16 = VAR_5;
  }
  break;

 case 154:
  if (FUNC_1(VAR_14) != 0)
   return (VAR_4);
  FUNC_0(VAR_14);
  FUNC_4(VAR_14);
  FUNC_3(VAR_14);
  FUNC_2(VAR_14);
  VAR_16 = 0;
  break;

 case 150:
  *(u_int *)VAR_10 = VAR_7;
  VAR_16 = 0;
  break;

 case 151:
  *(u_int *)VAR_10 = VAR_14->ap_inserts;
  VAR_16 = 0;
  break;

 case 141:
  *(u_int *)VAR_10 = VAR_14->ap_reads;
  VAR_16 = 0;
  break;

 case 152:
  *(u_int *)VAR_10 = VAR_14->ap_drops;
  VAR_16 = 0;
  break;

 case 140:
  *(u_int *)VAR_10 = 0;
  VAR_16 = 0;
  break;

 default:
  VAR_16 = VAR_6;
 }
 return (VAR_16);
}
