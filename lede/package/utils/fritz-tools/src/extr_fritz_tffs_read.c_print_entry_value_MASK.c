
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tffs_entry {int* val; int header; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(const struct tffs_entry *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1->header); VAR_2++)
  FUNC_0(VAR_0, "%c", VAR_1->val[VAR_2]);
}
