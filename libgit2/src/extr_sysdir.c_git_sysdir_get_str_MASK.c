
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_sysdir_t ;
struct TYPE_4__ {size_t size; } ;
typedef TYPE_1__ git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,size_t,TYPE_1__ const*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__ const**,int ) ;

int FUNC_5(
 char *VAR_2,
 size_t VAR_3,
 git_sysdir_t VAR_4)
{
 const git_buf *VAR_5 = ((void*)0);

 FUNC_0(FUNC_3(VAR_4));
 FUNC_0(FUNC_4(&VAR_5, VAR_4));

 if (!VAR_2 || VAR_5->size >= VAR_3) {
  FUNC_2(VAR_1, "buffer is too short for the path");
  return VAR_0;
 }

 FUNC_1(VAR_2, VAR_3, VAR_5);
 return 0;
}
