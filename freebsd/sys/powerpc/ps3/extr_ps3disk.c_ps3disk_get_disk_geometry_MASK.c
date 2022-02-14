
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ps3disk_softc {int sc_nblocks; int sc_blksize; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int,int,int ,int *,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct ps3disk_softc *VAR_2)
{
 device_t VAR_3 = VAR_2->sc_dev;
 uint64_t VAR_4 = FUNC_3(VAR_3);
 uint64_t VAR_5 = FUNC_4(VAR_3);
 uint64_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1,
     (FUNC_2("bus") >> 32) | VAR_4,
     FUNC_2("dev") | VAR_5,
     FUNC_2("blk_size"), 0, &VAR_2->sc_blksize, &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_3, "Could not get block size (0x%08x)\n", VAR_7);
  return (VAR_0);
 }

 VAR_7 = FUNC_1(VAR_1,
     (FUNC_2("bus") >> 32) | VAR_4,
     FUNC_2("dev") | VAR_5,
     FUNC_2("n_blocks"), 0, &VAR_2->sc_nblocks, &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_3, "Could not get total number of blocks "
      "(0x%08x)\n", VAR_7);
  VAR_7 = VAR_0;
 }

 return (VAR_7);
}
