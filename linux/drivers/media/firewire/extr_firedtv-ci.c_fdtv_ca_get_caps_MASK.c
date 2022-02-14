
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ca_caps {int slot_num; int descr_num; int descr_type; int slot_type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(void *VAR_2)
{
 struct ca_caps *VAR_3 = VAR_2;

 VAR_3->slot_num = 1;
 VAR_3->slot_type = VAR_0;
 VAR_3->descr_num = 1;
 VAR_3->descr_type = VAR_1;
 return 0;
}
