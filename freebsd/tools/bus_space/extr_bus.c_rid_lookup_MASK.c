
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct resource* VAR_4 ;

__attribute__((used)) static struct resource *
FUNC_0(int VAR_5)
{
 struct resource *VAR_6;

 if (VAR_5 < 0 || VAR_5 >= VAR_3) {
  VAR_2 = VAR_0;
  return (((void*)0));
 }
 VAR_6 = VAR_4 + VAR_5;
 if (VAR_6->fd == -1) {
  VAR_2 = VAR_1;
  return (((void*)0));
 }
 return (VAR_6);
}
