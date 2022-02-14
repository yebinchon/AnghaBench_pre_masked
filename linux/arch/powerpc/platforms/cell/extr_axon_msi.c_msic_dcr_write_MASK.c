
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct axon_msic {int dcr_host; } ;


 int FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 (char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct axon_msic *VAR_0, unsigned int VAR_1, u32 VAR_2)
{
 FUNC_1("axon_msi: dcr_write(0x%x, 0x%x)\n", VAR_2, VAR_1);

 FUNC_0(VAR_0->dcr_host, VAR_1, VAR_2);
}
