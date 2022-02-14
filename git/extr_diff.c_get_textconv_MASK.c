
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdiff_driver {int dummy; } ;
struct repository {int index; } ;
struct diff_filespec {int driver; } ;


 int FUNC_0 (struct diff_filespec*) ;
 int FUNC_1 (struct diff_filespec*,int ) ;
 struct userdiff_driver* FUNC_2 (struct repository*,int ) ;

struct userdiff_driver *FUNC_3(struct repository *VAR_0,
         struct diff_filespec *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return ((void*)0);

 FUNC_1(VAR_1, VAR_0->index);
 return FUNC_2(VAR_0, VAR_1->driver);
}
