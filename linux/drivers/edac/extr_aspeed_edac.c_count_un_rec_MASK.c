
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mem_ctl_info {struct csrow_info** csrows; } ;
struct csrow_info {int first_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct mem_ctl_info*,int,int,int,int,int ,int ,int,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct mem_ctl_info *VAR_3, u8 VAR_4,
    u32 VAR_5)
{
 struct csrow_info *VAR_6 = VAR_3->csrows[0];
 u32 VAR_7, VAR_8, VAR_9;

 if (!VAR_4)
  return;



 VAR_7 = VAR_5 >> VAR_2;
 VAR_8 = VAR_5 & ~VAR_1;

 VAR_9 = 0;
 FUNC_0(VAR_0, VAR_3, 1,
        VAR_6->first_page + VAR_7, VAR_8, VAR_9,
        0, 0, -1, "", "");



 if (VAR_4 > 1) {

  VAR_7 = 0;
  VAR_8 = 0;
  VAR_9 = 0;
  FUNC_0(VAR_0, VAR_3, VAR_4-1,
         VAR_7, VAR_8, VAR_9, 0, 0, -1,
         "address(es) not available", "");
 }
}
