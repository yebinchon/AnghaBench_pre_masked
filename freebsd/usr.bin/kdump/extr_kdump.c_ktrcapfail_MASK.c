
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktr_cap_fail {int cap_type; int cap_held; int cap_needed; } ;






 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(struct ktr_cap_fail *VAR_1)
{
 switch (VAR_1->cap_type) {
 case 129:

  FUNC_0("operation requires ");
  FUNC_1(VAR_0, &VAR_1->cap_needed);
  FUNC_0(", descriptor holds ");
  FUNC_1(VAR_0, &VAR_1->cap_held);
  break;
 case 131:

  FUNC_0("attempt to increase capabilities from ");
  FUNC_1(VAR_0, &VAR_1->cap_held);
  FUNC_0(" to ");
  FUNC_1(VAR_0, &VAR_1->cap_needed);
  break;
 case 128:

  FUNC_0("disallowed system call");
  break;
 case 130:

  FUNC_0("restricted VFS lookup");
  break;
 default:
  FUNC_0("unknown capability failure: ");
  FUNC_1(VAR_0, &VAR_1->cap_needed);
  FUNC_0(" ");
  FUNC_1(VAR_0, &VAR_1->cap_held);
  break;
 }
 FUNC_0("\n");
}
