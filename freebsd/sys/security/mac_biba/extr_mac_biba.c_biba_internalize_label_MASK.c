
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_biba {int dummy; } ;
struct label {int dummy; } ;


 int MAC_BIBA_LABEL_NAME ;
 struct mac_biba* SLOT (struct label*) ;
 int biba_parse (struct mac_biba*,char*) ;
 scalar_t__ strcmp (int ,char*) ;

__attribute__((used)) static int
biba_internalize_label(struct label *label, char *element_name,
    char *element_data, int *claimed)
{
 struct mac_biba *mb, mb_temp;
 int error;

 if (strcmp(MAC_BIBA_LABEL_NAME, element_name) != 0)
  return (0);

 (*claimed)++;

 error = biba_parse(&mb_temp, element_data);
 if (error)
  return (error);

 mb = SLOT(label);
 *mb = mb_temp;

 return (0);
}
