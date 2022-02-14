
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GeoIPRecord ;
typedef scalar_t__ GTypeIP ;


 int * FUNC_0 (int ,char const*) ;
 int * FUNC_1 (int ,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static GeoIPRecord *
FUNC_2 (const char *VAR_3, GTypeIP VAR_4)
{
  GeoIPRecord *VAR_5 = ((void*)0);

  if (VAR_0 == VAR_4)
    VAR_5 = FUNC_0 (VAR_2, VAR_3);
  else if (VAR_1 == VAR_4)
    VAR_5 = FUNC_1 (VAR_2, VAR_3);

  return VAR_5;
}
