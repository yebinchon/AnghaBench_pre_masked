
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int * VAR_1 ;
 int FUNC_1 (struct fw_ohci*,char*,char const*,int ) ;
 int FUNC_2 (struct fw_ohci*,int ) ;

__attribute__((used)) static void FUNC_3(struct fw_ohci *VAR_2,
    const char *VAR_3, unsigned int VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_2, FUNC_0(VAR_4));
 if (VAR_5 & VAR_0)
  FUNC_1(VAR_2, "DMA context %s has stopped, error code: %s\n",
   VAR_3, VAR_1[VAR_5 & 0x1f]);
}
