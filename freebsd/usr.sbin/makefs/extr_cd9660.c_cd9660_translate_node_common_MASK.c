
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef int time_t ;
typedef int iso9660_disk ;
struct TYPE_7__ {scalar_t__ fileDataLength; TYPE_1__* node; TYPE_5__* isoDirRecord; } ;
typedef TYPE_2__ cd9660node ;
struct TYPE_9__ {int size; int date; } ;
struct TYPE_8__ {int st_mtime; scalar_t__ st_ino; } ;
struct TYPE_6__ {int type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,int ,char*,int) ;
 int FUNC_4 (TYPE_5__*,int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ,int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(iso9660_disk *VAR_4, cd9660node *VAR_5)
{
 time_t VAR_6 = VAR_3.st_ino ? VAR_3.st_mtime : FUNC_8(((void*)0));
 u_char VAR_7;
 char VAR_8[VAR_0];


 FUNC_6(VAR_8, 0, VAR_0);

 (void)FUNC_3(VAR_4, VAR_5->node->name,
     VAR_8, !(FUNC_0(VAR_5->node->type)));

 VAR_7 = VAR_1;
 if (FUNC_0(VAR_5->node->type))
  VAR_7 |= VAR_2;

 FUNC_4(VAR_5->isoDirRecord, 0,
     VAR_7, FUNC_7(VAR_8), VAR_8);





 FUNC_5(VAR_5->isoDirRecord->date, VAR_6);

 FUNC_2(VAR_5->fileDataLength,
     VAR_5->isoDirRecord->size);

 if (FUNC_1(VAR_5->node->type))
  VAR_5->fileDataLength = 0;

 return 1;
}
