
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_lomac {int ml_flags; int ml_rangehigh; int ml_rangelow; int ml_auxsingle; int ml_single; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mac_lomac*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct mac_lomac*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static int
FUNC_5(struct mac_lomac *VAR_4, char *VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11,
     *VAR_12;
 int VAR_13;


 VAR_10 = VAR_5;
 VAR_6 = FUNC_4(VAR_5, '(');
 if (VAR_6 == VAR_10)
  VAR_10 = ((void*)0);
 VAR_11 = FUNC_4(VAR_5, '[');
 if (VAR_11 == VAR_10)
  VAR_10 = ((void*)0);
 if (VAR_6 != ((void*)0) && VAR_11 != ((void*)0))
  return (VAR_0);
 VAR_9 = VAR_8 = ((void*)0);
 if (VAR_6 != ((void*)0)) {

  *VAR_6 = '\0';
  VAR_6++;
  VAR_9 = VAR_6;
  VAR_8 = FUNC_4(VAR_9, '-');
  if (VAR_8 == ((void*)0))
   return (VAR_0);
  VAR_8++;
  if (*VAR_9 == '\0' || *VAR_8 == '\0')
   return (VAR_0);
  VAR_7 = FUNC_4(VAR_8, ')');
  if (VAR_7 == ((void*)0))
   return (VAR_0);
  if (*(VAR_7 + 1) != '\0')
   return (VAR_0);

  *(VAR_8 - 1) = '\0';
  *VAR_7 = '\0';
 }
 FUNC_0((VAR_9 != ((void*)0) && VAR_8 != ((void*)0)) ||
     (VAR_9 == ((void*)0) && VAR_8 == ((void*)0)),
     ("lomac_internalize_label: range mismatch"));
 if (VAR_11 != ((void*)0)) {

  *VAR_11 = '\0';
  VAR_11++;
  VAR_12 = FUNC_4(VAR_11, ']');
  if (VAR_12 == ((void*)0))
   return (VAR_0);
  if (*(VAR_12 + 1) != '\0')
   return (VAR_0);

  *VAR_12 = '\0';
 }

 FUNC_1(VAR_4, sizeof(*VAR_4));
 if (VAR_10 != ((void*)0)) {
  VAR_13 = FUNC_2(&VAR_4->ml_single, VAR_10);
  if (VAR_13)
   return (VAR_13);
  VAR_4->ml_flags |= VAR_3;
 }

 if (VAR_11 != ((void*)0)) {
  VAR_13 = FUNC_2(&VAR_4->ml_auxsingle, VAR_11);
  if (VAR_13)
   return (VAR_13);
  VAR_4->ml_flags |= VAR_1;
 }

 if (VAR_9 != ((void*)0)) {
  VAR_13 = FUNC_2(&VAR_4->ml_rangelow, VAR_9);
  if (VAR_13)
   return (VAR_13);
  VAR_13 = FUNC_2(&VAR_4->ml_rangehigh, VAR_8);
  if (VAR_13)
   return (VAR_13);
  VAR_4->ml_flags |= VAR_2;
 }

 VAR_13 = FUNC_3(VAR_4);
 if (VAR_13)
  return (VAR_13);

 return (0);
}
