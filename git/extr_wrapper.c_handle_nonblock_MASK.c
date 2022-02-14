
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; short events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pollfd*,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_2, short VAR_3, int VAR_4)
{
 struct pollfd VAR_5;

 if (VAR_4 != VAR_0 && VAR_4 != VAR_1)
  return 0;

 VAR_5.fd = VAR_2;
 VAR_5.events = VAR_3;





 FUNC_0(&VAR_5, 1, -1);
 return 1;
}
