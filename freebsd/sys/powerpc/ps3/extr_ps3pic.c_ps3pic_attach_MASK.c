
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ps3pic_softc {int sc_ipi_virq; int * sc_ipi_outlet; scalar_t__ bitmap_thread1; scalar_t__ bitmap_thread0; scalar_t__ mask_thread1; scalar_t__ mask_thread0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ,int,int ,int ,int,int ) ;
 struct ps3pic_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int,int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int,int,int ) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 struct ps3pic_softc *VAR_7;
 uint64_t VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_6);

 VAR_7->bitmap_thread0 = FUNC_0(128 , VAR_3,
     VAR_2 | VAR_4, 0, VAR_0, 64 ,
     VAR_5 );
 VAR_7->mask_thread0 = VAR_7->bitmap_thread0 + 4;
 VAR_7->bitmap_thread1 = VAR_7->bitmap_thread0 + 8;
 VAR_7->mask_thread1 = VAR_7->bitmap_thread0 + 12;

 FUNC_6(&VAR_8);
 VAR_9 = 32 - FUNC_2(FUNC_7());
 FUNC_3(VAR_8, VAR_9,
     FUNC_9(VAR_7->bitmap_thread0));

 VAR_7->sc_ipi_virq = 63;
 FUNC_8(VAR_6, 0, VAR_7->sc_ipi_virq, 1, VAR_1);
 return (0);
}
