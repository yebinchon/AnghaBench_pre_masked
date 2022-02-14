
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mambodisk_softc {int maxblocks; int running; int p; int bio_queue; struct disk* disk; int dev; } ;
struct disk {char* d_name; int d_sectorsize; unsigned long long d_mediasize; int d_unit; int d_maxsize; struct mambodisk_softc* d_drv1; int d_strategy; int d_close; int d_open; } ;
typedef int intmax_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mambodisk_softc*) ;
 int FUNC_1 (int *) ;
 struct mambodisk_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,char,int) ;
 struct disk* FUNC_5 () ;
 int FUNC_6 (struct disk*,int ) ;
 int FUNC_7 (int *,struct mambodisk_softc*,int *,int ,int ,char*) ;
 unsigned long long FUNC_8 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_9)
{
 struct mambodisk_softc *VAR_10;
 struct disk *VAR_11;
 intmax_t VAR_12;
 char VAR_13;

 VAR_10 = FUNC_2(VAR_9);
 VAR_10->dev = VAR_9;
 FUNC_0(VAR_10);

 VAR_11 = VAR_10->disk = FUNC_5();
 VAR_11->d_open = VAR_6;
 VAR_11->d_close = VAR_5;
 VAR_11->d_strategy = VAR_7;
 VAR_11->d_name = "mambodisk";
 VAR_11->d_drv1 = VAR_10;
 VAR_11->d_maxsize = VAR_4;

 VAR_11->d_sectorsize = 512;
 VAR_10->maxblocks = FUNC_8(VAR_1,VAR_2,VAR_11->d_unit)
     / 512;

 VAR_11->d_unit = FUNC_3(VAR_9);
 VAR_11->d_mediasize = FUNC_8(VAR_1,VAR_3,VAR_11->d_unit)
     * 1024ULL;

 VAR_12 = VAR_11->d_mediasize >> 20;
 VAR_13 = 'M';
 if (VAR_12 >= 10240) {
  VAR_13 = 'G';
  VAR_12 /= 1024;
 }
 FUNC_4(VAR_9, "%ju%cB, %d byte sectors\n", VAR_12, VAR_13,
     VAR_11->d_sectorsize);
 FUNC_6(VAR_11, VAR_0);
 FUNC_1(&VAR_10->bio_queue);

 VAR_10->running = 1;
 FUNC_7(&VAR_8, VAR_10, &VAR_10->p, 0, 0, "task: mambo hd");

 return (0);
}
