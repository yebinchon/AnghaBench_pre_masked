
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(struct pp_hwmgr *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5->device, VAR_0,
   VAR_1, VAR_2);


 if (VAR_6 & 0x200)
  VAR_6 = VAR_4;
 else
  VAR_6 = VAR_6 & 0x1ff;

 VAR_6 *= VAR_3;

 return VAR_6;
}
