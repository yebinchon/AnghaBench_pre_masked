
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int iso9660_disk ;
struct TYPE_13__ {TYPE_1__* isoDirRecord; int cn_children; } ;
typedef TYPE_2__ cd9660node ;
struct TYPE_12__ {int name; } ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *,TYPE_2__*,int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(iso9660_disk *VAR_2, cd9660node *VAR_3,
    int VAR_4)
{
 cd9660node *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10 = VAR_4;
 int VAR_11;
 int VAR_12 = 0;
 cd9660node *VAR_13;

 for (VAR_5 = FUNC_0(&VAR_3->cn_children);
      VAR_5 != ((void*)0) && (VAR_6 = FUNC_1(VAR_5, VAR_1)) != ((void*)0);) {
  if (FUNC_5(VAR_5->isoDirRecord->name,
             VAR_6->isoDirRecord->name) != 0) {
   VAR_5 = FUNC_1(VAR_5, VAR_1);
   continue;
  }
  VAR_12 = 1;
  VAR_11 = VAR_8 = FUNC_3(VAR_5);
  VAR_13 = VAR_5;
  while (VAR_11 > 0) {
   VAR_11--;
   VAR_13 = FUNC_1(VAR_13, VAR_1);
  }
  VAR_10 = VAR_4;
  while (VAR_10 > 0) {
   if ((VAR_6 = FUNC_1(VAR_13, VAR_1)) != ((void*)0))
    VAR_13 = VAR_6;
   else if ((VAR_7 = FUNC_2(VAR_5, VAR_0, VAR_1)) != ((void*)0))
    VAR_5 = VAR_7;
   else
    VAR_9++;
   VAR_10--;
  }
  VAR_8 += VAR_4;
  VAR_5 = FUNC_4(VAR_2, VAR_5, VAR_8,
      VAR_9);
 }
 return VAR_12;
}
