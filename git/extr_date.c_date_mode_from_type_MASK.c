
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct date_mode {int type; scalar_t__ local; } ;
typedef enum date_mode_type { ____Placeholder_date_mode_type } date_mode_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

struct date_mode *FUNC_1(enum date_mode_type VAR_1)
{
 static struct date_mode VAR_2;
 if (VAR_1 == VAR_0)
  FUNC_0("cannot create anonymous strftime date_mode struct");
 VAR_2.type = VAR_1;
 VAR_2.local = 0;
 return &VAR_2;
}
