
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_patch ;
typedef int git_diff_options ;
struct TYPE_13__ {int old_lineno; int new_lineno; int content_offset; int content_len; int content; scalar_t__ origin; } ;
typedef TYPE_1__ git_diff_line ;
struct TYPE_14__ {scalar_t__ new_lines; scalar_t__ new_start; scalar_t__ old_lines; scalar_t__ old_start; } ;
typedef TYPE_2__ git_diff_hunk ;
struct TYPE_15__ {scalar_t__ status; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_diff ;
typedef int git_config ;
struct TYPE_16__ {char const* ptr; } ;
typedef TYPE_4__ git_buf ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,int *,int *) ;
 int FUNC_14 (TYPE_4__*,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int *,int ) ;
 TYPE_3__* FUNC_17 (int *) ;
 int FUNC_18 (TYPE_2__ const**,size_t*,int *,int) ;
 int FUNC_19 (TYPE_1__ const**,int *,int,int) ;
 scalar_t__ FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,int) ;
 int FUNC_22 (int **,int ) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *) ;

void FUNC_26(void)
{
 git_config *VAR_8;
 git_tree *VAR_9;
 git_diff_options VAR_10 = VAR_6;
 git_diff *VAR_11;
 git_patch *VAR_12;
 const git_diff_delta *VAR_13;
 const git_diff_hunk *VAR_14;
 const git_diff_line *VAR_15;
 size_t VAR_16;
 git_buf VAR_17 = VAR_0, VAR_18 = VAR_0;
 const char *VAR_19 = "The Song of Seven Cities\n------------------------\n\nI WAS Lord of Cities very sumptuously builded.\nSeven roaring Cities paid me tribute from afar.\nIvory their outposts were--the guardrooms of them gilded,\nAnd garrisoned with Amazons invincible in war.\n\nThis is some new text;\nNot as good as the old text;\nBut here it is.\n\nSo they warred and trafficked only yesterday, my Cities.\nTo-day there is no mark or mound of where my Cities stood.\nFor the River rose at midnight and it washed away my Cities.\nThey are evened with Atlantis and the towns before the Flood.\n\nRain on rain-gorged channels raised the water-levels round them,\nFreshet backed on freshet swelled and swept their world from sight,\nTill the emboldened floods linked arms and, flashing forward, drowned them--\nDrowned my Seven Cities and their peoples in one night!\n\nLow among the alders lie their derelict foundations,\nThe beams wherein they trusted and the plinths whereon they built--\nMy rulers and their treasure and their unborn populations,\nDead, destroyed, aborted, and defiled with mud and silt!\n\nAnother replacement;\nBreaking up the poem;\nGenerating some hunks.\n\nTo the sound of trumpets shall their seed restore my Cities\nWealthy and well-weaponed, that once more may I behold\nAll the world go softly when it walks before my Cities,\nAnd the horses and the chariots fleeing from them as of old!\n\n  -- Rudyard Kipling\n";

 VAR_7 = FUNC_5("renames");

 FUNC_3(FUNC_10(&VAR_8));
 FUNC_24(VAR_7, VAR_8);
 FUNC_9(VAR_8);

 FUNC_23(VAR_7, 0);

 FUNC_3(
  FUNC_14(&VAR_17, "renames/songof7cities.txt"));

 FUNC_4("renames/songof7cities.txt", VAR_19);

 FUNC_3(FUNC_22(&VAR_9, VAR_7));

 FUNC_3(FUNC_13(&VAR_11, VAR_7, VAR_9, &VAR_10));

 FUNC_1(1, (int)FUNC_12(VAR_11));

 FUNC_3(FUNC_16(&VAR_12, VAR_11, 0));
 FUNC_0((VAR_13 = FUNC_17(VAR_12)) != ((void*)0));

 FUNC_1(VAR_1, (int)VAR_13->status);
 FUNC_1(2, (int)FUNC_20(VAR_12));



 FUNC_3(
  FUNC_18(&VAR_14, &VAR_16, VAR_12, 0));

 FUNC_1(18, (int)VAR_16);

 FUNC_1(6, (int)VAR_14->old_start);
 FUNC_1(15, (int)VAR_14->old_lines);
 FUNC_1(6, (int)VAR_14->new_start);
 FUNC_1(9, (int)VAR_14->new_lines);

 FUNC_1(18, (int)FUNC_21(VAR_12, 0));

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 0, 0));
 FUNC_1(VAR_3, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("Ivory their outposts were--the guardrooms of them gilded,\n", VAR_18.ptr);
 FUNC_1(6, VAR_15->old_lineno);
 FUNC_1(6, VAR_15->new_lineno);
 FUNC_1(-1, VAR_15->content_offset);

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 0, 3));
 FUNC_1(VAR_4, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("All the world went softly when it walked before my Cities--\n", VAR_18.ptr);
 FUNC_1(9, VAR_15->old_lineno);
 FUNC_1(-1, VAR_15->new_lineno);
 FUNC_1(252, VAR_15->content_offset);

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 0, 12));
 FUNC_1(VAR_2, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("This is some new text;\n", VAR_18.ptr);
 FUNC_1(-1, VAR_15->old_lineno);
 FUNC_1(9, VAR_15->new_lineno);
 FUNC_1(252, VAR_15->content_offset);



 FUNC_3(FUNC_18(&VAR_14, &VAR_16, VAR_12, 1));

 FUNC_1(18, (int)VAR_16);

 FUNC_1(31, (int)VAR_14->old_start);
 FUNC_1(15, (int)VAR_14->old_lines);
 FUNC_1(25, (int)VAR_14->new_start);
 FUNC_1(9, (int)VAR_14->new_lines);

 FUNC_1(18, (int)FUNC_21(VAR_12, 1));

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 1, 0));
 FUNC_1(VAR_3, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("My rulers and their treasure and their unborn populations,\n", VAR_18.ptr);
 FUNC_1(31, VAR_15->old_lineno);
 FUNC_1(25, VAR_15->new_lineno);
 FUNC_1(-1, VAR_15->content_offset);

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 1, 3));
 FUNC_1(VAR_4, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("The Daughters of the Palace whom they cherished in my Cities,\n", VAR_18.ptr);
 FUNC_1(34, VAR_15->old_lineno);
 FUNC_1(-1, VAR_15->new_lineno);
 FUNC_1(1468, VAR_15->content_offset);

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 1, 12));
 FUNC_1(VAR_2, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("Another replacement;\n", VAR_18.ptr);
 FUNC_1(-1, VAR_15->old_lineno);
 FUNC_1(28, VAR_15->new_lineno);
 FUNC_1(1066, VAR_15->content_offset);

 FUNC_15(VAR_12);
 FUNC_11(VAR_11);



 FUNC_7(&VAR_17);
 FUNC_4("renames/songof7cities.txt", VAR_17.ptr);

 FUNC_3(FUNC_13(&VAR_11, VAR_7, VAR_9, &VAR_10));

 FUNC_1(1, (int)FUNC_12(VAR_11));

 FUNC_3(FUNC_16(&VAR_12, VAR_11, 0));
 FUNC_0((VAR_13 = FUNC_17(VAR_12)) != ((void*)0));

 FUNC_1(VAR_1, (int)VAR_13->status);
 FUNC_1(1, (int)FUNC_20(VAR_12));



 FUNC_3(FUNC_18(&VAR_14, &VAR_16, VAR_12, 0));

 FUNC_1(6, (int)VAR_16);

 FUNC_1(46, (int)VAR_14->old_start);
 FUNC_1(4, (int)VAR_14->old_lines);
 FUNC_1(46, (int)VAR_14->new_start);
 FUNC_1(4, (int)VAR_14->new_lines);

 FUNC_1(6, (int)FUNC_21(VAR_12, 0));

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 0, 1));
 FUNC_1(VAR_3, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("And the horses and the chariots fleeing from them as of old!\n", VAR_18.ptr);
 FUNC_1(47, VAR_15->old_lineno);
 FUNC_1(47, VAR_15->new_lineno);

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 0, 2));
 FUNC_1(VAR_3, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("\n", VAR_18.ptr);
 FUNC_1(48, VAR_15->old_lineno);
 FUNC_1(48, VAR_15->new_lineno);

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 0, 3));
 FUNC_1(VAR_4, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("  -- Rudyard Kipling\n", VAR_18.ptr);
 FUNC_1(49, VAR_15->old_lineno);
 FUNC_1(-1, VAR_15->new_lineno);

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 0, 4));
 FUNC_1(VAR_2, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("  -- Rudyard Kipling", VAR_18.ptr);
 FUNC_1(-1, VAR_15->old_lineno);
 FUNC_1(49, VAR_15->new_lineno);

 FUNC_3(FUNC_19(&VAR_15, VAR_12, 0, 5));
 FUNC_1(VAR_5, (int)VAR_15->origin);
 FUNC_3(FUNC_8(&VAR_18, VAR_15->content, VAR_15->content_len));
 FUNC_2("\n\\ No newline at end of file\n", VAR_18.ptr);
 FUNC_1(-1, VAR_15->old_lineno);
 FUNC_1(49, VAR_15->new_lineno);

 FUNC_15(VAR_12);
 FUNC_11(VAR_11);

 FUNC_6(&VAR_18);
 FUNC_6(&VAR_17);
 FUNC_25(VAR_9);
}
