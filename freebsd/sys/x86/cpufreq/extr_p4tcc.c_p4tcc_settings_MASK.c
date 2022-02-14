
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p4tcc_softc {int set_count; } ;
struct cf_setting {int dev; int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct p4tcc_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct cf_setting*,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_4, struct cf_setting *VAR_5, int *VAR_6)
{
 struct p4tcc_softc *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return (VAR_2);
 if (*VAR_6 < VAR_7->set_count)
  return (VAR_1);


 FUNC_2(VAR_5, VAR_0, sizeof(*VAR_5) * VAR_7->set_count);
 VAR_9 = VAR_3;
 for (VAR_8 = 0; VAR_8 < VAR_7->set_count; VAR_8++, VAR_9--) {
  VAR_5[VAR_8].freq = FUNC_0(VAR_9);
  VAR_5[VAR_8].dev = VAR_4;
 }
 *VAR_6 = VAR_7->set_count;

 return (0);
}
