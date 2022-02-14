
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry_number; } ;
typedef TYPE_1__ user_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,unsigned long) ;

int FUNC_1(user_desc_t *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2->entry_number,
       (unsigned long) VAR_2);
 if (VAR_4 < 0)
  VAR_4 = -VAR_1;
 return VAR_4;
}
