
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ hexsz; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,scalar_t__) ;
 char* FUNC_1 (struct object_id*) ;
 int FUNC_2 (char*,char*,char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(int VAR_2, struct object_id *VAR_3, struct object_id *VAR_4)
{
 char VAR_5[VAR_0 + 1];

 if (!VAR_2)
  return;

 FUNC_0(VAR_5, FUNC_1(VAR_3), VAR_1->hexsz + 1);
 FUNC_2("%s %s\n", FUNC_1(VAR_4), VAR_5);
}
