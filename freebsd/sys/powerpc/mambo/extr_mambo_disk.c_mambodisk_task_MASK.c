
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct mambodisk_softc {int running; int maxblocks; TYPE_1__* disk; int bio_queue; int sc_mtx; int dev; } ;
struct bio {scalar_t__ bio_pblkno; size_t bio_bcount; char* bio_data; scalar_t__ bio_cmd; int bio_flags; scalar_t__ bio_resid; int bio_error; } ;
typedef int device_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_2__ {size_t d_sectorsize; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mambodisk_softc*) ;
 int FUNC_1 (struct mambodisk_softc*) ;
 int VAR_6 ;
 int FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct bio*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,int) ;
 int FUNC_8 (struct mambodisk_softc*,int *,int ,char*,int ) ;
 int FUNC_9 (struct mambodisk_softc*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_7)
{
 struct mambodisk_softc *VAR_8 = (struct mambodisk_softc*)VAR_7;
 struct bio *VAR_9;
 size_t VAR_10;
 int VAR_11;
 daddr_t VAR_12, VAR_13;
 device_t VAR_14;
 u_long VAR_15;

 VAR_14 = VAR_8->dev;
 VAR_15 = FUNC_5(VAR_14);

 while (VAR_8->running) {
  FUNC_0(VAR_8);
  do {
   VAR_9 = FUNC_3(&VAR_8->bio_queue);
   if (VAR_9 == ((void*)0))
    FUNC_8(VAR_8, &VAR_8->sc_mtx, VAR_6, "jobqueue", 0);
  } while (VAR_9 == ((void*)0) && VAR_8->running);
  if (VAR_9)
   FUNC_4(&VAR_8->bio_queue, VAR_9);
  FUNC_1(VAR_8);
  if (!VAR_8->running)
   break;
  VAR_10 = VAR_8->disk->d_sectorsize;
  VAR_13 = VAR_9->bio_pblkno + (VAR_9->bio_bcount / VAR_10);
  for (VAR_12 = VAR_9->bio_pblkno; VAR_12 < VAR_13;) {
   u_long VAR_16;
   char *VAR_17 = VAR_9->bio_data +
       (VAR_12 - VAR_9->bio_pblkno) * VAR_10;

   VAR_16 = VAR_13 - VAR_12;
   if (VAR_16 > VAR_8->maxblocks)
    VAR_16 = VAR_8->maxblocks;

   if (VAR_9->bio_cmd == VAR_1) {
    VAR_11 = FUNC_7(VAR_4, VAR_17,
      (u_long)VAR_12, (VAR_16 << 16) | VAR_15);
   } else if (VAR_9->bio_cmd == VAR_2) {
    VAR_11 = FUNC_7(VAR_5, VAR_17,
      (u_long)VAR_12, (VAR_16 << 16) | VAR_15);
   } else {
    VAR_11 = 1;
   }

   if (VAR_11)
    break;

   VAR_12 += VAR_16;
  }
  if (VAR_12 < VAR_13) {
   VAR_9->bio_error = VAR_3;
   VAR_9->bio_resid = (VAR_13 - VAR_12) * VAR_10;
   VAR_9->bio_flags |= VAR_0;
  }
  FUNC_2(VAR_9);
 }


 FUNC_0(VAR_8);
 VAR_8->running = -1;
 FUNC_9(VAR_8);
 FUNC_1(VAR_8);

 FUNC_6(0);
}
