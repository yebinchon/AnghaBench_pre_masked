
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_payload {int options; int repo; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int*,int ,char const*) ;
 int FUNC_1 (char*,char const*) ;

int FUNC_2(const char *VAR_3, const char *VAR_4, void *VAR_5)
{
 struct print_payload VAR_6 = *(struct print_payload*)(VAR_5);
 int VAR_7;
 unsigned VAR_8;
 (void)VAR_4;


 if (FUNC_0(&VAR_8, VAR_6.repo, VAR_3)) {
  return -1;
 }

 if ((VAR_8 & VAR_0) || (VAR_8 & VAR_1)) {
  FUNC_1("add '%s'\n", VAR_3);
  VAR_7 = 0;
 } else {
  VAR_7 = 1;
 }

 if ((VAR_6.options & VAR_2)) {
  VAR_7 = 1;
 }

 return VAR_7;
}
