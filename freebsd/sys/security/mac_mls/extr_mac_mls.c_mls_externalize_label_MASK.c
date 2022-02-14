
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct mac_mls {int dummy; } ;
struct label {int dummy; } ;


 int MAC_MLS_LABEL_NAME ;
 struct mac_mls* SLOT (struct label*) ;
 int mls_to_string (struct sbuf*,struct mac_mls*) ;
 scalar_t__ strcmp (int ,char*) ;

__attribute__((used)) static int
mls_externalize_label(struct label *label, char *element_name,
    struct sbuf *sb, int *claimed)
{
 struct mac_mls *mm;

 if (strcmp(MAC_MLS_LABEL_NAME, element_name) != 0)
  return (0);

 (*claimed)++;

 mm = SLOT(label);

 return (mls_to_string(sb, mm));
}
