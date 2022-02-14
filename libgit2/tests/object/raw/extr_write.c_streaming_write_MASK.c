
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; int type; } ;
typedef TYPE_1__ git_rawobj ;
typedef int git_oid ;
typedef int git_odb_stream ;
typedef int git_odb ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **,int *,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(git_oid *VAR_0, git_odb *VAR_1, git_rawobj *VAR_2)
{
   git_odb_stream *VAR_3;
   int VAR_4;

   FUNC_0(FUNC_1(&VAR_3, VAR_1, VAR_2->len, VAR_2->type));
   FUNC_4(VAR_3, VAR_2->data, VAR_2->len);
   VAR_4 = FUNC_2(VAR_0, VAR_3);
   FUNC_3(VAR_3);
   FUNC_0(VAR_4);
}
