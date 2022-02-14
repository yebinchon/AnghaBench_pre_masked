
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_pcibus_devinfo {int * opd_dma_tag; } ;
typedef scalar_t__ device_t ;
typedef int * bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int **) ;
 int FUNC_1 (scalar_t__) ;
 struct ofw_pcibus_devinfo* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static bus_dma_tag_t
FUNC_5(device_t VAR_3, device_t VAR_4)
{
 struct ofw_pcibus_devinfo *VAR_5;

 while (FUNC_3(VAR_4) != VAR_3)
  VAR_4 = FUNC_3(VAR_4);

 VAR_5 = FUNC_2(VAR_4);

 if (VAR_5->opd_dma_tag != ((void*)0))
  return (VAR_5->opd_dma_tag);

 FUNC_0(FUNC_1(VAR_3),
     1, 0, VAR_0, VAR_0,
     ((void*)0), ((void*)0), VAR_1, VAR_2,
     VAR_1, 0, ((void*)0), ((void*)0), &VAR_5->opd_dma_tag);
 FUNC_4(VAR_3, VAR_4, VAR_5->opd_dma_tag);

 return (VAR_5->opd_dma_tag);
}
