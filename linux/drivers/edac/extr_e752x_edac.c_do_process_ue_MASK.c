
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {scalar_t__ pvt_info; } ;
struct e752x_pvt {scalar_t__ mc_symmetric; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mem_ctl_info*,int) ;
 int FUNC_2 (int ,struct mem_ctl_info*,int,int,int ,int ,int,int,int,char*,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mem_ctl_info *VAR_2, u16 VAR_3,
   u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;
 struct e752x_pvt *VAR_9 = (struct e752x_pvt *)VAR_2->pvt_info;

 FUNC_0(3, "\n");

 if (VAR_3 & 0x0202) {
  VAR_6 = VAR_4;


  VAR_7 = VAR_6 >> (VAR_1 - 4);

  VAR_8 = VAR_9->mc_symmetric ?

   ((VAR_7 >> 1) & 3) :
   FUNC_1(VAR_2, VAR_7);


  FUNC_2(VAR_0, VAR_2, 1,
     VAR_7,
     FUNC_3(VAR_6 << 4), 0,
      VAR_8, -1, -1,
     "e752x UE from Read", "");

 }
 if (VAR_3 & 0x0404) {
  VAR_6 = VAR_5;


  VAR_7 = VAR_6 >> (VAR_1 - 4);

  VAR_8 = VAR_9->mc_symmetric ?

   ((VAR_7 >> 1) & 3) :
   FUNC_1(VAR_2, VAR_7);


  FUNC_2(VAR_0, VAR_2, 1,
     VAR_7,
     FUNC_3(VAR_6 << 4), 0,
     VAR_8, -1, -1,
     "e752x UE from Scruber", "");
 }
}
