
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atpic_softc {int* sc_rid; int sc_irid; int ** sc_res; int * sc_ires; int sc_icookie; int sc_dev; } ;
typedef int device_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct atpic_softc*,size_t) ;
 int VAR_9 ;
 void* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int ,int *,int,int *,int ,int ,int *) ;
 struct atpic_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_10)
{
 struct atpic_softc *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_10);
 VAR_11->sc_dev = VAR_10;

 VAR_12 = VAR_2;

 VAR_11->sc_rid[VAR_0] = 0;
 VAR_11->sc_res[VAR_0] = FUNC_1(VAR_10, VAR_6,
     &VAR_11->sc_rid[VAR_0], VAR_5);
 if (VAR_11->sc_res[VAR_0] == ((void*)0))
  goto fail;

 VAR_11->sc_rid[VAR_1] = 1;
 VAR_11->sc_res[VAR_1] = FUNC_1(VAR_10, VAR_6,
     &VAR_11->sc_rid[VAR_1], VAR_5);
 if (VAR_11->sc_res[VAR_1] == ((void*)0))
  goto fail;

 VAR_11->sc_irid = 0;
 VAR_11->sc_ires = FUNC_1(VAR_10, VAR_7, &VAR_11->sc_irid,
     VAR_5);
 if (VAR_11->sc_ires == ((void*)0))
  goto fail;

 VAR_12 = FUNC_3(VAR_10, VAR_11->sc_ires, VAR_4 | VAR_3,
     ((void*)0), VAR_9, VAR_10, &VAR_11->sc_icookie);
 if (VAR_12)
  goto fail;

 FUNC_0(VAR_11, VAR_1);
 FUNC_0(VAR_11, VAR_0);

 FUNC_5(VAR_10, 0, 16, 0, VAR_8);
 return (0);

 fail:
 if (VAR_11->sc_ires != ((void*)0))
  FUNC_2(VAR_10, VAR_7, VAR_11->sc_irid,
      VAR_11->sc_ires);
 if (VAR_11->sc_res[VAR_1] != ((void*)0))
  FUNC_2(VAR_10, VAR_6,
      VAR_11->sc_rid[VAR_1], VAR_11->sc_res[VAR_1]);
 if (VAR_11->sc_res[VAR_0] != ((void*)0))
  FUNC_2(VAR_10, VAR_6,
      VAR_11->sc_rid[VAR_0], VAR_11->sc_res[VAR_0]);
 return (VAR_12);
}
