
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {int hexsz; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct object_id*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, struct object_id *VAR_3)
{
 char VAR_4[VAR_0];
 int VAR_5 = 0;
 while (*VAR_2 && VAR_5 < VAR_1->hexsz) {
  if (*VAR_2 != '/')
   VAR_4[VAR_5++] = *VAR_2;
  VAR_2++;
 }
 if (*VAR_2 || VAR_5 != VAR_1->hexsz)
  return -1;
 return FUNC_0(VAR_4, VAR_3);
}
