
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* volumeDescriptorData; int sector; struct TYPE_7__* next; } ;
typedef TYPE_1__ volume_descriptor ;
struct TYPE_8__ {scalar_t__ verbose_level; scalar_t__ is_bootable; TYPE_1__* firstVolumeDescriptor; int primaryDescriptor; } ;
typedef TYPE_2__ iso9660_disk ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 void* FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(iso9660_disk *VAR_3)
{

 int VAR_4 = 16;

 volume_descriptor *VAR_5, *VAR_6;


 VAR_5 = FUNC_2(sizeof(*VAR_5));
 VAR_5->volumeDescriptorData =
    (unsigned char *)&VAR_3->primaryDescriptor;
 VAR_5->volumeDescriptorData[0] = VAR_0;
 VAR_5->volumeDescriptorData[6] = 1;
 VAR_5->sector = VAR_4;
 FUNC_3(VAR_5->volumeDescriptorData + 1,
     VAR_1, 5);
 VAR_3->firstVolumeDescriptor = VAR_5;

 VAR_4++;

 if (VAR_3->is_bootable) {
  VAR_6 = FUNC_2(sizeof(*VAR_6));
  VAR_6->volumeDescriptorData = FUNC_1(1, 2048);
  VAR_5->next = VAR_6;
  VAR_5 = VAR_6;
  VAR_6->sector = 17;
  if (VAR_3->verbose_level > 0)
   FUNC_4("Setting up boot volume descriptor\n");
  FUNC_0(VAR_3, VAR_6);
  VAR_4++;
 }


 VAR_6 = FUNC_2(sizeof(*VAR_6));
 VAR_6->volumeDescriptorData = FUNC_1(1, 2048);
 VAR_5->next = VAR_6;
 VAR_6->volumeDescriptorData[0] = VAR_2;
 VAR_6->next = ((void*)0);
 VAR_6->volumeDescriptorData[6] = 1;
 VAR_6->sector = VAR_4;
 FUNC_3(VAR_6->volumeDescriptorData + 1,
     VAR_1, 5);

 VAR_4++;
 return VAR_4;
}
