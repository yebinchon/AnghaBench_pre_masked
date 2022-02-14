
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_softc {scalar_t__ dfs4; } ;
struct cf_setting {int freq; void* dev; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dfs_softc* FUNC_0 (void*) ;
 int FUNC_1 (struct cf_setting*,int ,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, struct cf_setting *VAR_4, int *VAR_5)
{
 struct dfs_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = VAR_6->dfs4 ? 3 : 2;
 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_2);
 if (*VAR_5 < VAR_7)
  return (VAR_1);


 FUNC_1(VAR_4, VAR_0, sizeof(*VAR_4) * VAR_7);

 VAR_4[0].freq = 10000; VAR_4[0].dev = VAR_3;
 VAR_4[1].freq = 5000; VAR_4[1].dev = VAR_3;
 if (VAR_6->dfs4) {
  VAR_4[2].freq = 2500;
  VAR_4[2].dev = VAR_3;
 }
 *VAR_5 = VAR_7;

 return (0);
}
