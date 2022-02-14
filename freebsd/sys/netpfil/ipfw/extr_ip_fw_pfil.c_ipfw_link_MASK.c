
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfil_link_args {int pa_flags; int pa_hook; int pa_head; int pa_version; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct pfil_link_args*) ;

__attribute__((used)) static int
FUNC_1(int VAR_12, bool VAR_13)
{
 struct pfil_link_args VAR_14;

 VAR_14.pa_version = VAR_5;
 VAR_14.pa_flags = VAR_2 | VAR_3 | VAR_0 | VAR_1;
 if (VAR_13)
  VAR_14.pa_flags |= VAR_4;

 switch (VAR_12) {
 case 130:
  VAR_14.pa_head = VAR_7;
  VAR_14.pa_hook = VAR_9;
  break;






 case 128:
  VAR_14.pa_head = VAR_11;
  VAR_14.pa_hook = VAR_10;
  break;
 }

 return (FUNC_0(&VAR_14));
}
