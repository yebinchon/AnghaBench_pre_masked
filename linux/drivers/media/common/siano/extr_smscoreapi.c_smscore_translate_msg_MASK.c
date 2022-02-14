
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum msg_types { ____Placeholder_msg_types } msg_types ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;

char *FUNC_1(enum msg_types VAR_2)
{
 int VAR_3 = VAR_2 - VAR_0;
 char *VAR_4;

 if (VAR_3 < 0 || VAR_3 >= FUNC_0(VAR_1))
  return "Unknown msg type";

 VAR_4 = VAR_1[VAR_3];

 if (!*VAR_4)
  return "Unknown msg type";

 return VAR_4;
}
