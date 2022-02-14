
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_biba {int mb_flags; int mb_rangehigh; int mb_rangelow; int mb_effective; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct mac_biba*) ;
 int FUNC_3 (struct mac_biba*,int) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static int
FUNC_5(struct mac_biba *VAR_3, char *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(&VAR_4, "(");
 if (*VAR_7 == '\0')
  VAR_7 = ((void*)0);

 if (VAR_4 != ((void*)0)) {
  VAR_6 = FUNC_4(&VAR_4, "-");
  if (VAR_4 == ((void*)0))
   return (VAR_0);
  VAR_5 = FUNC_4(&VAR_4, ")");
  if (VAR_4 == ((void*)0))
   return (VAR_0);
  if (*VAR_4 != '\0')
   return (VAR_0);
 } else {
  VAR_6 = ((void*)0);
  VAR_5 = ((void*)0);
 }

 FUNC_0((VAR_6 != ((void*)0) && VAR_5 != ((void*)0)) ||
     (VAR_6 == ((void*)0) && VAR_5 == ((void*)0)),
     ("biba_parse: range mismatch"));

 FUNC_3(VAR_3, sizeof(*VAR_3));
 if (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_1(&VAR_3->mb_effective, VAR_7);
  if (VAR_8)
   return (VAR_8);
  VAR_3->mb_flags |= VAR_1;
 }

 if (VAR_6 != ((void*)0)) {
  VAR_8 = FUNC_1(&VAR_3->mb_rangelow, VAR_6);
  if (VAR_8)
   return (VAR_8);
  VAR_8 = FUNC_1(&VAR_3->mb_rangehigh, VAR_5);
  if (VAR_8)
   return (VAR_8);
  VAR_3->mb_flags |= VAR_2;
 }

 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8)
  return (VAR_8);

 return (0);
}
