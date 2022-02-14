
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int32_t ;
struct sockaddr_dl {int sdl_len; void** sdl_data; int sdl_alen; int sdl_type; int sdl_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr_dl*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,void**,void**,void**,void**,void**,void**) ;

__attribute__((used)) static int
FUNC_4(char *VAR_3, struct sockaddr_dl *VAR_4)
{
 char *VAR_5;
 u_int32_t VAR_6[6];
 int VAR_7;

 FUNC_0(VAR_4, sizeof(*VAR_4));
 VAR_4->sdl_len = sizeof(*VAR_4);
 VAR_4->sdl_family = VAR_0;
 VAR_4->sdl_type = VAR_2;
 VAR_4->sdl_alen = VAR_1;
 if ((VAR_5 = FUNC_2(VAR_3)) == ((void*)0))
  return (1);
 VAR_7 = FUNC_3(VAR_5, "%x:%x:%x:%x:%x:%x",
     &VAR_6[0], &VAR_6[1], &VAR_6[2], &VAR_6[3], &VAR_6[4], &VAR_6[5]);
 FUNC_1(VAR_5);
 if (VAR_7 != 6)
  return (1);
 VAR_4->sdl_data[0] = VAR_6[0];
 VAR_4->sdl_data[1] = VAR_6[1];
 VAR_4->sdl_data[2] = VAR_6[2];
 VAR_4->sdl_data[3] = VAR_6[3];
 VAR_4->sdl_data[4] = VAR_6[4];
 VAR_4->sdl_data[5] = VAR_6[5];
 return (0);
}
