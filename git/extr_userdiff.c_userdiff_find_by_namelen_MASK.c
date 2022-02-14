
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdiff_driver {int * name; } ;


 int FUNC_0 (struct userdiff_driver*) ;
 struct userdiff_driver* VAR_0 ;
 struct userdiff_driver* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static struct userdiff_driver *FUNC_2(const char *VAR_3, int VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct userdiff_driver *VAR_6 = VAR_1 + VAR_5;
  if (!FUNC_1(VAR_6->name, VAR_3, VAR_4) && !VAR_6->name[VAR_4])
   return VAR_6;
 }
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  struct userdiff_driver *VAR_7 = VAR_0 + VAR_5;
  if (!FUNC_1(VAR_7->name, VAR_3, VAR_4) && !VAR_7->name[VAR_4])
   return VAR_7;
 }
 return ((void*)0);
}
