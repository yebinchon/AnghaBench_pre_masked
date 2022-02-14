
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int (* set_resolution ) (struct psmouse*,unsigned int) ;} ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int,unsigned int*) ;
 int FUNC_1 (struct psmouse*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_2(struct psmouse *VAR_0, void *VAR_1, const char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, 10, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_0->set_resolution(VAR_0, VAR_4);
 return VAR_3;
}
