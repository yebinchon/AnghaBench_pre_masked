
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_1(int VAR_8)
{
 int VAR_9;

 VAR_5 = VAR_4;
 VAR_4 = VAR_8;


 if ((VAR_5 == VAR_2) && (VAR_8 != VAR_1)) {
  FUNC_0(VAR_7, "character value expected");
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_6[VAR_9] = -1;
 }
 VAR_3 = 0;
}
