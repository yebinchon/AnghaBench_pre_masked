
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_int ;
typedef int u_char ;
struct cuda_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct cuda_softc*,int ,int,int *) ;
 struct cuda_softc* FUNC_1 (int ) ;

__attribute__((used)) static u_int
FUNC_2(device_t VAR_1, u_char VAR_2, int VAR_3, u_char *VAR_4,
    u_char VAR_5)
{
 struct cuda_softc *VAR_6 = FUNC_1(VAR_1);
 uint8_t VAR_7[16];
 int VAR_8;


 VAR_7[0] = VAR_0;
 VAR_7[1] = VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  VAR_7[VAR_8 + 2] = VAR_4[VAR_8];

 FUNC_0(VAR_6, VAR_5, VAR_3 + 2, VAR_7);

 return (0);
}
