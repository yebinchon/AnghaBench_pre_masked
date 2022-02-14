
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirlist {scalar_t__ dp_left; } ;


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
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int
FUNC_1(struct dirlist *VAR_11)
{

 if (VAR_10 == 0 && VAR_11 == ((void*)0))
     return (1);
 if ((VAR_9 & (VAR_4 | VAR_3)) == (VAR_4 | VAR_3)) {
     FUNC_0(VAR_0, "-mapall and -maproot mutually exclusive");
     return (1);
 }
 if ((VAR_9 & VAR_5) && (VAR_9 & VAR_7) == 0) {
  FUNC_0(VAR_0, "-mask requires -network");
  return (1);
 }
 if ((VAR_9 & VAR_7) && (VAR_9 & VAR_2) == 0) {
  FUNC_0(VAR_0, "-network requires mask specification");
  return (1);
 }
 if ((VAR_9 & VAR_5) && (VAR_9 & VAR_6)) {
  FUNC_0(VAR_0, "-mask and /masklen are mutually exclusive");
  return (1);
 }
 if (VAR_10 > 0 &&
     (VAR_9 &
      ~(VAR_8 | VAR_5 | VAR_7 | VAR_2 | VAR_6)) != 0) {
     FUNC_0(VAR_0,"only -sec,-net,-mask options allowed on V4:");
     return (1);
 }
 if ((VAR_9 & VAR_1) && VAR_11->dp_left) {
     FUNC_0(VAR_0, "-alldirs has multiple directories");
     return (1);
 }
 return (0);
}
