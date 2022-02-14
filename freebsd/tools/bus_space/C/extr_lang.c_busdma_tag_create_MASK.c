
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int busdma_tag_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;


 int FUNC_0 (char const*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;

int
FUNC_1(const char *VAR_1, bus_addr_t VAR_2, bus_addr_t VAR_3,
    bus_addr_t VAR_4, bus_size_t VAR_5, u_int VAR_6, bus_size_t VAR_7,
    u_int VAR_8, u_int VAR_9, busdma_tag_t *VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9);
 if (VAR_11 == -1)
  return (VAR_0);
 *VAR_10 = VAR_11;
 return (0);
}
