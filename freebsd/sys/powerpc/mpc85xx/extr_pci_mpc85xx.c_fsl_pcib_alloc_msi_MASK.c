
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmem_addr_t ;
struct fsl_pcib_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fsl_pcib_softc* FUNC_0 (int ) ;
 int * VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int ,int ,int ,int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_3(device_t VAR_6, device_t VAR_7,
    int VAR_8, int VAR_9, int *VAR_10)
{
 struct fsl_pcib_softc *VAR_11;
 vmem_addr_t VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_0(VAR_6);
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 VAR_13 = FUNC_2(VAR_5, VAR_8, FUNC_1(VAR_8), 0, 0,
     VAR_4, VAR_3, VAR_1 | VAR_2, &VAR_12);

 if (VAR_13)
  return (VAR_13);

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++)
  VAR_10[VAR_14] = VAR_12 + VAR_14;

 return (0);
}
