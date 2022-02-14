
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_off_t ;
struct TYPE_4__ {size_t len; int * fmh; int * data; } ;
typedef TYPE_1__ git_map ;
typedef int * HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,size_t,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * FUNC_3 (int *,int,int,int,size_t) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*) ;

int FUNC_8(git_map *VAR_11, size_t VAR_12, int VAR_13, int VAR_14, int VAR_15, git_off_t VAR_16)
{
 HANDLE VAR_17 = (HANDLE)FUNC_4(VAR_15);
 DWORD VAR_18 = FUNC_6();
 DWORD VAR_19 = 0;
 DWORD VAR_20 = 0;
 DWORD VAR_21 = 0;
 DWORD VAR_22 = 0;
 git_off_t VAR_23;
 git_off_t VAR_24;

 FUNC_2(VAR_11, VAR_12, VAR_13, VAR_14);

 VAR_11->data = ((void*)0);
 VAR_11->len = 0;
 VAR_11->fmh = ((void*)0);

 if (VAR_17 == VAR_7) {
  VAR_10 = VAR_0;
  FUNC_7(VAR_4, "failed to mmap. Invalid handle value");
  return -1;
 }

 if (VAR_13 & VAR_6)
  VAR_19 |= VAR_9;
 else if (VAR_13 & VAR_5)
  VAR_19 |= VAR_8;

 if (VAR_13 & VAR_6)
  VAR_20 |= VAR_3;
 if (VAR_13 & VAR_5)
  VAR_20 |= VAR_2;

 VAR_23 = (VAR_16 / VAR_18) * VAR_18;
 VAR_24 = VAR_16 - VAR_23;

 if (VAR_24 != 0) {
  VAR_10 = VAR_1;
  FUNC_7(VAR_4, "failed to mmap. Offset must be multiple of allocation granularity");
  return -1;
 }

 VAR_11->fmh = FUNC_1(VAR_17, ((void*)0), VAR_19, 0, 0, ((void*)0));
 if (!VAR_11->fmh || VAR_11->fmh == VAR_7) {
  FUNC_7(VAR_4, "failed to mmap. Invalid handle value");
  VAR_11->fmh = ((void*)0);
  return -1;
 }

 FUNC_5(sizeof(git_off_t) == 8);

 VAR_21 = (DWORD)(VAR_23);
 VAR_22 = (DWORD)(VAR_23 >> 32);
 VAR_11->data = FUNC_3(VAR_11->fmh, VAR_20, VAR_22, VAR_21, VAR_12);
 if (!VAR_11->data) {
  FUNC_7(VAR_4, "failed to mmap. No data written");
  FUNC_0(VAR_11->fmh);
  VAR_11->fmh = ((void*)0);
  return -1;
 }
 VAR_11->len = VAR_12;

 return 0;
}
