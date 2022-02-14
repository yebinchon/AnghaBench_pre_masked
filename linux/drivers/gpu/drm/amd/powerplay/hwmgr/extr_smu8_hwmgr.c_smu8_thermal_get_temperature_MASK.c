
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_6)
{
 int VAR_7 = 0;
 uint32_t VAR_8 = FUNC_1(VAR_6->device,
          VAR_0, VAR_5);
 uint32_t VAR_9 = FUNC_0(VAR_8, VAR_4, VAR_1);

 if (FUNC_0(VAR_8, VAR_4, VAR_2))
  VAR_7 = ((VAR_9 / 8) - 49) * VAR_3;
 else
  VAR_7 = (VAR_9 / 8) * VAR_3;

 return VAR_7;
}
