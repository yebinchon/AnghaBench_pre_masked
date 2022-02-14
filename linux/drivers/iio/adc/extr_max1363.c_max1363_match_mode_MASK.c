
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1363_mode {int modemask; } ;
struct max1363_chip_info {int num_modes; size_t* mode_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long const*,int ,int ) ;
 struct max1363_mode const* VAR_1 ;

__attribute__((used)) static const struct max1363_mode
*FUNC_1(const unsigned long *VAR_2,
 const struct max1363_chip_info *VAR_3)
{
 int VAR_4;
 if (VAR_2)
  for (VAR_4 = 0; VAR_4 < VAR_3->num_modes; VAR_4++)
   if (FUNC_0(VAR_2,
       VAR_1[VAR_3->mode_list[VAR_4]].
       modemask,
       VAR_0))
    return &VAR_1[VAR_3->mode_list[VAR_4]];
 return ((void*)0);
}
