
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_info_component {int build_time; int build_date; int version; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

void
FUNC_1(struct mfi_info_component *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->name);
 if (VAR_1 < VAR_5)
  VAR_1 = VAR_5;
 VAR_5 = FUNC_0(VAR_4->version);
 if (VAR_3 < VAR_5)
  VAR_3 = VAR_5;
 VAR_5 = FUNC_0(VAR_4->build_date);
 if (VAR_0 < VAR_5)
  VAR_0 = VAR_5;
 VAR_5 = FUNC_0(VAR_4->build_time);
 if (VAR_2 < VAR_5)
  VAR_2 = VAR_5;
}
