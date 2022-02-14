
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct llan_softc {int ifp; int unit; } ;
typedef int bus_size_t ;
struct TYPE_3__ {int ds_addr; scalar_t__ ds_len; } ;
typedef TYPE_1__ bus_dma_segment_t ;
typedef int bufdescs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int,int,int,int,int,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_5, bus_dma_segment_t *VAR_6, int VAR_7,
    bus_size_t VAR_8, int VAR_9)
{
 struct llan_softc *VAR_10 = VAR_5;
 uint64_t VAR_11[6];
 int VAR_12, VAR_13;

 FUNC_0(VAR_11, sizeof(VAR_11));

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_11[VAR_12] = VAR_4;
  VAR_11[VAR_12] |= (((uint64_t)VAR_6[VAR_12].ds_len) << 32);
  VAR_11[VAR_12] |= VAR_6[VAR_12].ds_addr;
 }

 VAR_13 = FUNC_2(VAR_0, VAR_10->unit, VAR_11[0],
     VAR_11[1], VAR_11[2], VAR_11[3], VAR_11[4], VAR_11[5], 0);






 if (VAR_13 == VAR_1)
  FUNC_1(VAR_10->ifp, VAR_3, 1);
 else
  FUNC_1(VAR_10->ifp, VAR_2, 1);
}
