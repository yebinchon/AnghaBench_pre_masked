
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fire_desc {int * fd_string; } ;
typedef int device_t ;


 struct fire_desc* VAR_0 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char const*) ;

__attribute__((used)) static const struct fire_desc *
FUNC_2(device_t VAR_1)
{
 const struct fire_desc *VAR_2;
 const char *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 for (VAR_2 = VAR_0; VAR_2->fd_string != ((void*)0); VAR_2++)
  if (FUNC_1(VAR_2->fd_string, VAR_3) == 0)
   return (VAR_2);
 return (((void*)0));
}
