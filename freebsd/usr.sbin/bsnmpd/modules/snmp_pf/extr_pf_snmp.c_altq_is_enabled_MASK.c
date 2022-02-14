
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_altq {int version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int,int ,struct pfioc_altq*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_6)
{
 struct pfioc_altq VAR_7;

 VAR_5 = 0;
 VAR_7.version = VAR_4;
 if (FUNC_0(VAR_6, VAR_0, &VAR_7)) {
  if (VAR_5 == VAR_1) {
   FUNC_2(VAR_3, "No ALTQ support in kernel\n"
       "ALTQ related functions disabled\n");
   return (0);
  } else
   FUNC_2(VAR_2, "DIOCGETALTQS returned an error: %s",
       FUNC_1(VAR_5));
   return (-1);
 }
 return (1);
}
