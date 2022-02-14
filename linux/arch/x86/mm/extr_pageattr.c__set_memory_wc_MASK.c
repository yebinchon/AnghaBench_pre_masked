
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long*,int,int ,int ) ;
 int FUNC_3 (unsigned long*,int,int ,int ,int ,int ,int *) ;

int FUNC_4(unsigned long VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_3, VAR_4,
       FUNC_1(VAR_1),
       0);
 if (!VAR_5) {
  VAR_5 = FUNC_3(&VAR_3, VAR_4,
            FUNC_1(VAR_2),
            FUNC_0(VAR_0),
            0, 0, ((void*)0));
 }
 return VAR_5;
}
