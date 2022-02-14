
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_dig; TYPE_2__** afmt; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct amdgpu_afmt {int dummy; } ;
struct TYPE_5__ {int id; int offset; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3->mode_info.num_dig; VAR_4++)
  VAR_3->mode_info.afmt[VAR_4] = ((void*)0);


 for (VAR_4 = 0; VAR_4 < VAR_3->mode_info.num_dig; VAR_4++) {
  VAR_3->mode_info.afmt[VAR_4] = FUNC_2(sizeof(struct amdgpu_afmt), VAR_1);
  if (VAR_3->mode_info.afmt[VAR_4]) {
   VAR_3->mode_info.afmt[VAR_4]->offset = VAR_2[VAR_4];
   VAR_3->mode_info.afmt[VAR_4]->id = VAR_4;
  } else {
   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    FUNC_1(VAR_3->mode_info.afmt[VAR_5]);
    VAR_3->mode_info.afmt[VAR_5] = ((void*)0);
   }
   FUNC_0("Out of memory allocating afmt table\n");
   return -VAR_0;
  }
 }
 return 0;
}
