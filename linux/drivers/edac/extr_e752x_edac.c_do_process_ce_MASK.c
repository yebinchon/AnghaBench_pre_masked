
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {scalar_t__ pvt_info; } ;
struct e752x_pvt {int* map; scalar_t__ mc_symmetric; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mem_ctl_info*,int ,char*,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct mem_ctl_info*,int) ;
 int FUNC_4 (int ,struct mem_ctl_info*,int,int,int ,int,int,int,int,char*,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_3, u16 VAR_4,
   u32 VAR_5, u16 VAR_6)
{
 u32 VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 struct e752x_pvt *VAR_11 = (struct e752x_pvt *)VAR_3->pvt_info;

 FUNC_2(3, "\n");


 VAR_7 = VAR_5 >> (VAR_2 - 4);


 if (VAR_11->mc_symmetric) {

  VAR_8 = ((VAR_7 >> 1) & 3);
  FUNC_1(VAR_1,
   "Test row %d Table %d %d %d %d %d %d %d %d\n", VAR_8,
   VAR_11->map[0], VAR_11->map[1], VAR_11->map[2], VAR_11->map[3],
   VAR_11->map[4], VAR_11->map[5], VAR_11->map[6],
   VAR_11->map[7]);


  for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
   if (VAR_11->map[VAR_10] == VAR_8)
    break;
  }

  FUNC_1(VAR_1, "Test computed row %d\n", VAR_10);

  if (VAR_10 < 8)
   VAR_8 = VAR_10;
  else
   FUNC_0(VAR_3, VAR_1,
     "row %d not found in remap table\n",
     VAR_8);
 } else
  VAR_8 = FUNC_3(VAR_3, VAR_7);


 VAR_9 = !(VAR_4 & 1);


 FUNC_4(VAR_0, VAR_3, 1,
        VAR_7, FUNC_5(VAR_5 << 4), VAR_6,
        VAR_8, VAR_9, -1,
        "e752x CE", "");
}
