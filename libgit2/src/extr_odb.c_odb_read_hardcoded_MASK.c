
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int data; scalar_t__ len; int type; } ;
typedef TYPE_1__ git_rawobj ;
typedef int git_oid ;
typedef int git_object_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static int FUNC_3(bool *VAR_1, git_rawobj *VAR_2, const git_oid *VAR_3)
{
 git_object_t VAR_4;

 *VAR_1 = 0;

 if ((VAR_4 = FUNC_2(VAR_3)) == VAR_0)
  return 0;

 VAR_2->type = VAR_4;
 VAR_2->len = 0;
 VAR_2->data = FUNC_1(1, sizeof(uint8_t));
 FUNC_0(VAR_2->data);

 *VAR_1 = 1;
 return 0;
}
