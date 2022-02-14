
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct thumb2 {int computed; int filename; int quality; } ;
struct forth_stack {int dummy; } ;
struct TYPE_16__ {int columns; int rows; } ;
struct TYPE_15__ {int height; int width; } ;
typedef TYPE_1__ RectangleInfo ;
typedef TYPE_2__ Image ;
typedef int FilterTypes ;


 int FUNC_0 (TYPE_2__*) ;
 void* VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (struct forth_stack*,char*,int ) ;
 int FUNC_3 (int const,int const,struct thumb2*,TYPE_1__*,TYPE_1__*) ;
 TYPE_2__* FUNC_4 (struct forth_stack*,TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_5 (struct forth_stack*,TYPE_2__*,int ,int ,int ,int const) ;
 scalar_t__ FUNC_6 (struct forth_stack*,TYPE_2__*,int ,int ) ;

__attribute__((used)) static void *FUNC_7 (Image *VAR_3, struct thumb2 *VAR_4, struct forth_stack *VAR_5, const FilterTypes VAR_6, const int VAR_7) {
  const int VAR_8 = VAR_3->columns, VAR_9 = VAR_3->rows;
  RectangleInfo VAR_10, VAR_11;
  int VAR_12 = FUNC_3 (VAR_8, VAR_9, VAR_4, &VAR_10, &VAR_11);
  Image *VAR_13 = FUNC_1 (VAR_3);

  if (VAR_12 & VAR_2) {
    Image *VAR_14 = FUNC_5 (VAR_5, VAR_13, VAR_10.width, VAR_10.height, 0, VAR_6);
    if (VAR_14 == ((void*)0)) {
      FUNC_0 (VAR_13);
      return FUNC_2 (VAR_5, "GENERATE_THUMBS2: gm_resize_image fail. %s", VAR_4->filename);
    }
    FUNC_0 (VAR_13);
    VAR_13 = VAR_14;
  }

  if (VAR_12 & VAR_1) {
    Image *VAR_15 = FUNC_4 (VAR_5, VAR_13, &VAR_11);
    if (VAR_15 == ((void*)0)) {
      FUNC_0 (VAR_13);
      return FUNC_2 (VAR_5, "GENERATE_THUMBS2: gm_crop_image fail. %s", VAR_4->filename);
    }
    FUNC_0 (VAR_13);
    VAR_13 = VAR_15;
  }

  if (FUNC_6 (VAR_5, VAR_13, VAR_4->filename, VAR_4->quality) < 0) {
    FUNC_0 (VAR_13);
    return FUNC_2 (VAR_5, "GENERATE_THUMBS2: write_image fail. %s", VAR_4->filename);
  }

  FUNC_0 (VAR_13);
  VAR_4->computed = 1;
  return VAR_0;
}
