
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvfsconf {char* vfc_name; char* vfc_typenum; char* vfc_refcount; int vfc_flags; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct xvfsconf*) ;
 scalar_t__ FUNC_5 (char*,struct xvfsconf*) ;
 struct xvfsconf* FUNC_6 (size_t) ;
 int FUNC_7 (char*,char*,char*,char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (char*,struct xvfsconf*,size_t*,int *,int ) ;
 int FUNC_9 (char*,char*) ;

int
FUNC_10(int VAR_4, char **VAR_5)
{
  int VAR_6, VAR_7 = 0, VAR_8;
  struct xvfsconf VAR_9, *VAR_10;
  size_t VAR_11;
  VAR_4--, VAR_5++;

  FUNC_7(VAR_2, "Filesystem", "Num", "Refs", "Flags");
  FUNC_3(VAR_0, VAR_3);

  if(VAR_4) {
    for(; VAR_4; VAR_4--, VAR_5++) {
      if (FUNC_5(*VAR_5, &VAR_9) == 0) {
        FUNC_7(VAR_1, VAR_9.vfc_name, VAR_9.vfc_typenum, VAR_9.vfc_refcount,
     FUNC_2(VAR_9.vfc_flags));
      } else {
 FUNC_9("VFS %s unknown or not loaded", *VAR_5);
        VAR_7++;
      }
    }
  } else {
    if (FUNC_8("vfs.conflist", ((void*)0), &VAR_11, ((void*)0), 0) < 0)
      FUNC_0(1, "sysctl(vfs.conflist)");
    VAR_10 = FUNC_6(VAR_11);
    if (VAR_10 == ((void*)0))
      FUNC_1(1, "malloc failed");
    if (FUNC_8("vfs.conflist", VAR_10, &VAR_11, ((void*)0), 0) < 0)
      FUNC_0(1, "sysctl(vfs.conflist)");
    VAR_6 = VAR_11 / sizeof(struct xvfsconf);

    for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
      FUNC_7(VAR_1, VAR_10[VAR_8].vfc_name, VAR_10[VAR_8].vfc_typenum,
     VAR_10[VAR_8].vfc_refcount, FUNC_2(VAR_10[VAR_8].vfc_flags));
    }
    FUNC_4(VAR_10);
  }

  return VAR_7;
}
