
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int * bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int FUNC_0 (int *,int ,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int *,int *,int *) ;

int
FUNC_2(phandle_t VAR_1, int VAR_2, bus_space_tag_t *VAR_3,
    bus_space_handle_t *VAR_4, bus_size_t *VAR_5)
{
 bus_addr_t VAR_6;
 bus_size_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, &VAR_6, &VAR_7, ((void*)0));
 if (VAR_8 != 0)
  return (VAR_8);

 *VAR_3 = &VAR_0;

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_7;

 return (FUNC_0(*VAR_3, VAR_6, VAR_7, 0, VAR_4));
}
