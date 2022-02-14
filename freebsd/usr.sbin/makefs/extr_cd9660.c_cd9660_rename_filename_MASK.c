
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ verbose_level; int isoLevel; } ;
typedef TYPE_2__ iso9660_disk ;
struct TYPE_11__ {char* o_name; TYPE_1__* isoDirRecord; } ;
typedef TYPE_3__ cd9660node ;
struct TYPE_9__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static cd9660node *
FUNC_8(iso9660_disk *VAR_4, cd9660node *VAR_5, int VAR_6,
    int VAR_7)
{
 int VAR_8 = 0;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 char *VAR_15;
 int VAR_16;
        char *VAR_17;

 if (VAR_4->verbose_level > 0)
  FUNC_6("Rename_filename called\n");

 FUNC_1(1 <= VAR_4->isoLevel && VAR_4->isoLevel <= 2);

 if (VAR_4->isoLevel == 1)
  VAR_16 = 8;
 else if (VAR_4->isoLevel == 2)
  VAR_16 = 31;
 else
  VAR_16 = VAR_0;

 VAR_17 = FUNC_2(VAR_1);

 while (VAR_8 < VAR_6 && VAR_5) {
  VAR_13 = 1;
  VAR_14 = 0;
  VAR_11 = 1;
  while (((int)(VAR_8 / VAR_13) ) >= 10) {
   VAR_11++;
   VAR_13 = VAR_13 * 10;
  }

  VAR_15 = VAR_5->o_name;
  while (VAR_14 < VAR_16) {
   if (*VAR_15 == ';')
    break;
   VAR_15++;
   VAR_14++;
  }

  if ((VAR_14 + VAR_11) < VAR_16)
   VAR_9 = VAR_14;
  else
   VAR_9 = VAR_16 - (VAR_11);
  VAR_9 -= VAR_7;
  FUNC_4(VAR_17, (VAR_5->o_name), VAR_9);


  VAR_12 = VAR_8;
  while (VAR_11 > 0) {
   VAR_10 = (int)(VAR_12 / VAR_13);
   VAR_12 = VAR_12 - VAR_10 * VAR_13;
   FUNC_7(&VAR_17[VAR_9] , "%d", VAR_10);
   VAR_11--;
   VAR_9++;
   VAR_13 = VAR_13 / 10;
  }

  while ((*VAR_15 != ';') && (VAR_9 < VAR_16)) {
   VAR_17[VAR_9] = (*VAR_15);
   VAR_15++;
   VAR_9++;
  }

  VAR_17[VAR_9] = ';';
  VAR_17[VAR_9+1] = '1';
  VAR_17[VAR_9+2] = '\0';





  FUNC_4((VAR_5->isoDirRecord->name), VAR_17, VAR_9 + 3);

  VAR_5 = FUNC_0(VAR_5, VAR_2);
  VAR_8++;
 }

 FUNC_3(VAR_17);
 return VAR_5;
}
