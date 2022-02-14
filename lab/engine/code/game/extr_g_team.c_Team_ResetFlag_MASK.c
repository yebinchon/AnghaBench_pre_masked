
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; } ;
typedef TYPE_1__ gentity_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;



 int FUNC_4 (int,int ) ;
 int VAR_2 ;

gentity_t *FUNC_5( int VAR_3 ) {
 char *VAR_4;
 gentity_t *VAR_5, *VAR_6 = ((void*)0);

 switch (VAR_3) {
 case 128:
  VAR_4 = "team_CTF_redflag";
  break;
 case 130:
  VAR_4 = "team_CTF_blueflag";
  break;
 case 129:
  VAR_4 = "team_CTF_neutralflag";
  break;
 default:
  return ((void*)0);
 }

 VAR_5 = ((void*)0);
 while ((VAR_5 = FUNC_1 (VAR_5, FUNC_0(VAR_2), VAR_4)) != ((void*)0)) {
  if (VAR_5->flags & VAR_1)
   FUNC_2(VAR_5);
  else {
   VAR_6 = VAR_5;
   FUNC_3(VAR_5);
  }
 }

 FUNC_4( VAR_3, VAR_0 );

 return VAR_6;
}
