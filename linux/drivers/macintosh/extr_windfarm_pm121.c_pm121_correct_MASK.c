
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm121_correction {int slope; scalar_t__ offset; } ;
typedef int s32 ;


 int VAR_0 ;
 struct pm121_correction** VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static s32 FUNC_1(s32 VAR_3,
    unsigned int VAR_4,
    s32 VAR_5)
{
 s32 VAR_6;
 struct pm121_correction *VAR_7;
 VAR_7 = &VAR_1[VAR_4][VAR_2 - 2];

 VAR_6 = (VAR_0 * VAR_7->slope) >> 16;
 VAR_6 += VAR_7->offset;
 VAR_6 = (VAR_6 >> 16) + VAR_5;

 return FUNC_0(VAR_3, VAR_6, 0);
}
