
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_link {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_link*,char*,int,unsigned int) ;
 unsigned int FUNC_1 (struct ata_link*,int,int ) ;

int FUNC_2(struct ata_link *VAR_3, int VAR_4, u32 VAR_5)
{
 unsigned int VAR_6;

 if (VAR_4 > VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_3, "failed to write SCR %d (Emask=0x%x)\n",
         VAR_4, VAR_6);
  return -VAR_1;
 }
 return 0;
}
