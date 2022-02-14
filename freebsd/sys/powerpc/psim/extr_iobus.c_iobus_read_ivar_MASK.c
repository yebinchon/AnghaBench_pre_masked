
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iobus_devinfo {uintptr_t id_node; uintptr_t id_nregs; int id_reg; int id_name; } ;
typedef int device_t ;


 int VAR_0 ;




 struct iobus_devinfo* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
        struct iobus_devinfo *VAR_5;

        if ((VAR_5 = FUNC_0(VAR_2)) == ((void*)0))
                return (VAR_0);

        switch (VAR_3) {
        case 130:
                *VAR_4 = VAR_5->id_node;
                break;
        case 131:
                *VAR_4 = (uintptr_t)VAR_5->id_name;
                break;
 case 129:
  *VAR_4 = VAR_5->id_nregs;
  break;
 case 128:
  *VAR_4 = (uintptr_t)VAR_5->id_reg;
  break;
        default:
                return (VAR_0);
        }

        return (0);
}
