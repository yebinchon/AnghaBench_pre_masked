
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hvs_format {scalar_t__ drm; } ;


 unsigned int FUNC_0 (struct hvs_format const*) ;
 struct hvs_format const* VAR_0 ;

__attribute__((used)) static const struct hvs_format *FUNC_1(u32 VAR_1)
{
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].drm == VAR_1)
   return &VAR_0[VAR_2];
 }

 return ((void*)0);
}
