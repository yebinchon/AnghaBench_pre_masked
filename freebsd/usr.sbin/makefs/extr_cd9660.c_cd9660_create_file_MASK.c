
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int iso9660_disk ;
struct TYPE_10__ {int type; TYPE_1__* node; scalar_t__ fileDataLength; } ;
typedef TYPE_2__ cd9660node ;
struct TYPE_9__ {int * inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,char const*,TYPE_2__*,int,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 int * FUNC_2 (int,int) ;

__attribute__((used)) static cd9660node *
FUNC_3(iso9660_disk *VAR_2, const char *VAR_3,
    cd9660node *VAR_4, cd9660node *VAR_5)
{
 cd9660node *VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, 1, 1);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->fileDataLength = 0;

 VAR_6->type = VAR_0 | VAR_1;

 VAR_6->node->inode = FUNC_2(1, sizeof(*VAR_6->node->inode));
 *VAR_6->node->inode = *VAR_5->node->inode;

 if (FUNC_1(VAR_2, VAR_6) == 0)
  return ((void*)0);
 return VAR_6;
}
