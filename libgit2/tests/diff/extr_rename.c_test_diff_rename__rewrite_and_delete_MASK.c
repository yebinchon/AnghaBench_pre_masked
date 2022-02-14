
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_1__ git_diff_find_options ;
typedef int git_diff ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (int **,int ,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,char const*) ;

void FUNC_9(void)
{
 const char *VAR_7 = VAR_4;
 const char *VAR_8 = VAR_5;
 git_tree *VAR_9, *VAR_10;
 git_diff *VAR_11;
 git_diff_find_options VAR_12 = VAR_1;
 git_buf VAR_13 = VAR_0;
 const char *VAR_14 =
  "diff --git a/ikeepsix.txt b/ikeepsix.txt\n"
  "deleted file mode 100644\n"
  "index eaf4a3e..0000000\n"
  "--- a/ikeepsix.txt\n"
  "+++ /dev/null\n"
  "@@ -1,27 +0,0 @@\n"
  "-I Keep Six Honest Serving-Men\n"
  "-=============================\n"
  "-\n"
  "-She sends'em abroad on her own affairs,\n"
  "- From the second she opens her eyes—\n"
  "-One million Hows, two million Wheres,\n"
  "-And seven million Whys!\n"
  "-\n"
  "-I let them rest from nine till five,\n"
  "- For I am busy then,\n"
  "-As well as breakfast, lunch, and tea,\n"
  "- For they are hungry men.\n"
  "-But different folk have different views;\n"
  "-I know a person small—\n"
  "-She keeps ten million serving-men,\n"
  "-Who get no rest at all!\n"
  "-\n"
  "-  -- Rudyard Kipling\n"
  "-\n"
  "-I KEEP six honest serving-men\n"
  "- (They taught me all I knew);\n"
  "-Their names are What and Why and When\n"
  "- And How and Where and Who.\n"
  "-I send them over land and sea,\n"
  "- I send them east and west;\n"
  "-But after they have worked for me,\n"
  "- I give them all a rest.\n"
  "diff --git a/songof7cities.txt b/songof7cities.txt\n"
  "index 4210ffd..95ceb12 100644\n"
  "--- a/songof7cities.txt\n"
  "+++ b/songof7cities.txt\n"
  "@@ -1,45 +1,45 @@\n"
  "-The Song of Seven Cities\n"
  "+THE SONG OF SEVEN CITIES\n"
  " ------------------------\n"
  " \n"
  "-I WAS Lord of Cities very sumptuously builded.\n"
  "-Seven roaring Cities paid me tribute from afar.\n"
  "-Ivory their outposts were--the guardrooms of them gilded,\n"
  "-And garrisoned with Amazons invincible in war.\n"
  "-\n"
  "-All the world went softly when it walked before my Cities--\n"
  "-Neither King nor Army vexed my peoples at their toil,\n"
  "-Never horse nor chariot irked or overbore my Cities,\n"
  "-Never Mob nor Ruler questioned whence they drew their spoil.\n"
  "-\n"
  "-Banded, mailed and arrogant from sunrise unto sunset;\n"
  "-Singing while they sacked it, they possessed the land at large.\n"
  "-Yet when men would rob them, they resisted, they made onset\n"
  "-And pierced the smoke of battle with a thousand-sabred charge.\n"
  "-\n"
  "-So they warred and trafficked only yesterday, my Cities.\n"
  "-To-day there is no mark or mound of where my Cities stood.\n"
  "-For the River rose at midnight and it washed away my Cities.\n"
  "-They are evened with Atlantis and the towns before the Flood.\n"
  "-\n"
  "-Rain on rain-gorged channels raised the water-levels round them,\n"
  "-Freshet backed on freshet swelled and swept their world from sight,\n"
  "-Till the emboldened floods linked arms and, flashing forward, drowned them--\n"
  "-Drowned my Seven Cities and their peoples in one night!\n"
  "-\n"
  "-Low among the alders lie their derelict foundations,\n"
  "-The beams wherein they trusted and the plinths whereon they built--\n"
  "-My rulers and their treasure and their unborn populations,\n"
  "-Dead, destroyed, aborted, and defiled with mud and silt!\n"
  "-\n"
  "-The Daughters of the Palace whom they cherished in my Cities,\n"
  "-My silver-tongued Princesses, and the promise of their May--\n"
  "-Their bridegrooms of the June-tide--all have perished in my Cities,\n"
  "-With the harsh envenomed virgins that can neither love nor play.\n"
  "-\n"
  "-I was Lord of Cities--I will build anew my Cities,\n"
  "-Seven, set on rocks, above the wrath of any flood.\n"
  "-Nor will I rest from search till I have filled anew my Cities\n"
  "-With peoples undefeated of the dark, enduring blood.\n"
  "+I WAS LORD OF CITIES VERY SUMPTUOUSLY BUILDED.\n"
  "+SEVEN ROARING CITIES PAID ME TRIBUTE FROM AFAR.\n"
  "+IVORY THEIR OUTPOSTS WERE--THE GUARDROOMS OF THEM GILDED,\n"
  "+AND GARRISONED WITH AMAZONS INVINCIBLE IN WAR.\n"
  "+\n"
  "+ALL THE WORLD WENT SOFTLY WHEN IT WALKED BEFORE MY CITIES--\n"
  "+NEITHER KING NOR ARMY VEXED MY PEOPLES AT THEIR TOIL,\n"
  "+NEVER HORSE NOR CHARIOT IRKED OR OVERBORE MY CITIES,\n"
  "+NEVER MOB NOR RULER QUESTIONED WHENCE THEY DREW THEIR SPOIL.\n"
  "+\n"
  "+BANDED, MAILED AND ARROGANT FROM SUNRISE UNTO SUNSET;\n"
  "+SINGING WHILE THEY SACKED IT, THEY POSSESSED THE LAND AT LARGE.\n"
  "+YET WHEN MEN WOULD ROB THEM, THEY RESISTED, THEY MADE ONSET\n"
  "+AND PIERCED THE SMOKE OF BATTLE WITH A THOUSAND-SABRED CHARGE.\n"
  "+\n"
  "+SO THEY WARRED AND TRAFFICKED ONLY YESTERDAY, MY CITIES.\n"
  "+TO-DAY THERE IS NO MARK OR MOUND OF WHERE MY CITIES STOOD.\n"
  "+FOR THE RIVER ROSE AT MIDNIGHT AND IT WASHED AWAY MY CITIES.\n"
  "+THEY ARE EVENED WITH ATLANTIS AND THE TOWNS BEFORE THE FLOOD.\n"
  "+\n"
  "+RAIN ON RAIN-GORGED CHANNELS RAISED THE WATER-LEVELS ROUND THEM,\n"
  "+FRESHET BACKED ON FRESHET SWELLED AND SWEPT THEIR WORLD FROM SIGHT,\n"
  "+TILL THE EMBOLDENED FLOODS LINKED ARMS AND, FLASHING FORWARD, DROWNED THEM--\n"
  "+DROWNED MY SEVEN CITIES AND THEIR PEOPLES IN ONE NIGHT!\n"
  "+\n"
  "+LOW AMONG THE ALDERS LIE THEIR DERELICT FOUNDATIONS,\n"
  "+THE BEAMS WHEREIN THEY TRUSTED AND THE PLINTHS WHEREON THEY BUILT--\n"
  "+MY RULERS AND THEIR TREASURE AND THEIR UNBORN POPULATIONS,\n"
  "+DEAD, DESTROYED, ABORTED, AND DEFILED WITH MUD AND SILT!\n"
  "+\n"
  "+THE DAUGHTERS OF THE PALACE WHOM THEY CHERISHED IN MY CITIES,\n"
  "+MY SILVER-TONGUED PRINCESSES, AND THE PROMISE OF THEIR MAY--\n"
  "+THEIR BRIDEGROOMS OF THE JUNE-TIDE--ALL HAVE PERISHED IN MY CITIES,\n"
  "+WITH THE HARSH ENVENOMED VIRGINS THAT CAN NEITHER LOVE NOR PLAY.\n"
  "+\n"
  "+I WAS LORD OF CITIES--I WILL BUILD ANEW MY CITIES,\n"
  "+SEVEN, SET ON ROCKS, ABOVE THE WRATH OF ANY FLOOD.\n"
  "+NOR WILL I REST FROM SEARCH TILL I HAVE FILLED ANEW MY CITIES\n"
  "+WITH PEOPLES UNDEFEATED OF THE DARK, ENDURING BLOOD.\n"
  " \n"
  " To the sound of trumpets shall their seed restore my Cities\n"
  " Wealthy and well-weaponed, that once more may I behold\n";

 VAR_9 = FUNC_8(VAR_6, VAR_7);
 VAR_10 = FUNC_8(VAR_6, VAR_8);

 VAR_12.flags = VAR_2;

 FUNC_1(FUNC_6(&VAR_11, VAR_6, VAR_9, VAR_10, ((void*)0)));
 FUNC_1(FUNC_3(VAR_11, &VAR_12));

 FUNC_1(FUNC_5(&VAR_13, VAR_11, VAR_3));

 FUNC_0(VAR_14, VAR_13.ptr);

 FUNC_2(&VAR_13);
 FUNC_4(VAR_11);
 FUNC_7(VAR_9);
 FUNC_7(VAR_10);
}
