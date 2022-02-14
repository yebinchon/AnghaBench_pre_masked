
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct object_array {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct object_array*,int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(const struct object_array *VAR_4,
    struct object_array *VAR_5)
{
 uint32_t VAR_6 = VAR_1;

 if (!VAR_4->nr)
  return 0;

 return FUNC_0(VAR_5, VAR_2,
         VAR_0, VAR_3,
         VAR_6);
}
