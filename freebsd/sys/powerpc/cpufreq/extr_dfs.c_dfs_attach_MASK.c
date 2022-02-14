
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dfs_softc {int dfs4; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct dfs_softc* FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct dfs_softc *VAR_2;
 uint16_t VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 VAR_2->dev = VAR_1;
 VAR_2->dfs4 = 0;
 VAR_3 = FUNC_2() >> 16;


 if (VAR_3 == VAR_0)
  VAR_2->dfs4 = 1;

 FUNC_0(VAR_1);
 return (0);
}
