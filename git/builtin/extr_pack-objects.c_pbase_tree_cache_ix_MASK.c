
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int* hash; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct object_id *VAR_1)
{
 return VAR_1->hash[0] % FUNC_0(VAR_0);
}
