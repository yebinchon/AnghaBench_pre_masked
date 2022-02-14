
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oid_array {int sorted; int nr; int oid; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct oid_array *VAR_1)
{
 FUNC_0(VAR_1->oid, VAR_1->nr, VAR_0);
 VAR_1->sorted = 1;
}
