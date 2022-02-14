
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* uma_slab_t ;
typedef TYPE_2__* uma_keg_t ;
typedef int uint8_t ;
struct TYPE_10__ {int uk_ppera; int uk_rsize; int uk_flags; int (* uk_freef ) (int *,int,int ) ;int uk_slabzone; int uk_size; int (* uk_fini ) (int *,int ) ;int uk_name; } ;
struct TYPE_9__ {int * us_data; int us_flags; } ;


 int FUNC_0 (int ,char*,int ,TYPE_2__*,TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,TYPE_1__*,int *,int ) ;

__attribute__((used)) static void
FUNC_7(uma_keg_t VAR_4, uma_slab_t VAR_5, int VAR_6)
{
 uint8_t *VAR_7;
 int VAR_8;
 uint8_t VAR_9;

 FUNC_0(VAR_0, "keg_free_slab keg %s(%p) slab %p, returning %d bytes",
     VAR_4->uk_name, VAR_4, VAR_5, VAR_1 * VAR_4->uk_ppera);

 VAR_7 = VAR_5->us_data;
 VAR_9 = VAR_5->us_flags;
 VAR_8 = VAR_6;
 if (VAR_4->uk_fini != ((void*)0)) {
  for (VAR_8--; VAR_8 > -1; VAR_8--)
   VAR_4->uk_fini(VAR_5->us_data + (VAR_4->uk_rsize * VAR_8),
       VAR_4->uk_size);
 }
 if (VAR_4->uk_flags & VAR_3)
  FUNC_6(VAR_4->uk_slabzone, VAR_5, ((void*)0), VAR_2);
 VAR_4->uk_freef(VAR_7, VAR_1 * VAR_4->uk_ppera, VAR_9);
 FUNC_5(VAR_1 * VAR_4->uk_ppera);
}
