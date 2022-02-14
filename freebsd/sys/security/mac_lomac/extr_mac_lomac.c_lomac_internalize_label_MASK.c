
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac {int dummy; } ;
struct label {int dummy; } ;


 int MAC_LOMAC_LABEL_NAME ;
 struct mac_lomac* SLOT (struct label*) ;
 int lomac_parse (struct mac_lomac*,char*) ;
 scalar_t__ strcmp (int ,char*) ;

__attribute__((used)) static int
lomac_internalize_label(struct label *label, char *element_name,
    char *element_data, int *claimed)
{
 struct mac_lomac *ml, ml_temp;
 int error;

 if (strcmp(MAC_LOMAC_LABEL_NAME, element_name) != 0)
  return (0);

 (*claimed)++;

 error = lomac_parse(&ml_temp, element_data);
 if (error)
  return (error);

 ml = SLOT(label);
 *ml = ml_temp;

 return (0);
}
