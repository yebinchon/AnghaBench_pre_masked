
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jobspec {char* fmtoutput; int pluralfmt; char* wanteduser; char* wantedhost; int startnum; int endrange; } ;
typedef int rangestr ;
typedef int buildstr ;




 int FUNC_0 (char*) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int,char*,int ,...) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 size_t FUNC_5 (char*) ;

void
FUNC_6(struct jobspec *VAR_0, int VAR_1)
{
 char VAR_2[40], VAR_3[200];
 const char VAR_4[] = "from user ";
 const char VAR_5[] = "from host ";
 size_t VAR_6;





 if (VAR_0->fmtoutput != ((void*)0)) {
  FUNC_0(VAR_0->fmtoutput);
  VAR_0->fmtoutput = ((void*)0);
 }

 VAR_0->pluralfmt = 1;
 VAR_2[0] = '\0';
 if (VAR_0->startnum >= 0) {
  if (VAR_0->startnum != VAR_0->endrange)
   FUNC_2(VAR_2, sizeof(VAR_2), "%ld-%ld",
       VAR_0->startnum, VAR_0->endrange);
  else {
   VAR_0->pluralfmt = 0;
   FUNC_2(VAR_2, sizeof(VAR_2), "%ld",
       VAR_0->startnum);
  }
 }

 VAR_6 = sizeof(VAR_3);
 VAR_3[0] = '\0';
 switch (VAR_1) {
 case 129:

  if (VAR_0->wanteduser != ((void*)0))
   FUNC_3(VAR_3, VAR_0->wanteduser, VAR_6);
  if (VAR_2[0] != '\0') {
   if (VAR_3[0] != '\0')
    FUNC_3(VAR_3, ":", VAR_6);
   FUNC_3(VAR_3, VAR_2, VAR_6);
  }
  if (VAR_0->wantedhost != ((void*)0))
    FUNC_3(VAR_3, "@", VAR_6);


  VAR_6 = FUNC_5(VAR_3) + 1;
  if (VAR_0->wantedhost != ((void*)0))
   VAR_6 += FUNC_5(VAR_0->wantedhost);
  VAR_0->fmtoutput = FUNC_1(VAR_6);


  FUNC_4(VAR_0->fmtoutput, VAR_3, VAR_6);
  if (VAR_0->wantedhost != ((void*)0))
   FUNC_3(VAR_0->fmtoutput, VAR_0->wantedhost, VAR_6);
  break;

 case 128:
 default:

  FUNC_3(VAR_3, VAR_2, VAR_6);
  if (VAR_0->wanteduser != ((void*)0)) {
   if (VAR_2[0] != '\0')
    FUNC_3(VAR_3, " ", VAR_6);
   FUNC_3(VAR_3, VAR_4, VAR_6);
   FUNC_3(VAR_3, VAR_0->wanteduser, VAR_6);
  }
  if (VAR_0->wantedhost != ((void*)0)) {
   if (VAR_0->wanteduser == ((void*)0)) {
    if (VAR_2[0] != '\0')
     FUNC_3(VAR_3, " ", VAR_6);
    FUNC_3(VAR_3, VAR_5, VAR_6);
   } else
    FUNC_3(VAR_3, "@", VAR_6);
  }


  VAR_6 = FUNC_5(VAR_3) + 1;
  if (VAR_0->wantedhost != ((void*)0))
   VAR_6 += FUNC_5(VAR_0->wantedhost);
  VAR_0->fmtoutput = FUNC_1(VAR_6);


  FUNC_4(VAR_0->fmtoutput, VAR_3, VAR_6);
  if (VAR_0->wantedhost != ((void*)0))
   FUNC_3(VAR_0->fmtoutput, VAR_0->wantedhost, VAR_6);
  break;
 }
}
