
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userent {int ue_uid; } ;



int
FUNC_0(struct userent *VAR_0, struct userent *VAR_1)
{
 return (VAR_0->ue_uid - VAR_1->ue_uid);
}
