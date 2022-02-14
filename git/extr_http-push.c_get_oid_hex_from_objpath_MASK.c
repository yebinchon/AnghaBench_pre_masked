
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {scalar_t__ hash; } ;
struct TYPE_2__ {scalar_t__ hexsz; int rawsz; } ;


 int FUNC_0 (scalar_t__,char const*,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, struct object_id *VAR_2)
{
 if (FUNC_1(VAR_1) != VAR_0->hexsz + 1)
  return -1;

 if (FUNC_0(VAR_2->hash, VAR_1, 1))
  return -1;
 VAR_1 += 2;
 VAR_1++;

 return FUNC_0(VAR_2->hash + 1, VAR_1, VAR_0->rawsz - 1);
}
