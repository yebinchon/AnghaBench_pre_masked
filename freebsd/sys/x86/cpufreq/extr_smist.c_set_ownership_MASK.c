
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smist_softc {int command; int smi_cmd; } ;
struct set_ownership_data {scalar_t__ result; int buf; int command; int smi_cmd; } ;
typedef int device_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ,struct set_ownership_data*,int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_6 ;
 struct smist_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_8)
{
 struct smist_softc *VAR_9;
 struct set_ownership_data VAR_10;
 bus_dma_tag_t VAR_11;
 bus_dmamap_t VAR_12;






 VAR_9 = FUNC_7(VAR_8);
 if (FUNC_1( ((void*)0),
                   VAR_5, 0,
                 VAR_2, VAR_1,
     ((void*)0), ((void*)0), VAR_5, 1,
                    VAR_5, 0, VAR_6, &VAR_4,
     &VAR_11) != 0) {
  FUNC_8(VAR_8, "can't create mem tag\n");
  return (VAR_3);
 }
 if (FUNC_5(VAR_11, &VAR_10.buf, VAR_0, &VAR_12) != 0) {
  FUNC_2(VAR_11);
  FUNC_8(VAR_8, "can't alloc mapped mem\n");
  return (VAR_3);
 }


 VAR_10.smi_cmd = VAR_9->smi_cmd;
 VAR_10.command = VAR_9->command;
 if (FUNC_3(VAR_11, VAR_12, VAR_10.buf, VAR_5, VAR_7,
     &VAR_10, VAR_0) != 0) {
  FUNC_6(VAR_11, VAR_10.buf, VAR_12);
  FUNC_2(VAR_11);
  FUNC_8(VAR_8, "can't load mem\n");
  return (VAR_3);
 }
 FUNC_0(VAR_8, "taking ownership over BIOS return %d\n", VAR_10.result);
 FUNC_4(VAR_11, VAR_12);
 FUNC_6(VAR_11, VAR_10.buf, VAR_12);
 FUNC_2(VAR_11);
 return (VAR_10.result ? VAR_3 : 0);
}
