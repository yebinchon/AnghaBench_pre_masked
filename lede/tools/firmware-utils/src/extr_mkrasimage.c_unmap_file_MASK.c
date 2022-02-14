
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int name; int size; int data; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct file_info *VAR_1)
{
    if(FUNC_2(VAR_1->data, VAR_1->size) == -1) {
        FUNC_0("Error unmapping file %s.", VAR_1->name);
        FUNC_1(VAR_0);
    }
}
