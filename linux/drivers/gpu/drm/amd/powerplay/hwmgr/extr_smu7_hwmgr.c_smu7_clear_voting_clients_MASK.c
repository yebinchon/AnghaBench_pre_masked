
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_5)
{
 int VAR_6;


 FUNC_0(VAR_5->device, VAR_0,
   VAR_3, VAR_2, 1);
 FUNC_0(VAR_5->device, VAR_0,
   VAR_3, VAR_1, 1);

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  FUNC_1(VAR_5->device, VAR_0,
    VAR_4 + VAR_6 * 4, 0);

 return 0;
}
