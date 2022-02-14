
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_softc {int bsh; int bst; } ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static __inline uint8_t
FUNC_1(struct i2c_softc *VAR_0, bus_size_t VAR_1)
{

 return (FUNC_0(VAR_0->bst, VAR_0->bsh, VAR_1));
}
