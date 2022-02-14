
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_softc {scalar_t__ dfs4; } ;
struct cf_setting {int freq; int dev; } ;
typedef int register_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dfs_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct cf_setting*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, struct cf_setting *VAR_6)
{
 struct dfs_softc *VAR_7;
 register_t VAR_8;

 if (VAR_6 == ((void*)0))
  return (VAR_1);
 VAR_7 = FUNC_0(VAR_5);

 FUNC_1(VAR_6, VAR_0, sizeof(*VAR_6));

 VAR_8 = FUNC_2(VAR_4);

 VAR_6->freq = 10000;
 if (VAR_8 & VAR_2)
  VAR_6->freq = 5000;
 else if (VAR_7->dfs4 && (VAR_8 & VAR_3))
  VAR_6->freq = 2500;

 VAR_6->dev = VAR_5;

 return (0);
}
