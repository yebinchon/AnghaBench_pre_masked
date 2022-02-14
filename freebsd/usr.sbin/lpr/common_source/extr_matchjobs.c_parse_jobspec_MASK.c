
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jobspec_hdr {int dummy; } ;
struct jobspec {int startnum; int endrange; char* wantedhost; char* wanteduser; } ;


 int FUNC_0 (struct jobspec_hdr*,struct jobspec*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct jobspec*) ;
 scalar_t__ FUNC_2 (char) ;
 struct jobspec* FUNC_3 (int) ;
 int FUNC_4 (struct jobspec*,int ,int) ;
 int VAR_1 ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char**,int) ;

int
FUNC_8(char *VAR_2, struct jobspec_hdr *VAR_3)
{
 struct jobspec *VAR_4;
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;





 if ((VAR_2 == ((void*)0)) || (*VAR_2 == '\0'))
  return (0);

 VAR_4 = FUNC_3(sizeof(struct jobspec));
 FUNC_4(VAR_4, 0, sizeof(struct jobspec));
 VAR_4->startnum = VAR_4->endrange = -1;


 VAR_8 = ((void*)0);
 VAR_5 = FUNC_6(VAR_2, '@');
 VAR_6 = FUNC_6(VAR_2, ':');
 if (VAR_5 != ((void*)0))
  *VAR_5 = '\0';
 if (VAR_6 != ((void*)0))
  *VAR_6 = '\0';


 if (VAR_5 != ((void*)0)) {
  VAR_10 = VAR_5 + 1;
  if (*VAR_10 != '\0')
   VAR_4->wantedhost = VAR_10;
 }


 VAR_10 = ((void*)0);
 if (VAR_6 != ((void*)0)) {
  VAR_10 = VAR_6 + 1;
  if (*VAR_10 == '\0')
   VAR_10 = ((void*)0);
 }
 VAR_7 = ((void*)0);
 if (*VAR_2 != '\0')
  VAR_7 = VAR_2;
 if ((VAR_7 != ((void*)0)) && (VAR_10 != ((void*)0))) {
  if (FUNC_2(*VAR_7)) {
   if (FUNC_2(*VAR_10))
    goto bad_input;
   VAR_8 = VAR_7;
   VAR_4->wanteduser = VAR_10;
  } else if (FUNC_2(*VAR_10)) {
   VAR_8 = VAR_10;






   VAR_9 = FUNC_6(VAR_7, '.');
   if ((VAR_5 == ((void*)0)) && (VAR_9 != ((void*)0)))
    VAR_4->wantedhost = VAR_7;
   else
    VAR_4->wanteduser = VAR_7;
  } else {

   goto bad_input;
  }
 } else if (VAR_7 != ((void*)0)) {
  if (FUNC_2(*VAR_7))
   VAR_8 = VAR_7;
  else
   VAR_4->wanteduser = VAR_7;
 } else if (VAR_10 != ((void*)0)) {
  if (FUNC_2(*VAR_10))
   VAR_8 = VAR_10;
  else
   VAR_4->wanteduser = VAR_10;
 }





 if (VAR_8 != ((void*)0)) {
  VAR_0 = 0;
  VAR_11 = FUNC_7(VAR_8, &VAR_8, 10);
  if (VAR_0 != 0)
   goto bad_input;
  if (VAR_11 < 0)
   goto bad_input;
  if (VAR_11 > 99999)
   goto bad_input;
  VAR_4->startnum = VAR_4->endrange = VAR_11;


  if ((*VAR_8 == '-') && (FUNC_2(*(VAR_8 + 1)))) {
   VAR_8++;
   VAR_0 = 0;
   VAR_11 = FUNC_7(VAR_8, &VAR_8, 10);
   if (VAR_0 != 0)
    goto bad_input;
   if (VAR_11 < VAR_4->startnum)
    goto bad_input;
   if (VAR_11 > 99999)
    goto bad_input;
   VAR_4->endrange = VAR_11;
  }
  if (*VAR_8 != '\0') {
   if (VAR_5 != ((void*)0))
    goto bad_input;
   if (VAR_4->wantedhost != ((void*)0))
    goto bad_input;
   if (VAR_4->wanteduser != ((void*)0))
    goto bad_input;

   VAR_4->wantedhost = VAR_8;
  }
 }

 if ((VAR_4->startnum < 0) && (VAR_4->wanteduser == ((void*)0)) &&
     (VAR_4->wantedhost == ((void*)0)))
  goto bad_input;






 FUNC_0(VAR_3, VAR_4, VAR_1);
 return (1);

bad_input:




 if (VAR_5 != ((void*)0))
  *VAR_5 = '@';
 if (VAR_6 != ((void*)0))
  *VAR_6 = ':';
 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_4);
 return (0);
}
