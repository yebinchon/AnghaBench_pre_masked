
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vattr {size_t va_size; } ;
struct nameidata {int ni_vp; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct vattr*,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (size_t,int ,int ) ;
 int FUNC_4 (char*,struct nameidata*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,size_t,unsigned char*) ;
 int FUNC_7 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_8 (int ,int ,char*,size_t,size_t,int ,int ,int ,int ,size_t*,TYPE_1__*) ;

__attribute__((used)) static char*
FUNC_9(char *VAR_8, unsigned char *VAR_9)
{
 struct nameidata VAR_10;
 struct vattr VAR_11;
 char *VAR_12;
 ssize_t VAR_13, VAR_14;
 int VAR_15;

 VAR_12 = ((void*)0);
 VAR_13 = 0;

 VAR_15 = FUNC_4(VAR_8, &VAR_10);
 if (VAR_15 != 0)
  goto fail;

 VAR_15 = FUNC_0(VAR_10.ni_vp, &VAR_11, VAR_7->td_ucred);
 if (VAR_15 != 0)
  goto fail;

 VAR_12 = (char *)FUNC_3(VAR_11.va_size + 1, VAR_2, VAR_3);

 while (VAR_13 < VAR_11.va_size) {
  VAR_15 = FUNC_8(
      VAR_5, VAR_10.ni_vp, VAR_12,
      VAR_11.va_size - VAR_13, VAR_13,
      VAR_6, VAR_1,
      VAR_7->td_ucred, VAR_4, &VAR_14, VAR_7);
  if (VAR_15 != 0)
   goto fail;

  VAR_13 = VAR_11.va_size - VAR_14;
 }

 VAR_12[VAR_13] = '\0';

 FUNC_1(VAR_10.ni_vp, 0);
 (void)FUNC_7(VAR_10.ni_vp, VAR_0, VAR_7->td_ucred, VAR_7);




 if (FUNC_6(VAR_12, VAR_11.va_size, VAR_9))
  FUNC_5("Manifest hash doesn't match expected value!");

 return (VAR_12);

fail:
 if (VAR_12 != ((void*)0))
  FUNC_2(VAR_12, VAR_2);

 return (((void*)0));
}
