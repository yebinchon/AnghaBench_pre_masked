
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct intsrc {int is_event; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,char const*) ;
 struct intsrc* FUNC_1 (int ) ;
 int FUNC_2 (struct intsrc*) ;

int
FUNC_3(u_int VAR_1, void *VAR_2, const char *VAR_3)
{
 struct intsrc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 VAR_5 = FUNC_0(VAR_4->is_event, VAR_2, VAR_3);
 if (VAR_5)
  return (VAR_5);
 FUNC_2(VAR_4);
 return (0);
}
