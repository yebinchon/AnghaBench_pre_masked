
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u32 ;
typedef enum dvbs2_mod_cod { ____Placeholder_dvbs2_mod_cod } dvbs2_mod_cod ;
typedef enum dvbs2_fectype { ____Placeholder_dvbs2_fectype } dvbs2_fectype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(enum dvbs2_mod_cod VAR_3, enum dvbs2_fectype VAR_4)
{
 static const u32 VAR_5[][2] = {
  { 0, 0},
  {16200, 3240},
  {21600, 5400},
  {25920, 6480},
  {32400, 7200},
  {38880, 9720},
  {43200, 10800},
  {48600, 11880},
  {51840, 12600},
  {54000, 13320},
  {57600, 14400},
  {58320, 16000},
  {43200, 9720},
  {48600, 10800},
  {51840, 11880},
  {54000, 13320},
  {57600, 14400},
  {58320, 16000},
  {43200, 10800},
  {48600, 11880},
  {51840, 12600},
  {54000, 13320},
  {57600, 14400},
  {58320, 16000},
  {48600, 11880},
  {51840, 12600},
  {54000, 13320},
  {57600, 14400},
  {58320, 16000},
 };

 if (VAR_3 >= VAR_2 &&
     VAR_3 <= VAR_1 && VAR_4 <= VAR_0)
  return VAR_5[VAR_3][VAR_4];
 return 64800;
}
