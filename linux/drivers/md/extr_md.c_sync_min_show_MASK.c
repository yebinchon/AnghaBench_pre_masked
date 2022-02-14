
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ sync_speed_min; } ;
typedef int ssize_t ;


 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (char*,char*,int,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_0, char *VAR_1)
{
 return FUNC_1(VAR_1, "%d (%s)\n", FUNC_0(VAR_0),
         VAR_0->sync_speed_min ? "local": "system");
}
