
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int ;
struct TYPE_3__ {char* rm_descr; int rm_type; } ;
struct iobus_softc {scalar_t__ sc_node; void* sc_addr; void* sc_size; TYPE_1__ sc_mem_rman; } ;
struct iobus_devinfo {char* id_name; scalar_t__ id_node; int id_resources; } ;
typedef int reg ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,void**,int) ;
 int FUNC_2 (scalar_t__,char*,void**) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *,int) ;
 struct iobus_softc* FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,struct iobus_devinfo*) ;
 int FUNC_10 (scalar_t__,struct iobus_devinfo*) ;
 int FUNC_11 (scalar_t__,struct iobus_devinfo*,void*) ;
 struct iobus_devinfo* FUNC_12 (int,int ,int ) ;
 int FUNC_13 (struct iobus_devinfo*,int ,int) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int ,void*) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_4)
{
 struct iobus_softc *VAR_5;
        struct iobus_devinfo *VAR_6;
        phandle_t VAR_7;
        phandle_t VAR_8;
        device_t VAR_9;
        char *VAR_10;
 u_int VAR_11[2];
 int VAR_12;

 VAR_5 = FUNC_7(VAR_4);
 VAR_5->sc_node = FUNC_14(VAR_4);





 VAR_12 = FUNC_1(VAR_5->sc_node, "reg", VAR_11, sizeof(VAR_11));
 if (VAR_12 == sizeof(VAR_11)) {
  VAR_5->sc_addr = VAR_11[0];
  VAR_5->sc_size = VAR_11[1];
 } else {
  return (VAR_0);
 }

 VAR_5->sc_mem_rman.rm_type = VAR_3;
        VAR_5->sc_mem_rman.rm_descr = "IOBus Device Memory";
        if (FUNC_16(&VAR_5->sc_mem_rman) != 0) {
  FUNC_8(VAR_4,
                    "failed to init mem range resources\n");
                return (VAR_0);
 }
 FUNC_17(&VAR_5->sc_mem_rman, 0, VAR_5->sc_size);




        VAR_7 = VAR_5->sc_node;

        for (VAR_8 = FUNC_0(VAR_7); VAR_8 != 0; VAR_8 = FUNC_3(VAR_8)) {
                FUNC_2(VAR_8, "name", (void **)&VAR_10);

                VAR_9 = FUNC_6(VAR_4, ((void*)0), -1);
                if (VAR_9 != ((void*)0)) {
                        VAR_6 = FUNC_12(sizeof(*VAR_6), VAR_1, VAR_2);
   FUNC_13(VAR_6, 0, sizeof(*VAR_6));
   FUNC_15(&VAR_6->id_resources);
                        VAR_6->id_node = VAR_8;
                        VAR_6->id_name = VAR_10;
   FUNC_10(VAR_8, VAR_6);
   FUNC_11(VAR_8, VAR_6, VAR_5->sc_addr);
                        FUNC_9(VAR_9, VAR_6);
                } else {
                        FUNC_4(VAR_10);
                }
        }

        return (FUNC_5(VAR_4));
}
