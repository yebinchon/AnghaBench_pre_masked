
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ umode_t ;
struct miscdevice {scalar_t__ nodename; scalar_t__ mode; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct miscdevice* FUNC_0 (struct device*) ;
 char* FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_1, umode_t *VAR_2)
{
 struct miscdevice *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 && VAR_3->mode)
  *VAR_2 = VAR_3->mode;
 if (VAR_3->nodename)
  return FUNC_1(VAR_3->nodename, VAR_0);
 return ((void*)0);
}
