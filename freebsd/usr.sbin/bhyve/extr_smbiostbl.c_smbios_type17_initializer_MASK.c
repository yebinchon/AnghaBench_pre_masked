
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct smbios_table_type17 {scalar_t__ xsize; void* arrayhand; } ;
struct smbios_structure {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct smbios_structure*,char const**,char*,char**,int *,int *) ;
 void* VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct smbios_structure *VAR_3,
    const char **VAR_4, char *VAR_5, char **VAR_6,
    uint16_t *VAR_7, uint16_t *VAR_8)
{
 struct smbios_table_type17 *VAR_9;

 FUNC_0(VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7, VAR_8);
 VAR_9 = (struct smbios_table_type17 *)VAR_5;
 VAR_9->arrayhand = VAR_2;
 VAR_9->xsize = VAR_1;

 if (VAR_0 > 0) {
  VAR_5 = *VAR_6;
  FUNC_0(VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7, VAR_8);
  VAR_9 = (struct smbios_table_type17 *)VAR_5;
  VAR_9->arrayhand = VAR_2;
  VAR_9->xsize = VAR_0;
 }

 return (0);
}
