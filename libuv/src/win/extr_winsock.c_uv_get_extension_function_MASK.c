
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guid ;
typedef int SOCKET ;
typedef int GUID ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *,int,void*,int,int *,int *,int *) ;

__attribute__((used)) static BOOL FUNC_1(SOCKET VAR_4, GUID VAR_5,
    void **VAR_6) {
  int VAR_7;
  DWORD VAR_8;

  VAR_7 = FUNC_0(VAR_4,
                    VAR_1,
                    &VAR_5,
                    sizeof(VAR_5),
                    (void*)VAR_6,
                    sizeof(*VAR_6),
                    &VAR_8,
                    ((void*)0),
                    ((void*)0));

  if (VAR_7 == VAR_2) {
    *VAR_6 = ((void*)0);
    return VAR_0;
  } else {
    return VAR_3;
  }
}
