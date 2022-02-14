
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* id; } ;
typedef TYPE_1__ git_oid ;
typedef int git_hash_ctx ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(git_oid *VAR_1, git_hash_ctx *VAR_2)
{
 git_oid VAR_3;
 unsigned short VAR_4 = 0;
 int VAR_5, VAR_6;

 if ((VAR_5 = FUNC_0(&VAR_3, VAR_2)) < 0 ||
     (VAR_5 = FUNC_1(VAR_2)) < 0)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 += VAR_1->id[VAR_6] + VAR_3.id[VAR_6];
  VAR_1->id[VAR_6] = (unsigned char)VAR_4;
  VAR_4 >>= 8;
 }

 return 0;
}
