
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vmem_addr_t ;
struct opalpci_softc {int * msi_vmem; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct opalpci_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int,int ,int ,int ,int ,int ,int,scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5, device_t VAR_6, int VAR_7, int VAR_8,
    int *VAR_9)
{
 struct opalpci_softc *VAR_10;
 vmem_addr_t VAR_11;
 phandle_t VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = FUNC_2(VAR_5);
 if (VAR_10->msi_vmem == ((void*)0))
  return (VAR_0);

 VAR_13 = FUNC_5(VAR_10->msi_vmem, VAR_7, FUNC_4(VAR_7), 0, 0,
     VAR_4, VAR_3, VAR_1 | VAR_2, &VAR_11);

 if (VAR_13)
  return (VAR_13);

 VAR_12 = FUNC_1(FUNC_3(VAR_5));
 for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
  VAR_9[VAR_14] = FUNC_0(VAR_12, VAR_11 + VAR_14);

 return (0);
}
