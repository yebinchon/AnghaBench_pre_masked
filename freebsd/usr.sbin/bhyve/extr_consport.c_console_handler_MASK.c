
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmctx {int dummy; } ;
typedef int cap_rights_t ;
typedef int cap_ioctl_t ;


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
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct vmctx *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14,
  uint32_t *VAR_15, void *VAR_16)
{
 static int VAR_17;

 cap_rights_t VAR_18;
 cap_ioctl_t VAR_19[] = { VAR_7, VAR_9, VAR_8 };


 if (VAR_14 == 2 && VAR_12) {
  *VAR_15 = VAR_0;
  return (0);
 }





 if (VAR_14 == 1 && VAR_12) {
  *VAR_15 = 0xff;
  return (0);
 }

 if (VAR_14 != 4)
  return (-1);

 if (!VAR_17) {

  FUNC_0(&VAR_18, VAR_1, VAR_2, VAR_3,
      VAR_4);
  if (FUNC_2(VAR_6, &VAR_18) == -1)
   FUNC_3(VAR_5, "Unable to apply rights for sandbox");
  if (FUNC_1(VAR_6, VAR_19, FUNC_4(VAR_19)) == -1)
   FUNC_3(VAR_5, "Unable to apply rights for sandbox");

  FUNC_5();
  VAR_17 = 1;
 }

 if (VAR_12)
  *VAR_15 = FUNC_6();
 else
  FUNC_7(*VAR_15);

 return (0);
}
