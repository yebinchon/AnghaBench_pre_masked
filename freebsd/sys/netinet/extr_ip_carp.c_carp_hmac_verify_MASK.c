
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct carp_softc {int dummy; } ;
typedef int md2 ;


 int FUNC_0 (struct carp_softc*) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (struct carp_softc*,int *,unsigned char*) ;

__attribute__((used)) static int
FUNC_3(struct carp_softc *VAR_0, uint32_t VAR_1[2],
    unsigned char VAR_2[20])
{
 unsigned char VAR_3[20];

 FUNC_0(VAR_0);

 FUNC_2(VAR_0, VAR_1, VAR_3);

 return (FUNC_1(VAR_2, VAR_3, sizeof(VAR_3)));
}
