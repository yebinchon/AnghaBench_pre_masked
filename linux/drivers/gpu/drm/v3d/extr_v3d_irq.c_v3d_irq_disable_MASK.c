
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_dev {int cores; int overflow_mem_work; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct v3d_dev *VAR_6)
{
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_6->cores; VAR_7++)
  FUNC_0(VAR_7, VAR_2, ~0);
 FUNC_1(VAR_4, ~0);


 for (VAR_7 = 0; VAR_7 < VAR_6->cores; VAR_7++)
  FUNC_0(VAR_7, VAR_1, VAR_0);
 FUNC_1(VAR_3, VAR_5);

 FUNC_2(&VAR_6->overflow_mem_work);
}
