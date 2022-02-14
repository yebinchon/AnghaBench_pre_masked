
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct p4tcc_softc {int auto_mode; } ;
struct cf_setting {int dev; int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct p4tcc_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct cf_setting*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5, struct cf_setting *VAR_6)
{
 struct p4tcc_softc *VAR_7;
 uint64_t VAR_8;
 int VAR_9;

 if (VAR_6 == ((void*)0))
  return (VAR_1);
 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7->auto_mode) {
  VAR_8 = FUNC_3(VAR_2);
  VAR_9 = (VAR_8 >> VAR_4) & (VAR_3 - 1);
 } else
  VAR_9 = VAR_3;

 FUNC_2(VAR_6, VAR_0, sizeof(*VAR_6));
 VAR_6->freq = FUNC_0(VAR_9);
 VAR_6->dev = VAR_5;

 return (0);
}
