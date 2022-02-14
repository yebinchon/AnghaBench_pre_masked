
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct siw_pble {int dummy; } ;
struct siw_pbl {int max_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct siw_pbl* FUNC_0 (int ) ;
 int VAR_2 ;
 struct siw_pbl* FUNC_1 (int,int ) ;

struct siw_pbl *FUNC_2(u32 VAR_3)
{
 struct siw_pbl *VAR_4;
 int VAR_5 = sizeof(*VAR_4);

 if (VAR_3 == 0)
  return FUNC_0(-VAR_0);

 VAR_5 += ((VAR_3 - 1) * sizeof(struct siw_pble));

 VAR_4 = FUNC_1(VAR_5, VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_4->max_buf = VAR_3;

 return VAR_4;
}
