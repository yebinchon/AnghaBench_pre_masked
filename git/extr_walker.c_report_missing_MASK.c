
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int oid; scalar_t__ type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int VAR_1 ;
 char* FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(const struct object *VAR_2)
{
 FUNC_0(VAR_1, "Cannot obtain needed %s %s\n",
  VAR_2->type ? FUNC_3(VAR_2->type): "object",
  FUNC_2(&VAR_2->oid));
 if (!FUNC_1(&VAR_0))
  FUNC_0(VAR_1, "while processing commit %s.\n",
   FUNC_2(&VAR_0));
}
