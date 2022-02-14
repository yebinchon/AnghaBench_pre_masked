
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct loop_device *VAR_1, char *VAR_2)
{
 int VAR_3 = (VAR_1->lo_flags & VAR_0);

 return FUNC_0(VAR_2, "%s\n", VAR_3 ? "1" : "0");
}
