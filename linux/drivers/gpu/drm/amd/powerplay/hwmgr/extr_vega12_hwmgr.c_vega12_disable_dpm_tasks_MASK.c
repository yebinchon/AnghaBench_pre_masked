
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0((VAR_1 == 0),
   "Failed to disable all smu features!", VAR_2 = VAR_1);

 return VAR_2;
}
