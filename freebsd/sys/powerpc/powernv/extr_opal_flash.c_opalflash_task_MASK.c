
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opalflash_softc {int sc_bio_queue; int sc_mtx; int sc_dev; } ;
struct bio {int bio_cmd; int bio_error; int bio_bcount; int bio_data; int bio_offset; } ;
typedef int device_t ;





 int VAR_0 ;
 int FUNC_0 (struct opalflash_softc*) ;
 int FUNC_1 (struct opalflash_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct bio*) ;
 int FUNC_5 (struct opalflash_softc*,int *,int ,char*,int ) ;
 int FUNC_6 (struct opalflash_softc*,int ,int ) ;
 int FUNC_7 (struct opalflash_softc*,int ,int ,int ) ;
 int FUNC_8 (struct opalflash_softc*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(void *VAR_2)
{
 struct opalflash_softc *VAR_3;
 struct bio *VAR_4;
 device_t VAR_5;

 VAR_3 = VAR_2;

 for (;;) {
  VAR_5 = VAR_3->sc_dev;
  FUNC_0(VAR_3);
  do {
   VAR_4 = FUNC_3(&VAR_3->sc_bio_queue);
   if (VAR_4 == ((void*)0))
    FUNC_5(VAR_3, &VAR_3->sc_mtx, VAR_1, "opalflash", 0);
  } while (VAR_4 == ((void*)0));
  FUNC_4(&VAR_3->sc_bio_queue, VAR_4);
  FUNC_1(VAR_3);

  switch (VAR_4->bio_cmd) {
  case 130:
   VAR_4->bio_error = FUNC_6(VAR_3, VAR_4->bio_offset,
       VAR_4->bio_bcount);
   break;
  case 129:
   VAR_4->bio_error = FUNC_7(VAR_3, VAR_4->bio_offset,
       VAR_4->bio_data, VAR_4->bio_bcount);
   break;
  case 128:
   VAR_4->bio_error = FUNC_8(VAR_3, VAR_4->bio_offset,
       VAR_4->bio_data, VAR_4->bio_bcount);
   break;
  default:
   VAR_4->bio_error = VAR_0;
  }
  FUNC_2(VAR_4);
 }
}
