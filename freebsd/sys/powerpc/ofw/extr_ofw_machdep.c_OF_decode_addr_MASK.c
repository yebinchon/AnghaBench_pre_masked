
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;
typedef int * bus_space_tag_t ;
typedef int bus_space_handle_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int,int *) ;
 int FUNC_1 (int ,int,int *,int *,int*) ;

int
FUNC_2(phandle_t VAR_5, int VAR_6, bus_space_tag_t *VAR_7,
    bus_space_handle_t *VAR_8, bus_size_t *VAR_9)
{
 bus_addr_t VAR_10;
 bus_size_t VAR_11;
 pcell_t VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = FUNC_1(VAR_5, VAR_6, &VAR_10, &VAR_11, &VAR_12);
 if (VAR_14 < 0)
  return (VAR_14);

 if (VAR_12 == VAR_1) {
  *VAR_7 = &VAR_3;
  VAR_13 = 0;
 } else {
  *VAR_7 = &VAR_4;
  VAR_13 = (VAR_12 & VAR_2) ?
      VAR_0: 0;
 }

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_11;

 return (FUNC_0(*VAR_7, VAR_10, VAR_11, VAR_13, VAR_8));
}
