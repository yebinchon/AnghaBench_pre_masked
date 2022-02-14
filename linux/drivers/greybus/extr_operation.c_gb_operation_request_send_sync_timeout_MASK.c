
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_operation {int completion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gb_operation*,int ) ;
 int FUNC_1 (struct gb_operation*,int ,unsigned int,int ) ;
 int FUNC_2 (struct gb_operation*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

int FUNC_4(struct gb_operation *VAR_3,
        unsigned int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2,
     VAR_4, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(&VAR_3->completion);
 if (VAR_5 < 0) {

  FUNC_0(VAR_3, -VAR_0);
 }

 return FUNC_2(VAR_3);
}
