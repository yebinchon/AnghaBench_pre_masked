
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smbios_entry_point {int eplen; int major; int minor; int bcdrev; int staddr; int ianchor; scalar_t__ revision; int eanchor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct smbios_entry_point*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct smbios_entry_point *VAR_4, uint32_t VAR_5)
{
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 FUNC_1(VAR_4->eanchor, VAR_0,
     VAR_1);
 VAR_4->eplen = 0x1F;
 FUNC_0(sizeof (struct smbios_entry_point) == VAR_4->eplen);
 VAR_4->major = 2;
 VAR_4->minor = 6;
 VAR_4->revision = 0;
 FUNC_1(VAR_4->ianchor, VAR_2,
     VAR_3);
 VAR_4->staddr = VAR_5;
 VAR_4->bcdrev = 0x24;
}
