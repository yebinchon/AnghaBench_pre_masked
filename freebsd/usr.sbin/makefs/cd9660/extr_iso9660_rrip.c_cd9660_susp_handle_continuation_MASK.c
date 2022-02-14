
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int iso9660_disk ;
struct TYPE_6__ {TYPE_1__* isoDirRecord; } ;
typedef TYPE_2__ cd9660node ;
struct TYPE_5__ {scalar_t__* length; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_2(iso9660_disk *VAR_0, cd9660node *VAR_1)
{
 FUNC_0 (VAR_1 != ((void*)0));


 if (FUNC_1(VAR_0,
  VAR_1,(int)(VAR_1->isoDirRecord->length[0])) < 0)
  return 0;

 return 1;
}
