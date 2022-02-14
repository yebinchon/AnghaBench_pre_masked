
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int volumeDescriptorData; int sector; } ;
typedef TYPE_1__ volume_descriptor ;
struct TYPE_6__ {TYPE_1__* firstVolumeDescriptor; } ;
typedef TYPE_2__ iso9660_disk ;
typedef int FILE ;


 int FUNC_0 (TYPE_2__*,int *,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1(iso9660_disk *VAR_0, FILE *VAR_1)
{
 volume_descriptor *VAR_2 = VAR_0->firstVolumeDescriptor;

 while (VAR_2 != ((void*)0)) {
  FUNC_0(VAR_0, VAR_1, VAR_2->sector,
      VAR_2->volumeDescriptorData, 1);
  VAR_2 = VAR_2->next;
 }
 return 1;
}
