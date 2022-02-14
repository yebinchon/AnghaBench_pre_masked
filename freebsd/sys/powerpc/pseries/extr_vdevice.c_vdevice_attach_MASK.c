
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int obd_name; } ;
struct vdevice_devinfo {TYPE_1__ mdi_obdinfo; int mdi_resources; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,struct vdevice_devinfo*) ;
 int FUNC_7 (struct vdevice_devinfo*,int ) ;
 struct vdevice_devinfo* FUNC_8 (int,int ,int) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__,int *,int *) ;
 int FUNC_13 (int ,int ,int,int,int ) ;
 int FUNC_14 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_15(device_t VAR_5)
{
 phandle_t VAR_6, VAR_7;
 device_t VAR_8;
 struct vdevice_devinfo *VAR_9;

 VAR_6 = FUNC_11(VAR_5);


 FUNC_13(VAR_4, FUNC_2(VAR_6),
     1 << 24 , 1 , VAR_0);

 for (VAR_7 = FUNC_0(VAR_6); VAR_7 != 0; VAR_7 = FUNC_1(VAR_7)) {
  VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_1, VAR_2 | VAR_3);

                if (FUNC_10(&VAR_9->mdi_obdinfo,
      VAR_7) != 0) {
                        FUNC_7(VAR_9, VAR_1);
                        continue;
                }
  FUNC_14(&VAR_9->mdi_resources);

  FUNC_12(VAR_5, VAR_7, &VAR_9->mdi_resources, ((void*)0));

                VAR_8 = FUNC_4(VAR_5, ((void*)0), -1);
                if (VAR_8 == ((void*)0)) {
                        FUNC_5(VAR_5, "<%s>: device_add_child failed\n",
                            VAR_9->mdi_obdinfo.obd_name);
                        FUNC_9(&VAR_9->mdi_obdinfo);
                        FUNC_7(VAR_9, VAR_1);
                        continue;
                }
  FUNC_6(VAR_8, VAR_9);
 }

 return (FUNC_3(VAR_5));
}
