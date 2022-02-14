
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fis_part {scalar_t__ name; int size; } ;
struct TYPE_2__ {int* name; } ;
struct fis_image_desc {TYPE_1__ hdr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct fis_image_desc* FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*,char*,int) ;

int
FUNC_4(struct fis_part *VAR_2, int VAR_3, struct fis_part *VAR_4, int VAR_5)
{
 struct fis_image_desc *VAR_6;
 void *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_6 = FUNC_1();
 if (!VAR_6)
  return -1;

 for (VAR_9 = 0; VAR_9 < VAR_5 - 1; VAR_9++) {
  if (!VAR_4[VAR_9].size) {
   FUNC_2(VAR_1, "FIS error: only the last partition can detect the size automatically\n");
   VAR_9 = -1;
   goto done;
  }
 }

 VAR_7 = VAR_6;
 VAR_7 = (char *) VAR_7 + VAR_0;
 while ((void *) VAR_6 < VAR_7) {
  if (!VAR_6->hdr.name[0] || (VAR_6->hdr.name[0] == 0xff))
   break;

  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
   if (!FUNC_3((char *) VAR_6->hdr.name, (char *) VAR_2[VAR_9].name, sizeof(VAR_6->hdr.name))) {
    VAR_8++;
    goto next;
   }
  }
next:
  VAR_6++;
  continue;
 }

 if (VAR_8 == VAR_3)
  VAR_9 = 1;
 else
  VAR_9 = -1;

done:
 FUNC_0();
 return VAR_9;
}
