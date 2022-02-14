
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_off_t ;
typedef int git_object_t ;
typedef int git_hash_ctx ;
typedef int buffer ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (size_t*,char*,int,size_t,int ) ;

__attribute__((used)) static int FUNC_2(git_hash_ctx *VAR_0, git_off_t VAR_1, git_object_t VAR_2)
{
 char VAR_3[64];
 size_t VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_1(&VAR_4,
  VAR_3, sizeof(VAR_3), (size_t)VAR_1, VAR_2)) < 0)
  return VAR_5;

 return FUNC_0(VAR_0, VAR_3, VAR_4);
}
