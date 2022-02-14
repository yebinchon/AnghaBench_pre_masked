
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct smbios_table_type4 {int socket; int cores; int threads; } ;
struct smbios_structure {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct smbios_structure*,char const**,char*,char**,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct smbios_structure *VAR_3,
    const char **VAR_4, char *VAR_5, char **VAR_6,
    uint16_t *VAR_7, uint16_t *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  struct smbios_table_type4 *VAR_10;
  char *VAR_11;
  int VAR_12, VAR_13;

  FUNC_0(VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7, VAR_8);
  VAR_10 = (struct smbios_table_type4 *)VAR_5;
  VAR_11 = VAR_5 + sizeof (struct smbios_table_type4);
  VAR_12 = 0;
  while (VAR_11 < *VAR_6 - 1) {
   if (*VAR_11++ == '\0')
    VAR_12++;
  }
  VAR_13 = FUNC_1(*VAR_6 - 1, "CPU #%d", VAR_9) + 1;
  *VAR_6 += VAR_13 - 1;
  *(*VAR_6) = '\0';
  (*VAR_6)++;
  VAR_10->socket = VAR_12 + 1;

  if (VAR_0 > 254)
   VAR_10->cores = 0;
  else
   VAR_10->cores = VAR_0;

  if ((VAR_0 * VAR_2) > 254)
   VAR_10->threads = 0;
  else
   VAR_10->threads = (VAR_0 * VAR_2);
  VAR_5 = *VAR_6;
 }

 return (0);
}
