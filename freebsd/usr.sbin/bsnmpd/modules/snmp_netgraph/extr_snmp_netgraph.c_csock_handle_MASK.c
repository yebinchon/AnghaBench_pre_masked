
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ typecookie; } ;
struct ng_mesg {TYPE_1__ header; } ;
struct msgreg {scalar_t__ cookie; scalar_t__ id; int arg; int (* func ) (struct ng_mesg*,char const*,scalar_t__,int ) ;} ;


 int VAR_0 ;
 struct msgreg* FUNC_0 (int *) ;
 struct msgreg* FUNC_1 (struct msgreg*,int ) ;
 int FUNC_2 (struct ng_mesg*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char const*,char*,scalar_t__*,int*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (struct ng_mesg*,char const*,scalar_t__,int ) ;
 int FUNC_6 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_7(struct ng_mesg *VAR_3, const char *VAR_4)
{
 struct msgreg *VAR_5, *VAR_6;
 u_int VAR_7;
 int VAR_8;

 if (FUNC_3(VAR_4, "[%x]:%n", &VAR_7, &VAR_8) != 1 ||
     (u_int)VAR_8 != FUNC_4(VAR_4)) {
  FUNC_6(VAR_0, "cannot parse message path '%s'", VAR_4);
  VAR_7 = 0;
 }

 VAR_5 = FUNC_0(&VAR_2);
 while (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_1(VAR_5, VAR_1);
  if (VAR_5->cookie == VAR_3->header.typecookie &&
      (VAR_5->id == 0 || VAR_5->id == VAR_7 || VAR_7 == 0))
   (*VAR_5->func)(VAR_3, VAR_4, VAR_7, VAR_5->arg);
  VAR_5 = VAR_6;
 }
 FUNC_2(VAR_3);
}
