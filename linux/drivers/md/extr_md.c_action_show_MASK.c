
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {unsigned long recovery; scalar_t__ reshape_position; int ro; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,char*,char*) ;
 scalar_t__ FUNC_1 (int ,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_9, char *VAR_10)
{
 char *VAR_11 = "idle";
 unsigned long VAR_12 = VAR_9->recovery;
 if (FUNC_1(VAR_1, &VAR_12))
  VAR_11 = "frozen";
 else if (FUNC_1(VAR_6, &VAR_12) ||
     (!VAR_9->ro && FUNC_1(VAR_2, &VAR_12))) {
  if (FUNC_1(VAR_5, &VAR_12))
   VAR_11 = "reshape";
  else if (FUNC_1(VAR_7, &VAR_12)) {
   if (!FUNC_1(VAR_4, &VAR_12))
    VAR_11 = "resync";
   else if (FUNC_1(VAR_0, &VAR_12))
    VAR_11 = "check";
   else
    VAR_11 = "repair";
  } else if (FUNC_1(VAR_3, &VAR_12))
   VAR_11 = "recover";
  else if (VAR_9->reshape_position != VAR_8)
   VAR_11 = "reshape";
 }
 return FUNC_0(VAR_10, "%s\n", VAR_11);
}
