
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwbc {int dummy; } ;
struct dcn20_dwbc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct dcn20_dwbc* FUNC_1 (struct dwbc*) ;
 int VAR_2 ;

bool FUNC_2(struct dwbc *VAR_3)
{
 struct dcn20_dwbc *VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;

 FUNC_0(VAR_2, VAR_2, &VAR_5);
 FUNC_0(VAR_1, VAR_0, &VAR_6);

 return ((VAR_5 != 0) && (VAR_6 != 0));
}
