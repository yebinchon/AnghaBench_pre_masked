
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_mls_element {int mme_level; int mme_compartments; int mme_type; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char**,char*) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_4(struct mac_mls_element *VAR_7, char *VAR_8)
{
 char *VAR_9, *VAR_10, *VAR_11;
 int VAR_12;

 if (FUNC_1(VAR_8, "high") == 0 || FUNC_1(VAR_8, "hi") == 0) {
  VAR_7->mme_type = VAR_3;
  VAR_7->mme_level = VAR_6;
 } else if (FUNC_1(VAR_8, "low") == 0 || FUNC_1(VAR_8, "lo") == 0) {
  VAR_7->mme_type = VAR_5;
  VAR_7->mme_level = VAR_6;
 } else if (FUNC_1(VAR_8, "equal") == 0 ||
     FUNC_1(VAR_8, "eq") == 0) {
  VAR_7->mme_type = VAR_2;
  VAR_7->mme_level = VAR_6;
 } else {
  VAR_7->mme_type = VAR_4;




  VAR_11 = FUNC_2(&VAR_8, ":");
  VAR_12 = FUNC_3(VAR_11, &VAR_10, 10);
  if (VAR_10 == VAR_11 || *VAR_10 != '\0')
   return (VAR_0);
  if (VAR_12 < 0 || VAR_12 > 65535)
   return (VAR_0);
  VAR_7->mme_level = VAR_12;





  if (VAR_8 == ((void*)0))
   return (0);
  if (*VAR_8 == '\0')
   return (0);

  while ((VAR_9 = FUNC_2(&VAR_8, "+")) != ((void*)0)) {
   VAR_12 = FUNC_3(VAR_9, &VAR_10, 10);
   if (VAR_9 == VAR_10 || *VAR_10 != '\0')
    return (VAR_0);
   if (VAR_12 < 1 || VAR_12 > VAR_1)
    return (VAR_0);
   FUNC_0(VAR_12, VAR_7->mme_compartments);
  }
 }

 return (0);
}
