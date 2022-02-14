
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct image_params {int interpreted; int attr; struct vnode* vp; } ;
typedef int fingerprint_status_t ;
struct TYPE_2__ {int pr_securelevel; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct image_params*,struct thread*,char*) ;
 int FUNC_2 (struct vnode*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct vnode*,int ,struct thread*,int) ;
 TYPE_1__ VAR_4 ;

int
FUNC_5(struct image_params *VAR_5,
    int VAR_6, struct thread *VAR_7)
{
 struct vnode *VAR_8 = VAR_5->vp;
 int VAR_9;
 fingerprint_status_t VAR_10;

 if (!FUNC_3(VAR_2))
  return 0;

 VAR_9 = FUNC_4(VAR_8, VAR_5->attr,
     VAR_7, VAR_6);
 if (VAR_9 && VAR_9 != VAR_0)
  return (VAR_9);




 VAR_10 = FUNC_2(VAR_8);
 switch (VAR_10) {
 case 132:
  FUNC_1(VAR_5, VAR_7, "got unexpected FINGERPRINT_INVALID");
  VAR_9 = VAR_1;
  break;

 case 134:
  if (!VAR_6) {
   if (VAR_4 > 1 ||
       FUNC_3(VAR_3))
    VAR_9 = VAR_1;
  }
  break;

 case 128:
  FUNC_0(4, ("Fingerprint matches\n"));
  break;

 case 133:

  if (!VAR_5->interpreted) {
   FUNC_1(VAR_5, VAR_7, "attempted direct execution");
   if (VAR_4 > 1 ||
       FUNC_3(VAR_3))
    VAR_9 = VAR_1;
  }
  break;

 case 129:
  FUNC_1(VAR_5, VAR_7,
      "fingerprint does not match loaded value");
  if (VAR_4 > 1 ||
      FUNC_3(VAR_3))
   VAR_9 = VAR_0;
  break;

 case 130:
  FUNC_1(VAR_5, VAR_7, "no fingerprint");
  if (VAR_4 > 1 ||
      FUNC_3(VAR_3))
   VAR_9 = VAR_0;
  break;

 case 131:
  FUNC_1(VAR_5, VAR_7, "no signatures for device");
  if (VAR_4 > 1 ||
      FUNC_3(VAR_3))
   VAR_9 = VAR_0;
  break;

 default:
  FUNC_1(VAR_5, VAR_7, "invalid status field for vnode");
  VAR_9 = VAR_1;
 }
 return VAR_9;
}
