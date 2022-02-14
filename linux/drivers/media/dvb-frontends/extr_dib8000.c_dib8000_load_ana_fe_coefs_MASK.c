
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib8000_state {scalar_t__ isdbt_cfg_loaded; } ;
typedef int s16 ;


 int FUNC_0 (struct dib8000_state*,int,int const) ;

__attribute__((used)) static void FUNC_1(struct dib8000_state *VAR_0, const s16 *VAR_1)
{
 u16 VAR_2 = 0;

 if (VAR_0->isdbt_cfg_loaded == 0)
  for (VAR_2 = 0; VAR_2 < 24; VAR_2++)
   FUNC_0(VAR_0, 117 + VAR_2, VAR_1[VAR_2]);
}
