
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum source_macro_tile_size { ____Placeholder_source_macro_tile_size } source_macro_tile_size ;


 int const VAR_0 ;
 int const VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(const enum source_macro_tile_size VAR_2)
{
 if (VAR_2 == VAR_0)
  return (256 * 1024);
 else if (VAR_2 == VAR_1)
  return (64 * 1024);
 else
  return (4 * 1024);
}
