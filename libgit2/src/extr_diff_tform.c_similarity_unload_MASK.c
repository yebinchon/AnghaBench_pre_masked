
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; scalar_t__ blob; scalar_t__ odb_obj; } ;
typedef TYPE_1__ similarity_info ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(similarity_info *VAR_0)
{
 if (VAR_0->odb_obj)
  FUNC_2(VAR_0->odb_obj);

 if (VAR_0->blob)
  FUNC_0(VAR_0->blob);
 else
  FUNC_1(&VAR_0->data);
}
