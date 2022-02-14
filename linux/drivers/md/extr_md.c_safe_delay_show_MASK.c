
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int safemode_delay; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_1, char *VAR_2)
{
 int VAR_3 = (VAR_1->safemode_delay*1000)/VAR_0;
 return FUNC_0(VAR_2, "%d.%03d\n", VAR_3/1000, VAR_3%1000);
}
