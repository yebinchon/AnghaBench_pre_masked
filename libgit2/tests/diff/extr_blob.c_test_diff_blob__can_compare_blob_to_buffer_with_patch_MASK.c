
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_patch ;
typedef int git_oid ;
typedef int git_blob ;
struct TYPE_5__ {int status; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int *,char const*,int ,int *,TYPE_1__*) ;
 TYPE_2__* FUNC_8 (int *) ;
 int FUNC_9 (size_t*,size_t*,size_t*,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_12 (char const*) ;

void FUNC_13(void)
{
 git_patch *VAR_8;
 git_blob *VAR_9;
 git_oid VAR_10;
 const char *VAR_11 = "Hello from the root\n";
 const char *VAR_12 = "Hello from the root\n\nSome additional lines\n\nDown here below\n\n";
 size_t VAR_13, VAR_14, VAR_15;


 FUNC_2(FUNC_5(&VAR_10, "45141a79", 8));
 FUNC_2(FUNC_4(&VAR_9, VAR_6, &VAR_10, 8));


 FUNC_2(FUNC_7(
  &VAR_8, VAR_9, ((void*)0), VAR_12, FUNC_12(VAR_12), ((void*)0), &VAR_7));

 FUNC_0(VAR_8 != ((void*)0));
 FUNC_1(VAR_2, FUNC_8(VAR_8)->status);
 FUNC_1(1, (int)FUNC_10(VAR_8));
 FUNC_1(6, FUNC_11(VAR_8, 0));

 FUNC_2(FUNC_9(&VAR_13, &VAR_14, &VAR_15, VAR_8));
 FUNC_1(1, (int)VAR_13);
 FUNC_1(5, (int)VAR_14);
 FUNC_1(0, (int)VAR_15);

 FUNC_6(VAR_8);


 VAR_7.flags |= VAR_4;
 FUNC_2(FUNC_7(
  &VAR_8, VAR_9, ((void*)0), VAR_11, FUNC_12(VAR_11), ((void*)0), &VAR_7));
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_1(VAR_3, FUNC_8(VAR_8)->status);
 FUNC_1(0, (int)FUNC_10(VAR_8));
 FUNC_6(VAR_8);


 FUNC_2(FUNC_7(
  &VAR_8, ((void*)0), ((void*)0), VAR_11, FUNC_12(VAR_11), ((void*)0), &VAR_7));
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_1(VAR_0, FUNC_8(VAR_8)->status);
 FUNC_1(1, (int)FUNC_10(VAR_8));
 FUNC_1(1, FUNC_11(VAR_8, 0));
 FUNC_6(VAR_8);


 FUNC_2(FUNC_7(
  &VAR_8, VAR_9, ((void*)0), ((void*)0), 0, ((void*)0), &VAR_7));
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_1(VAR_1, FUNC_8(VAR_8)->status);
 FUNC_1(1, (int)FUNC_10(VAR_8));
 FUNC_1(1, FUNC_11(VAR_8, 0));
 FUNC_6(VAR_8);


 VAR_7.flags ^= VAR_5;

 FUNC_2(FUNC_7(
  &VAR_8, VAR_9, ((void*)0), ((void*)0), 0, ((void*)0), &VAR_7));
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_1(VAR_0, FUNC_8(VAR_8)->status);
 FUNC_1(1, (int)FUNC_10(VAR_8));
 FUNC_1(1, FUNC_11(VAR_8, 0));
 FUNC_6(VAR_8);

 FUNC_3(VAR_9);
}
