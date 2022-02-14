
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ewah_bitmap {scalar_t__ buffer_size; } ;
struct bitmapped_commit {int xor_offset; struct ewah_bitmap* write_as; struct ewah_bitmap* bitmap; } ;
struct TYPE_2__ {int selected_nr; struct bitmapped_commit* selected; } ;


 int FUNC_0 (struct ewah_bitmap*) ;
 struct ewah_bitmap* FUNC_1 () ;
 int FUNC_2 (struct ewah_bitmap*,struct ewah_bitmap*,struct ewah_bitmap*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(void)
{
 static const int VAR_1 = 10;

 int VAR_2, VAR_3 = 0;

 while (VAR_3 < VAR_0.selected_nr) {
  struct bitmapped_commit *VAR_4 = &VAR_0.selected[VAR_3];

  int VAR_5 = 0;
  struct ewah_bitmap *VAR_6 = VAR_4->bitmap;
  struct ewah_bitmap *VAR_7;

  for (VAR_2 = 1; VAR_2 <= VAR_1; ++VAR_2) {
   int VAR_8 = VAR_3 - VAR_2;

   if (VAR_8 < 0)
    break;

   VAR_7 = FUNC_1();
   FUNC_2(VAR_0.selected[VAR_8].bitmap, VAR_4->bitmap, VAR_7);

   if (VAR_7->buffer_size < VAR_6->buffer_size) {
    if (VAR_6 != VAR_4->bitmap)
     FUNC_0(VAR_6);

    VAR_6 = VAR_7;
    VAR_5 = VAR_2;
   } else {
    FUNC_0(VAR_7);
   }
  }

  VAR_4->xor_offset = VAR_5;
  VAR_4->write_as = VAR_6;

  VAR_3++;
 }
}
