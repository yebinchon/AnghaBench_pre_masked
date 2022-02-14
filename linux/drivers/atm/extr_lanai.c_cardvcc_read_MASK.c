
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lanai_vcc {int vci; int * vbase; } ;
typedef enum lanai_vcc_offset { ____Placeholder_lanai_vcc_offset } lanai_vcc_offset ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline u32 FUNC_3(const struct lanai_vcc *VAR_0,
 enum lanai_vcc_offset VAR_1)
{
 u32 VAR_2;
 FUNC_0(VAR_0->vbase != ((void*)0), "cardvcc_read: unbound vcc!\n");
 VAR_2= FUNC_2(VAR_0->vbase + VAR_1);
 FUNC_1("VR vci=%04d 0x%02X = 0x%08X\n",
     VAR_0->vci, (int) VAR_1, VAR_2);
 return VAR_2;
}
